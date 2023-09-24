/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abderrsfa <abderrsfa@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:42:05 by asfaihi           #+#    #+#             */
/*   Updated: 2023/09/24 23:52:18 by abderrsfa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const std::string &filename) : _filename(filename)
{
	this->fill_db();
	this->read_file();
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &src)
{
	*this = src;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &rhs)
{
	if (this == &rhs)
		return (*this);
	this->_db = rhs._db;
	return (*this);
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::ft_error(std::string error_message, bool exit_program)
{
	std::cerr << error_message << std::endl;
	if (exit_program)
		exit(1);
}

void BitcoinExchange::fill_db()
{
	std::fstream file("data.csv");
	if (!file.is_open())
		ft_error("Error: invalid data.csv file", true);
	std::string line;
	std::getline(file, line);
	while (std::getline(file, line))
	{
		std::vector<std::string> entry = ft_split(line, ',');
		this->_db.insert(std::make_pair(entry[0], std::atof(entry[1].c_str())));
	}
	file.close();
}

std::vector<std::string> BitcoinExchange::ft_split(const std::string &input, char delimiter)
{
	std::vector<std::string> result;
	std::string currentWord;

	for (size_t i = 0; i < input.size(); ++i)
	{
		char c = input[i];
		if (c == delimiter)
		{
			if (!currentWord.empty())
			{
				result.push_back(currentWord);
				currentWord.clear();
			}
		}
		else
			currentWord += c;
	}
	if (!currentWord.empty())
		result.push_back(currentWord);
	return result;
}

void BitcoinExchange::read_file()
{
	std::fstream file(this->_filename.c_str());
	if (!file.is_open())
		ft_error("Error: input file not found.", true);
	std::string line;
	while (getline(file, line))
	{
		if (line != "")
			break;
	}
	line = remove_spaces(line);
	if (line.length() != 10 || line.find("date") == std::string::npos || line.find("|") == std::string::npos || line.find("value") == std::string::npos)
		ft_error("Error: cannot find data or value", true);
	while (std::getline(file, line))
	{
		double value;
		std::string date;
		if (!is_valid_entry(line, date, value))
			continue;
		std::map<std::string, double>::iterator it = this->_db.find(date);
		if (it == this->_db.end())
		{
			it = this->_db.lower_bound(date);
			it--;
		}
		std::cout << date << " => " << value << " = " << it->second * value << std::endl;
	}
}

std::string BitcoinExchange::remove_spaces(const std::string &string)
{
	std::string result = string;
	result.erase(std::remove(result.begin(), result.end(), ' '), result.end());
	return result;
}

bool BitcoinExchange::is_valid_entry(const std::string &line, std::string &date, double &value)
{
	if (line == "")
		return false;
	std::vector<std::string> date_and_val = ft_split(remove_spaces(line), '|');
	date = date_and_val[0];
	std::string val = date_and_val[1];
	if (date_and_val.size() != 2)
	{
		ft_error("Error: bad input => " + date, false);
		return false;
	}
	Date s_date;
	if (get_date(date_and_val[0], s_date) == -1)
		return false;
	if (!is_valid_number(val) || std::count(val.begin(), val.end(), '.') > 1 || val[0] == '.' || val[val.size() - 1] == '.')
	{
		ft_error("Error: bad input => " + date, false);
		return false;
	}
	value = std::atof(val.c_str());
	if (value < 0)
	{
		ft_error("Error: not a positive number.", false);
		return false;
	}
	if (value > INT_MAX)
	{
		ft_error("Error: too large a number.", false);
		return false;
	}
	return true;
}

int BitcoinExchange::get_date(const std::string &date, Date &s_date)
{
	std::vector<std::string> date_sections = ft_split(date, '-');
	if (date_sections[0].length() != 4 || date_sections[1].length() != 2 || date_sections[2].length() != 2)
	{
		ft_error("Error: bad input => " + date, false);
		return -1;
	}
	if (std::count(date.begin(), date.end(), '-') != 2 || date_sections.size() != 3 || !is_valid_number(date_sections[0]) || !is_valid_number(date_sections[1]) || !is_valid_number(date_sections[2]))
	{
		ft_error("Error: bad input => " + date, false);
		return -1;
	}
	s_date.year = std::atoi(date_sections[0].c_str());
	s_date.month = std::atoi(date_sections[1].c_str());
	s_date.day = std::atoi(date_sections[2].c_str());
	if (!is_valid_date(s_date))
	{
		ft_error("Error: invalid date", false);
		return -1;
	}
	return 0;
}

bool BitcoinExchange::is_valid_date(const Date &s_date)
{
	int year = s_date.year;
	int month = s_date.month;
	int day = s_date.day;

	if (year < 1 || month < 1 || month > 12 || day < 1 || day > 31)
		return false;
	if (month == 2 && day > 29)
		return false;
	if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
		return false;
	if (month == 2 && day == 29 && !is_leap_year(year))
		return false;
	return true;
}

bool BitcoinExchange::is_leap_year(int year)
{
	return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

bool BitcoinExchange::is_valid_number(const std::string &str)
{
	for (std::string::size_type i = 0; i < str.length(); ++i)
	{
		if (!std::isdigit(str[i]) && str[i] != '-' && str[i] != '.')
			return false;
	}
	return !str.empty();
}