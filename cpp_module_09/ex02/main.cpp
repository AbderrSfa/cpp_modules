/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abderr <abderr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 12:11:30 by asfaihi           #+#    #+#             */
/*   Updated: 2023/09/01 17:12:46 by abderr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void mergeSort(std::vector<int> &arr)
{

}

void insertionSort(std::vector<int> &arr)
{
  for (size_t i = 0; i < arr.size(); i++)
  {
    int curr = arr[i];
    std::vector<int>::iterator it = std::upper_bound(arr.begin(), arr.begin() + i, curr);
    arr.insert(it, curr);
    arr.erase(arr.begin() + i + 1);
  }
}

int main()
{
  std::vector<int> arr;
  arr.push_back(9);
  arr.push_back(3);
  arr.push_back(6);
  arr.push_back(2);
  arr.push_back(8);
  arr.push_back(5);
  arr.push_back(1);
  arr.push_back(4);
  arr.push_back(7);

  // insertionSort(arr);

  mergeSort(arr);

  for (size_t i = 0; i < arr.size(); ++i)
  {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
