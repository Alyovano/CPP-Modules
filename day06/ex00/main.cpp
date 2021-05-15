/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 15:11:33 by aly               #+#    #+#             */
/*   Updated: 2021/05/15 11:06:19 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int		is_Readable_Number(std::string str) {
	for (size_t i = 0; i < str.length() ; i++) {
        if (isspace(str[i]))
			return EXIT_FAILURE;
    }
	return EXIT_SUCCESS;
}

void	__debugg__(convert *nb) {
	nb->getSign() == NEGATIVE ? std::cout 
			<< "Negative number : " : std::cout << "Positive number : ";
	if (nb->getType() == INT)
		std::cout << "INT";
	else if (nb->getType() == CHAR)
		std::cout << "CHAR";
	else if (nb->getType() == FLOAT)
		std::cout << "FLOAT";
	else if (nb->getType() == DOUBLE)
		std::cout << "DOUBLE";
	else if (nb->getType() == 0)
		std::cout << "Pas de type trouve";
	std::cout << std::endl;
}

int		main(int argc, char **argv) {
	convert *nb = new convert;

	if (argc != 2) {
		std::cout << "Argument-Error : ./Convert + <arg>" << std::endl;
		delete nb;
		return EXIT_FAILURE;
	}
	std::string arg = argv[1];
	if (is_Readable_Number(arg) == EXIT_FAILURE) {
		std::cout << "Argument-Error : Bad Format" << std::endl;
		delete nb;
		return EXIT_FAILURE;
	}
	if (nb->is_The_Variable_Type(arg) == EXIT_FAILURE) {
		std::cout << "Argument-Error : Bad Format" << std::endl;
		delete nb;
		return EXIT_FAILURE;
	}
	__debugg__(nb);
	nb->is_Castable(arg);
	delete nb;
	return EXIT_SUCCESS;
}