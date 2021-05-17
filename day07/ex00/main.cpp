/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 15:29:06 by aly               #+#    #+#             */
/*   Updated: 2021/05/17 15:54:26 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int		main() {
	std::cout << "INT test" << std::endl;
	int i = 56;
	int j = 41;

	std::cout << "int i = " << i << std::endl;
	std::cout << "int j = " << j << std::endl;
	std::cout << "--SWAP--" << std::endl;
	::swap( i, j );
	std::cout << "int i = " << i << std::endl;
	std::cout << "int j = " << j << std::endl;

	std::cout << std::endl;

	std::cout << "String test" << std::endl;
	std::string s1 = "Premiere ligne";
	std::string s2 = "Deuxieme Ligne";
	std::cout << "str s1 = " << s1 << std::endl;
	std::cout << "str s2 = " << s2 << std::endl;
	std::cout << "--SWAP--" << std::endl;
	::swap( s1, s2 );
	std::cout << "str s1 = " << s1 << std::endl;
	std::cout << "str s2 = " << s2 << std::endl;


	std::cout << "Min: ? " << ::min( i, j ) << std::endl;
	int const k = 5;
	int const l = 3;
	std::cout << "Min: ? " << ::min( k, l ) << std::endl;


	std::cout << "Max: ? " << ::max( i, j ) << std::endl;
	std::cout << "Max: ? " << ::max( k, l ) << std::endl;


	{
		std::cout << "MANDATORY PART" << std::endl;
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";std::string d = "chaine2";
		::swap(c, d);std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	return EXIT_SUCCESS;
}