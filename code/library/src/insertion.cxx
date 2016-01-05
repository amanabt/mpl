#include "../include/insertion.h"
#include <chrono>
#include <iostream>
#include <array>

// std::array<double, MAX_SIZE> insertion_sort (std::array<double, MAX_SIZE> arr)
// {
// 	std::uint32_t j = 0, i = 0;
// 	
// 	for (i = 1; i < arr.size(); ++i) {
// 		auto key = arr[i];
// 		j = i - 1;
// 		while (j >= 0 && arr[j] > key) {
// 			arr[j + 1] = arr[j];
// 			++j;
// 		}
// 		arr[j + 1] = key;
// 	}
// 	return arr;
// }

void insert (void)
{
	constexpr std::uint32_t MAX_SIZE = 9;

	std::array<double, MAX_SIZE> arr;
	arr [0] = 632;
	arr [1] = 45;
	arr [2] = 654;
	arr [3] = 78;
	arr [4] = 6542;
	arr [5] = 65435;
	arr [6] = 654;
	arr [7] = 453;
	arr [8] = 354;

	insertion ();
	for (auto&  elt : arr)
		std::cout << elt << std::endl;
}