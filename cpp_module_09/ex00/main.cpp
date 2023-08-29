/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abderr <abderr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:42:09 by asfaihi           #+#    #+#             */
/*   Updated: 2023/08/29 22:55:40 by abderr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
  if (argc != 2)
  {
    std::cerr << "Error: wrong number of parameters." << std::endl;
    exit(1);
  }
  BitcoinExchange btc(argv[1]);
  return (0);
}
