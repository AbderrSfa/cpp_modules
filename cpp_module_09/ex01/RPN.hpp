/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 12:11:36 by asfaihi           #+#    #+#             */
/*   Updated: 2023/05/05 15:36:38 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>

class RPN
{
private:
	std::stack<int> _st;
	RPN(void);
	std::string removeSpaces(std::string str);
	void calculate(char c);
	void error();

public:
	RPN(std::string const input);
	RPN(RPN const &src);
	RPN &operator=(RPN const &rhs);
	~RPN();
};

#endif