/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:58:47 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/19 11:59:54 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter( void ) {}

Converter::Converter(std::string Input) : _InInt(0), _InChar(0), _InFloat(0), _InDouble(0){
	this->_Type = this->ParseInput(Input);
	if (this->_Type == 'i') {
		this->_InInt = std::stoi(Input);
		this->CastFromInt();
	}

	else if (this->_Type == 'c') {
		this->_InChar = Input[0];
		this->CastFromChar();

	}

	else if (this->_Type == 'f') {
		this->_InFloat = std::stof(Input);
		this->CastFromFloat();

	}

	else if (this->_Type == 'd') {
		this->_InDouble = std::stod(Input);
		this->CastFromDouble();
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

char	Converter::ParseInput(std::string Input) {
	if (Input.find(".", 0) != std::string::npos) {
		if (Input[Input.length() - 1] == 'f')
			return ('f');
		else
			return ('d');
	}
	else if ((Input.length() == 1) && !isdigit(Input[0]))
			return ('c');
	else
			return ('i');
}

void	Converter::CastFromInt( void ) {
	this->_InChar = static_cast<char>(this->_InInt);
	this->_InFloat = static_cast<float>(this->_InInt);
	this->_InDouble = static_cast<double>(this->_InInt);
	std::cout << this->_InInt << std::endl;
	std::cout << this->_InChar << std::endl;
	std::cout << this->_InFloat << std::endl;
	std::cout << this->_InDouble << std::endl;
}

void	Converter::CastFromChar( void ) {
	this->_InInt = static_cast<int>(this->_InChar);
	this->_InFloat = static_cast<float>(this->_InChar);
	this->_InDouble = static_cast<double>(this->_InChar);
	std::cout << this->_InInt << std::endl;
	std::cout << this->_InChar << std::endl;
	std::cout << this->_InFloat << std::endl;
	std::cout << this->_InDouble << std::endl;
}

void	Converter::CastFromFloat( void ) {
	this->_InInt = static_cast<int>(this->_InFloat);
	this->_InChar = static_cast<char>(this->_InFloat);
	this->_InDouble = static_cast<double>(this->_InFloat);
	std::cout << this->_InInt << std::endl;
	std::cout << this->_InChar << std::endl;
	std::cout << this->_InFloat << std::endl;
	std::cout << this->_InDouble << std::endl;
}

void	Converter::CastFromDouble( void ) {
	this->_InInt = static_cast<int>(this->_InDouble);
	this->_InChar = static_cast<char>(this->_InDouble);
	this->_InFloat = static_cast<float>(this->_InDouble);
	std::cout << this->_InInt << std::endl;
	std::cout << this->_InChar << std::endl;
	std::cout << this->_InFloat << std::endl;
	std::cout << this->_InDouble << std::endl;
}

