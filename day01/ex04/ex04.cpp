/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyovano <alyovano@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:15:03 by alyovano          #+#    #+#             */
/*   Updated: 2021/03/26 17:29:16 by alyovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#define TEST "HI THIS IS BRAIN"

int		main() {
	std::string test = TEST;
	std::string & ref = test;
	std::string * ptr = &test;

	std::cout << "1 = Original str | 2 = reference | 3 = ptr on original" << std::endl;
	std::cout << "1) " << test << std::endl;
	std::cout << "2) " << ref << std::endl;
	std::cout << "3) " << *ptr << std::endl;
	return 0;
}
