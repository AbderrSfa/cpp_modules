/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:58:47 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/23 09:55:47 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter( void ) {}

Converter::Converter(std::string Input) : _InInt(0), _InChar(0), _InFloat(0), _InDouble(0){
	this->_Type = this->ParseInput(Input);
	typedef	void(Converter:: *FunctionPointer)(std::string Input);
	FunctionPointer pointer[4] = {
		pointer[0] = &Converter::CastFromInt,
		pointer[1] = &Converter::CastFromChar,
		pointer[2] = &Converter::CastFromFloat,
		pointer[3] = &Converter::CastFromDouble
	};

	char	casts[4] = {'i', 'c', 'f', 'd'};

	for (size_t i = 0; i < 4; i++)
	{
		if (casts[i] == this->_Type) {
			(this->*pointer[i])(Input);
		}
	}
}

Converter::Converter(Converter const & src) { *this = src; }

Converter & Converter::operator=(Converter const & rhs) {
	if (this == &rhs)
		return (*this);
	this->_InInt = rhs._InInt;
	this->_InChar = rhs._InChar;
	this->_InFloat = rhs._InFloat;
	this->_InDouble = rhs._InDouble;
	return (*this);
}

Converter::~Converter() {}

const char * Converter::BadArgument::what() const throw() {
	return ("Exception: Argument is invalid!");
}

char	Converter::ParseInput(std::string Input) const {
	if (Input == "nanf" || Input == "-inff" || Input == "+inff"
		|| Input == "nan" || Input == "-inf" || Input == "+inf")
		return ('z');
	if ((std::count(Input.begin(), Input.end(), '.') > 1)
		|| ((std::count(Input.begin(), Input.end(), '-') > 1) )
		|| (std::count(Input.begin(), Input.end(), '+') > 1)
		|| (Input[Input.length() - 1] == '.' && Input.length() > 1))
		throw BadArgument();

	if (std::isdigit(Input[0])
		|| (Input[0] == '-' && std::isdigit(Input[1]))
		|| (Input[0] == '+' && std::isdigit(Input[1])))
	{
		int	i = 0;
		if (Input[i] == '-' || Input[i] == '+')
			i++;
		while (std::isdigit(Input[i]) || Input[i] == '.') {
			i++;
		}
		if (Input[i] == 'f' && Input[i + 1] == '\0')
			return ('f');
		else if (Input[i] == '\0' && std::count(Input.begin(), Input.end(), '.'))
			return ('d');
		else if (Input[i] == '\0')
			return ('i');
		else
			throw BadArgument();
	}
	else if ((Input.length() == 1) && !isdigit(Input[0]))
		return ('c');
	else
		throw BadArgument();
}

void	Converter::CastFromInt(std::string Input) {
	this->_InInt = std::stoi(Input);
	this->_InChar = static_cast<char>(this->_InInt);
	this->_InFloat = static_cast<float>(this->_InInt);
	this->_InDouble = static_cast<double>(this->_InInt);
}

void	Converter::CastFromChar(std::string Input) {
	this->_InChar = Input[0];
	this->_InInt = static_cast<int>(this->_InChar);
	this->_InFloat = static_cast<float>(this->_InChar);
	this->_InDouble = static_cast<double>(this->_InChar);
}

void	Converter::CastFromFloat(std::string Input) {
	this->_InFloat = std::stof(Input);
	this->_InInt = static_cast<int>(this->_InFloat);
	this->_InChar = static_cast<char>(this->_InFloat);
	this->_InDouble = static_cast<double>(this->_InFloat);
}

void	Converter::CastFromDouble(std::string Input) {
	this->_InDouble = std::stod(Input);
	this->_InInt = static_cast<int>(this->_InDouble);
	this->_InChar = static_cast<char>(this->_InDouble);
	this->_InFloat = static_cast<float>(this->_InDouble);
}

void	Converter::PrintChar(std::string Input) const {
	std::cout << "char: ";
	if (Input == "nan" || Input == "+inf" || Input == "-inf" ||
		Input == "nanf" || Input == "+inff" || Input == "-inff")
		std::cout << "impossible";
	else if (!std::isprint(this->_InChar))
		std::cout << "Non displayable";
	else
		std::cout << "'" << this->_InChar << "'";
	std::cout << std::endl;
}

void	Converter::PrintInt(std::string Input) const {
	std::cout << "int: ";
	if (Input == "nan" || Input == "+inf" || Input == "-inf" ||
		Input == "nanf" || Input == "+inff" || Input == "-inff")
		std::cout << "impossible";
	else
		std::cout << this->_InInt;
	std::cout << std::endl;
}

void	Converter::PrintFloat(std::string Input) const {
	std::cout << "float: ";
	if (Input == "nan" || Input == "+inf" || Input == "-inf")
		std::cout << Input + "f";
	else if (Input == "nanf" || Input == "+inff" || Input == "-inff")
		std::cout << Input;
	else
	{
		std::cout << this->_InFloat;
		if (Input.find(".") == std::string::npos)
			std::cout << ".0f";
		else {
			std::string fs = std::to_string(this->_InFloat);
			int	i = fs.length() - 1;
			int	check = 0;
			while (fs[i] != '.') {
				if (fs[i] != '0' && fs[i] != '.')
					check = 1;
				i--;
			}
			if (check)
				std::cout << "f";
			else
				std::cout << ".0f";
		}
	}
	std::cout << std::endl;
}

void	Converter::PrintDouble(std::string Input) const {
	std::cout << "double: ";
	if (Input == "nan" || Input == "+inf" || Input == "-inf")
		std::cout << Input;
	else if (Input == "+inff" || Input == "-inff")
		std::cout << Input.erase(4);
	else if (Input == "nanf")
		std::cout << "nan";
	else
	{
		std::cout << this->_InDouble;
		if (Input.find(".") == std::string::npos)
			std::cout << ".0";
		else {
			std::string fs = std::to_string(this->_InDouble);
			int	i = fs.length() - 1;
			int	check = 0;
			while (fs[i] != '.') {
				if (fs[i] != '0' && fs[i] != '.')
					check = 1;
				i--;
			}
			if (!check)
				std::cout << ".0";
		}
	}
	std::cout << std::endl;
}
