#include <iostream>
#include "Span.hpp"
#include <vector>

int main(void)
{
	{
		Span test;
		Span test2(5);

		try
		{
			test2.addNumber(1);
			test2.addNumber(3);
			test2.addNumber(5);
			test2.addNumber(-1);
			std::cout << "longestSpan = " << test2.longestSpan() << '\n';
			std::cout << "shortestSpan = " << test2.shortestSpan() << '\n';
		}
		catch(std::exception& e)
		{
			std::cout << "Error: " << e.what() << '\n';
		}
	}
	{
		std::vector<int> vec;
		for (int i = 0; i < 5; i++)
			vec.push_back(i);
		Span sp = Span(5);
		Span sp2(4);
		try
		{
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
			sp2.addRange(vec.begin(), vec.end());
		}
		catch (std::exception& e)
		{
			std::cout << "Error: " << e.what() << '\n';
		}
		try
		{
			std::cout << sp2.shortestSpan() << std::endl;
			std::cout << sp2.longestSpan() << std::endl;
		}
		catch(std::exception& e)
		{
			std::cout << "Error: " << e.what() << '\n';
		}
	}
	return 0;
}
