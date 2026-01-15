#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <set>
#include <iterator>

class Span
{
	private:
		std::multiset<int> _multiSet;
		unsigned int _N;

	public:
		Span(void);
		Span(unsigned int);
		~Span(void);
		Span(const Span&);
		Span& operator=(const Span&);
		
		void addNumber(int);
		unsigned int getSize(void) const;
		
		int shortestSpan(void) const;
		int longestSpan(void) const;

		template<typename ITER>
		void addRange(ITER, ITER);
	
	class spanFullException: public std::exception
	{
		virtual const char* what(void) const throw();
	};

	class notEnoughNumbersException: public std::exception
	{
		virtual const char* what(void) const throw();
	};
};

template<typename ITER>
void Span::addRange(ITER first, ITER last)
{
	while (first != last)
	{
		addNumber(*first);
		first++;
	}
}

#endif
