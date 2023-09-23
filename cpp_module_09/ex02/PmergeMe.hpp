/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abderr <abderr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 22:59:19 by abderr            #+#    #+#             */
/*   Updated: 2023/09/19 23:25:35 by abderr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef P_MERGE_ME
#define P_MERGE_ME

#include <iostream>
#include <vector>
#include <deque>
#include <chrono>

class PMergeMe
{
private:
	PMergeMe(void);
	void ft_error();
	void print_before_sort(const std::vector<int> &array);
	void print_after_sort();
	std::vector<int> mergeV(const std::vector<int> &left, const std::vector<int> &right);
	std::deque<int> mergeD(const std::deque<int> &left, const std::deque<int> &right);
	void insertionSortV(std::vector<int> &arr);
	void insertionSortD(std::deque<int> &arr);
	std::vector<int> mergeInsertionSortV(std::vector<int> &arr);
	std::deque<int> mergeInsertionSortD(std::deque<int> &arr);

public:
	std::vector<int> vec;
	std::deque<int> deq;
	PMergeMe(std::vector<int> array);
	PMergeMe(PMergeMe const &src);
	PMergeMe &operator=(PMergeMe const &rhs);
	~PMergeMe();
};

#endif