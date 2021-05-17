#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <stdlib.h>
#include <string>

template <typename T>
void	display(T &a) {
	std::cout << a << std::endl;
}

template <typename T>
void	divideby2(T &a) {
	a /= 2;
}

template <typename T>
void	plus1(T &a) {
	a += 1;
}

template<typename T>
void	iter(T* arr, std::size_t size, void (*f)(T & elem))
{
	for (std::size_t i = 0; i < size; i++)
		(*f)(arr[i]);
}

template<typename T>
void	iter(T* arr, std::size_t size, void (*f)(const T & elem))
{
	for (std::size_t i = 0; i < size; i++)
		(*f)(arr[i]);
}



#endif