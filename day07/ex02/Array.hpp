#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <stdlib.h>
#include <string>
#include <iostream>
#include <stdexcept>

template <typename T>
class Array
{
private:
	unsigned int		_nb;
	T					*_tab;
public:
	unsigned int 		size() const;
	T & operator[](unsigned int const& i);
	Array<T>& operator=(Array<T> const& x);
	Array(/* args */);
	Array(unsigned int size);
	Array(Array const & x);
	~Array();
};

//deflt constructor
template <typename T>
Array<T>::Array(/* args */) : _tab(0), _nb(0) {}

//constructor + uint
template <typename T>
Array<T>::Array(unsigned int size) {
	_nb = size;
	_tab = new T[size];
}

template <typename T>
Array<T>::Array(Array const & x) {
	_tab = new T[x.size()];
	for (unsigned int i = 0; i < x.size(); i++) {
		_tab[i] = x._tab[i];
	}
	_nb = x.size();
}

// Operateur =
template<typename T>
Array<T>& Array<T>::operator=(Array<T> const& x) {
	if (this != &x) {
		if (_tab)
			delete[] _tab;
		_tab = new T[x.size()];
		for (unsigned int i = 0; i < x.size(); i++) {
			_tab[i] = x._tab[i];
		}
		_nb = x.size();
	}
}

//Operator []
template <typename T>
T & Array<T>::operator[](unsigned int const& i)
{
	if (i >= _nb)
		throw std::exception();
	return (_tab[i]);
}

template <typename T>
Array<T>::~Array() {
	if (_tab)
		delete[] _tab;
}

template<typename T>
unsigned int Array<T>::size() const {
	return (_nb);
}
#endif