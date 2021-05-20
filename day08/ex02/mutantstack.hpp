#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <string>
#include <stack>

#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
private:
	/* data */
public:
typedef typename std::stack<T>::container_type::iterator it;
typedef typename std::stack<T>::container_type::const_iterator const_it;

	MutantStack(MutantStack<T> const & x): std::stack<T>(x){};
	MutantStack(/* args */) : std::stack<T>() {};
	virtual ~MutantStack() {};
	MutantStack<T>& operator=(MutantStack<T> const & x)
	{
		this->c = x.c;
		return (*this);
	};

	it begin() { return (this->c.begin()); }
    it end() { return (this->c.end()); }
	const_it begin() const { return (this->c.begin()); }
    const_it end() const { return (this->c.end()); }
};



#endif