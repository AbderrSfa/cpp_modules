/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abderrsfa <abderrsfa@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:42:07 by asfaihi           #+#    #+#             */
/*   Updated: 2023/09/24 23:54:14 by abderrsfa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <climits>
#include <vector>
#include <cstdlib>
#include <algorithm>

class BitcoinExchange
{
private:
	struct Date
	{
		int year;
		int month;
		int day;
	};

	std::map<std::string, double> _db;

	void ft_error(std::string error_message, bool exit_program);
	void fill_db();
	std::vector<std::string> ft_split(const std::string &input, char delimiter);
	void read_file();
	std::string remove_spaces(const std::string &string);
	bool is_valid_entry(const std::string &line, std::string &date, double &value);
	int get_date(const std::string &date, Date &s_date);
	bool is_valid_date(const Date &s_date);
	bool is_leap_year(int year);
	bool is_valid_number(const std::string &str);
	BitcoinExchange(void);

public:
	std::string _filename;
	BitcoinExchange(const std::string &filename);
	BitcoinExchange(BitcoinExchange const &src);
	BitcoinExchange &operator=(BitcoinExchange const &rhs);
	~BitcoinExchange();
};

#endif