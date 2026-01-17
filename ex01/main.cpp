#include <iostream>
#include "Span.hpp"
#include <vector>

int main(void)
{
	{
		std::cout << "\n[TEST 1: {1, -3, 5, -1}]\n";
		Span test2(5);

		try
		{
			test2.addNumber(1);
			test2.addNumber(-3);
			test2.addNumber(5);
			test2.addNumber(-1);
			std::cout << "longestSpan = " << test2.longestSpan() << '\n';
			std::cout << "shortestSpan = " << test2.shortestSpan() << "\n\n";
		}
		catch(std::exception& e)
		{
			std::cout << "Error: " << e.what() << '\n';
		}
	}
	{
		std::cout << "\n[TEST 42: {6, 3, 17, 9, 11}]\n";
		std::vector<int> vec;
		for (int i = 0; i < 5; i++)
			vec.push_back(i);
		try
		{
			Span sp = Span(6);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << "Error: " << e.what() << '\n';
		}
		try
		{
			Span sp2(6);
			sp2.addRange(vec.begin(), vec.end());
			std::cout << "\n[TEST 3: {0, 1, 2, 3, 4}]\n";
			std::cout << "longestSpan = " << sp2.shortestSpan() << std::endl;
			std::cout << "shortestSpan = " << sp2.longestSpan() << '\n' << std::endl;
		}
		catch(std::exception& e)
		{
			std::cout << "Error: " << e.what() << '\n';
		}
	}
	return 0;
}
