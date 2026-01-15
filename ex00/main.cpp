#include <iostream>
#include "easyfind.hpp"
#include <list>
#include <vector>
#include <deque>

int main(void)
{
	{
		std::cout << "\n[TEST 1: VECTOR]\n";
		std::vector<int> vec;
		int	val1 = 10;
		int	val2 = 1;

		for (int i = 0; i < 10; i++)
			vec.push_back(i % 2);
		std::vector<int>::iterator it = easyFind(vec, val1);
		if (it != vec.end())
			std::cout << *it << '\n';
		else
			std::cout << val1 << " not found\n";
		it = easyFind(vec, val2);
		if (it != vec.end())
			std::cout << *it << " is found\n";
		else
			std::cout << val2 << " not found\n";
	}

	{
		std::cout << "\n[TEST 2: DEQUE]\n";
		int val1 = 10;
		int val2 = 1;
		std::deque<int> deq;
		for (int i = 0; i < 10; i++)
			deq.push_back(i % 2);
		std::deque<int>::iterator it = easyFind(deq, val1);
		if (it != deq.end())
			std::cout << *it << '\n';
		else
			std::cout << val1 << " not found\n";
		it = easyFind(deq, val2);
		if (it != deq.end())
			std::cout << *it << " is found\n";
		else
			std::cout << val2 << " not found\n";
	}
	{
		std::cout << "\n[TEST 3: LIST]\n";
		int val1 = 10;
		int val2 = 1;
		std::list<int> intList;
		for (int i = 0; i < 10; i++)
			intList.push_back(i % 2);
		std::list<int>::iterator it = easyFind(intList, val1);
		if (it != intList.end())
			std::cout << *it << '\n';
		else
			std::cout << val1 << " not found\n";
		it = easyFind(intList, val2);
		if (it != intList.end())
			std::cout << *it << " is found\n";
		else
			std::cout << val2 << " not found\n";
	}
}
