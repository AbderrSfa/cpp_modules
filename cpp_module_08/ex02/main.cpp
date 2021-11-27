/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:16:52 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/27 09:38:19 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;

		mstack.pop();

		std::cout << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		std::cout << std::endl;

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}

	std::cout << std::endl;
	std::cout << "-------------" << std::endl;

	{
		MutantStack<std::string> mstack;

		mstack.push("abcd");
		mstack.push("efgh");
		mstack.push("ijkl");
		mstack.push("mnop");
		mstack.push("qrst");
		mstack.push("uvwxyz");

		std::cout << std::endl;

		MutantStack<std::string>::iterator it = mstack.begin();
		MutantStack<std::string>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}

	std::cout << std::endl;
	std::cout << "-------------" << std::endl;

	{
		MutantStack<float, std::vector<float> > mstack;

		mstack.push(5.56);
		mstack.push(17.44);
		mstack.push(3.0);
		mstack.push(5.23);
		mstack.push(737.1);
		mstack.push(0);

		std::cout << std::endl;

		MutantStack<float, std::vector<float> >::iterator it = mstack.begin();
		MutantStack<float, std::vector<float> >::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	return 0;
}