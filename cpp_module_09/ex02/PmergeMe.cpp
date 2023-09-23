/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abderr <abderr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 22:59:16 by abderr            #+#    #+#             */
/*   Updated: 2023/09/23 19:42:54 by abderr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PMergeMe::PMergeMe(void) {}

PMergeMe::PMergeMe(std::vector<int> array)
{
	this->print_before_sort(array);
	std::chrono::high_resolution_clock::time_point start_time = std::chrono::high_resolution_clock::now();
	this->vec = this->mergeInsertionSortV(array);
	std::chrono::high_resolution_clock::time_point end_time = std::chrono::high_resolution_clock::now();
	std::chrono::microseconds vecDuration = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time);

	std::deque<int> deq(array.begin(), array.end());
	start_time = std::chrono::high_resolution_clock::now();
	this->deq = this->mergeInsertionSortD(deq);
	end_time = std::chrono::high_resolution_clock::now();
	std::chrono::microseconds deqDuration = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time);
	this->print_after_sort();
	std::cout << "Time to process a range of " << array.size() << " elements with std::vector: " << vecDuration.count() << "mcs" << std::endl;
	std::cout << "Time to process a range of " << array.size() << " elements with std::deque: " << deqDuration.count() << "mcs" << std::endl;
}

PMergeMe::PMergeMe(PMergeMe const &src)
{
	*this = src;
}

PMergeMe &PMergeMe::operator=(PMergeMe const &rhs)
{
	if (this == &rhs)
		return (*this);
	this->deq = rhs.deq;
	this->vec = rhs.vec;
	return (*this);
}

PMergeMe::~PMergeMe() {}

void PMergeMe::ft_error()
{
	std::cout << "Error" << std::endl;
	exit(1);
}

void PMergeMe::print_before_sort(const std::vector<int> &array)
{
	std::cout << "Before: ";
	for (size_t i = 0; i < array.size(); ++i)
		std::cout << array[i] << " ";
	std::cout << std::endl;
}

void PMergeMe::print_after_sort()
{
	std::cout << "After: ";
	for (size_t i = 0; i < this->vec.size(); ++i)
		std::cout << this->vec[i] << " ";
	std::cout << std::endl;
}

std::vector<int> PMergeMe::mergeV(const std::vector<int> &left, const std::vector<int> &right)
{
	std::vector<int> result;
	size_t leftIndex = 0;
	size_t rightIndex = 0;
	while (leftIndex < left.size() && rightIndex < right.size())
	{
		if (left[leftIndex] < right[rightIndex])
		{
			result.push_back(left[leftIndex]);
			leftIndex++;
		}
		else
		{
			result.push_back(right[rightIndex]);
			rightIndex++;
		}
	}
	std::copy(left.begin() + leftIndex, left.end(), std::back_inserter(result));
	std::copy(right.begin() + rightIndex, right.end(), std::back_inserter(result));
	return result;
}

void PMergeMe::insertionSortV(std::vector<int> &arr)
{
	for (size_t i = 0; i < arr.size(); i++)
	{
		int curr = arr[i];
		std::vector<int>::iterator it = std::upper_bound(arr.begin(), arr.begin() + i, curr);
		arr.insert(it, curr);
		arr.erase(arr.begin() + i + 1);
	}
}

std::vector<int> PMergeMe::mergeInsertionSortV(std::vector<int> &arr)
{
	if (arr.size() <= 5)
	{
		this->insertionSortV(arr);
		return arr;
	}
	size_t middle = arr.size() / 2;
	std::vector<int> left(arr.begin(), arr.begin() + middle);
	std::vector<int> right(arr.begin() + middle, arr.end());
	left = this->mergeInsertionSortV(left);
	right = this->mergeInsertionSortV(right);
	return this->mergeV(left, right);
}

std::deque<int> PMergeMe::mergeD(const std::deque<int> &left, const std::deque<int> &right)
{
	std::deque<int> result;
	size_t leftIndex = 0;
	size_t rightIndex = 0;
	while (leftIndex < left.size() && rightIndex < right.size())
	{
		if (left[leftIndex] < right[rightIndex])
		{
			result.push_back(left[leftIndex]);
			leftIndex++;
		}
		else
		{
			result.push_back(right[rightIndex]);
			rightIndex++;
		}
	}
	result.insert(result.end(), left.begin() + leftIndex, left.end());
	result.insert(result.end(), right.begin() + rightIndex, right.end());
	return result;
}

void PMergeMe::insertionSortD(std::deque<int> &arr)
{
	for (size_t i = 0; i < arr.size(); i++)
	{
		int curr = arr[i];
		std::deque<int>::iterator it = std::upper_bound(arr.begin(), arr.begin() + i, curr);
		arr.insert(it, curr);
		arr.erase(arr.begin() + i + 1);
	}
}

std::deque<int> PMergeMe::mergeInsertionSortD(std::deque<int> &arr)
{
	if (arr.size() <= 5)
	{
		this->insertionSortD(arr);
		return arr;
	}
	size_t middle = arr.size() / 2;
	std::deque<int> left(arr.begin(), arr.begin() + middle);
	std::deque<int> right(arr.begin() + middle, arr.end());
	left = this->mergeInsertionSortD(left);
	right = this->mergeInsertionSortD(right);
	return this->mergeD(left, right);
}