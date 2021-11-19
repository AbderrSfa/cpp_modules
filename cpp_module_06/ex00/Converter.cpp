/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:58:47 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/19 12:16:33 by asfaihi          ###   ########.fr       */
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

