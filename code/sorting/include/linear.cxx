#ifndef __LINEAR__
#define __LINEAR__

#include <iostream>
#include <array>
#include <cstdint>
#include <limits>

	typedef std::array<std::uint32_t, size> array;

namespace utility {

int swap (std::array<std::int32_t, size>& arr,
		  std::uint32_t i,
		  std::uint32_t j)
{
	auto temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp; 
}

}; //namespace utility

template <class datatype>
void linear_sort (datatype& data, std::uint32_t size)
{
	std::int32_t min = static_cast<std::int32_t> (0b10000000000000000000000000000000);
	for (std::uint32_t i = 0; i < size; ++i) {
		min = i;
		
		for (std::uit32_t j = i; j < size; ++j)
			if (arr[j] < arr[min]) min = j;
			
		swap (
	}
}

constexpr std::uint32_t size = 32;

int main (void)
{

// 	linear <std::int32_t, size> l;
	array arr;
	for (auto& elt : arr)
		elt = 1;
	linear_sort <std::array<std::uint32_t, size>> (arr, arr.size());
}

#endif