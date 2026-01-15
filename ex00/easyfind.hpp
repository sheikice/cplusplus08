#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iterator>
#include<algorithm>

class NotFoundException
{
	virtual const char* what() const throw() {return "val not found";};
};

template <typename T>
typename T::iterator easyFind(T& cont, int val)
{
	return std::find(cont.begin(), cont.end(), val);
}
#endif

