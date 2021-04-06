/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 15:53:54 by aly               #+#    #+#             */
/*   Updated: 2021/04/06 17:03:09 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FixedClass.hpp"

int main(void) {
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;

	// a.setRawBits(56);
	// std::cout << a << std::endl;
	a = a * b;
	std::cout << a << std::endl;
	a = a / b;
	std::cout << a << std::endl;
	a = ++a;
	std::cout << a << std::endl;
	//std::cout << a << std::endl;

	return 0;
}