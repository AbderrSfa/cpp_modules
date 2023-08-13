/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:42:09 by asfaihi           #+#    #+#             */
/*   Updated: 2023/05/05 15:42:34 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "btc.hpp"

void  ft_error(std::string message) {
  std::cout << message << std::endl;
  exit(1);
}

void fill_db(std::map<std::string, double> &db) {
  std::fstream  file("data.csv");
  if (!file.is_open())
    ft_error("Error: invalid data.csv file");
  std::string line;
	std::getline(file, line);
  while (std::getline(file, line)) {
    char *val = std::strtok(&line[0], ",");
    std::string key(val);
    val = std::strtok(NULL, ",");
    db.insert(std::make_pair(key, std::atof(val)));
  }
  file.close();
}

std::string trim_spaces(const std::string &s) {
    size_t start = s.find_first_not_of(" \t\r\n");
    if (start == std::string::npos)
        return "";
    size_t end = s.find_last_not_of(" \t\r\n");
    return s.substr(start, end - start + 1);
}

void read_file(std::string filename) {
	std::fstream file(filename);
	if (!file.is_open())
		ft_error("Error: input file not found");
	std::string line;
	while (std::getline(file, line)) {
		if (std::count(line.begin(), line.end(), '|') != 1)
			ft_error("Error: invalid input file");
    char *str = std::strtok(&line[0], "|");
    std::string key(trim_spaces(str));
		std::string val = trim_spaces(std::strtok(NULL, "|"));
		std::cout << "key " << key << " val" << val << std::endl;
	}
}

int main(int argc, char **argv) {
  if (argc != 2)
    ft_error("Error: wrong number of parameters.");
	std::map<std::string, double> db;
	fill_db(db);
	read_file(argv[1]);
  return (0);
}
