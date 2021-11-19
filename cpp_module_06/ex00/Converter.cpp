/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:58:47 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/19 11:11:40 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter( void ) {}

Converter::Converter(std::string Input) {
	this->_Type = this->ParseInput(Input);
	typedef	void(Converter:: *FunctionPointer)( void );
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
			(this->*pointer[i])();
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

void	Converter::CastFromInt( void ) {
	std::cout << "Int";
}

void	Converter::CastFromChar( void ) {
	std::cout << "Char";
	
}

void	Converter::CastFromFloat( void ) {
	std::cout << "Float";
	
}

void	Converter::CastFromDouble( void ) {
	std::cout << "Double";
	
}

