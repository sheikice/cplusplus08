#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <deque>
#include <stack>

template <typename T, typename CONT = std::deque<T> >
class MutantStack: public std::stack<T, CONT>
{
	public:
		typedef typename CONT::iterator iterator;
		MutantStack(){};
		~MutantStack(){};
		iterator begin() {return this->c.begin();};
		iterator end() {return this->c.end();};
		iterator rbegin() {return this->c.rbegin();};
		iterator rend() {return this->c.rend();};

		iterator begin() const {return this->c.begin();};
		iterator end() const {return this->c.end();};
		iterator rbegin() const {return this->c.rbegin();};
		iterator rend() const {return this->c.rend();};
};

#endif
