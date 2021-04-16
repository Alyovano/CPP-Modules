/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 15:53:54 by aly               #+#    #+#             */
/*   Updated: 2021/04/15 15:36:03 by aly              ###   ########.fr       */
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


	std::cout << "TEST" << std::endl;
	Fixed test(98);
	const float fl = 8795.544;
	Fixed test2(fl);
	std::cout << test << std::endl;
	std::cout << ++test << std::endl;
	std::cout << --test << std::endl;
	std::cout << test + test << std::endl;
	std::cout << test - test << std::endl;
	std::cout << Fixed::min(test, test2)<< std::endl;
	return 0;
}