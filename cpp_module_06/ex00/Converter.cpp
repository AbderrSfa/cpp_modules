/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:58:47 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/21 00:29:53 by asfaihi          ###   ########.fr       */
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
	if ((std::count(Input.begin(), Input.end(), '.') > 1)
		|| ((std::count(Input.begin(), Input.end(), '-') > 1) )
		|| (std::count(Input.begin(), Input.end(), '+') > 1) )
		throw BadArgument();

	if (std::isdigit(Input[0])
		|| (Input[0] == '-' && std::isdigit(Input[1]))
		|| (Input[0] == '+' && std::isdigit(Input[1])))
	{
		if (Input.find(".", 0) != std::string::npos) {
			if (Input[Input.length() - 1] == 'f') {
				std::cout << "f" << std::endl;
				return ('f');
			}
			else {
				std::cout << "d" << std::endl;
				return ('d');
			}
		}
		else {
			std::cout << "i" << std::endl;
			return ('i');
		}
	}

	else if ((Input.length() == 1) && !isdigit(Input[0])) {
		std::cout << "c" << std::endl;
		return ('c');
	}

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

void	Converter::PrintConversion( void ) const {
	{
		std::cout << "char: ";
		if (!std::isprint(this->_InChar))
			std::cout << "Non displayable";
		else
			std::cout << "'" << this->_InChar << "'";
		std::cout << std::endl;
	}
	{
		std::cout << "int: ";
		std::cout << std::endl;
	}
	{
		std::cout << "float: ";
		std::cout << std::endl;
	}
	{
		std::cout << "double: ";
		std::cout << std::endl;
	}
}