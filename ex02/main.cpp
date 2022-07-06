#include <iostream>
#include "Array.hpp"

int main()
{
	std::cout << "Declaring a and b, filling a with numbers" << std::endl;
	Array<int> a(10);
	Array<int> b;
	for (size_t i = 0; i < a.size(); i++)
		a[i] = i;
	std::cout << std::endl << "Printing a" << std::endl;
	for (size_t i = 0; i < a.size(); i++)
		std::cout << a[i] << " ";
	std::cout << std::endl << std::endl;
	std::cout << "Printing b" << std::endl;
	for (size_t i = 0; i < b.size(); i++)
		std::cout << b[i] << " ";
	std::cout << std::endl;
	std::cout << "Assigning b = a" << std::endl;
	b = a;
	std::cout << "Printing b" << std::endl;
	for (size_t i = 0; i < b.size(); i++)
		std::cout << b[i] << " ";
	std::cout << std::endl;
	std::cout << std::endl << "Declaring c, filling it with HELLO" << std::endl;
	Array<std::string> c(5);
	for (size_t i = 0; i < c.size(); i++)
		c[i] = "HELLO";
	std::cout << "Declaring d(c)" << std::endl;
	Array<std::string> d(c);
	std::cout << std::endl << "Printing c" << std::endl;
	for (size_t i = 0; i < c.size(); i++)
		std::cout << c[i] << " ";
	std::cout << std::endl << std::endl;
	std::cout << "Printing d" << std::endl;
	for (size_t i = 0; i < d.size(); i++)
		std::cout << d[i] << " ";
	std::cout << std::endl;

}