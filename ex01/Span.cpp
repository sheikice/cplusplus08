#include "Span.hpp"
#include <iostream>
#include <cmath>

Span::Span(void): _N(0) {}

Span::Span(unsigned int N): _N(N) {}

Span::~Span(void) {}

Span::Span(const Span& other): _N(other._N)
{
	for (std::multiset<int>::iterator it = other._multiSet.begin(); it != other._multiSet.end(); it++)
		addNumber(*it);
}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		_N = other._N;
		_multiSet = other._multiSet;
	}
	return *this;
}

unsigned int Span::getSize(void) const
{
	return _N;
}

void	Span::addNumber(int nbr)
{
	std::cout << "Add:" << nbr << '\n';
	if (_multiSet.size() == _N)
		throw spanFullException();
	_multiSet.insert(nbr);
}

int Span::shortestSpan(void) const
{
	if (_multiSet.size() <= 1)
		throw notEnoughNumbersException();
	int tmp = longestSpan();
	int	last;
	long long sub;

	for (std::multiset<int>::iterator it = _multiSet.begin(); it != _multiSet.end(); it++)
	{
		if (it != _multiSet.begin())
		{
			sub = std::abs(last - *it);
			if (sub < tmp)
				tmp = sub;
		}
		last = *it;
	}
	return tmp;
}

int Span::longestSpan(void) const
{
	if (_multiSet.size() <= 1)
		throw notEnoughNumbersException();
	return std::abs(*_multiSet.begin() - *_multiSet.rbegin());
}

const char* Span::spanFullException::what() const throw()
{
	return "Span is already full";
}

const char* Span::notEnoughNumbersException::what() const throw()
{
	return "Not enough numbers in span";
}
