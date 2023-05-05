/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 12:11:33 by asfaihi           #+#    #+#             */
/*   Updated: 2023/05/05 15:37:33 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(std::string const input)
{
	const std::string trimmed = this->removeSpaces(input);

	for (size_t i = 0; i < trimmed.length(); i++)
	{
		char c = trimmed[i];
		if (isdigit(c))
			this->_st.push(static_cast<int>(c) - 48);
		else if ((c == '+' || c == '-' || c == '*' || c == '/') && this->_st.size() > 1)
		{
			this->calculate(c);
		}
		else
			error();
	}
	if (this->_st.size() != 1)
		error();
	std::cout << this->_st.top() << std::endl;
}

RPN::RPN(RPN const &src)
{
	*this = src;
}

RPN &RPN::operator=(RPN const &rhs)
{
	if (this == &rhs)
		return (*this);
	this->_st = rhs._st;
	return (*this);
}

RPN::~RPN() {}

std::string RPN::removeSpaces(std::string const str)
{
	std::string result = "";
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] != ' ')
			result += str[i];
	}
	return result;
}

void RPN::calculate(char c)
{
	int first = this->_st.top();
	this->_st.pop();
	int second = this->_st.top();
	this->_st.pop();
	switch (c)
	{
	case '+':
		this->_st.push(second + first);
		break;

	case '-':
		this->_st.push(second - first);
		break;

	case '*':
		this->_st.push(second * first);
		break;

	case '/':
		this->_st.push(second / first);
		break;
	}
}

void RPN::error()
{
	std::cerr << "Error" << std::endl;
	exit(1);
}