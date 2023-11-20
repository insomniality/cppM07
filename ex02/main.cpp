#include "Array.hpp"
#include <iostream>

int main()
{
	Array<int> a(15);

	const Array<int> b(15);

	std::cout << b[0] << "\n";

	a[0] = 15;
	std::cout << a[0] << "\n";

	Array<int> c;

	c = a;

	std::cout << c[0] << "\n";

	Array<int> d(a);

	std::cout << d[0] << "\n";
}