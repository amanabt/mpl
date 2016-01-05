#ifndef __MATRIX__
#define __MATRIX__

#include <array>

namespace MPL
{

template <typename T = std::uint32_t, std::uint32_t m = 0, std::uint32_t n = 0>
class matrix
{
public:
	T& operator[] (std::uint32_t i, std::uint32_t j)
	{ return _arr[i][j]; }

private:
	std::array <std::array<T, n>, m> _arr;
};

};//namespace MPL

#endif