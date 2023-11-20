#include "iter.hpp"

template<typename T>

void func(T a)
{
	std::cout << a;
	std::cout << std::endl;
}

int main()
{
	int a[] = {1, 3, 2};
	iter(a, 3, func);
}