#include "../include/fibonacci.h"

auto fibonacci (int n) -> long long int
{
	if (n == 0)
		return 0;
	
	else if (n == 1)
		return 1;
	
	else
		return fibonacci (n - 1) + fibonacci (n - 2);
}

auto fibonacci_iter (int n) -> long long int
{
	if (n == 0)
		return 0;
	
	else if (n == 1)
		return 1;
	
	else {
		long long int a = 0;
		long long int b = 1;
		long long int temp = 0;
		for (int i = 1; i <  n; ++i) {
			temp = a;
			a = b;
			b += temp % 2014;
		}
		return b;
	}
	
}
