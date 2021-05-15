/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 15:11:33 by aly               #+#    #+#             */
/*   Updated: 2021/05/15 11:34:15 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

/* 
** Use first   1 - is_Readable_Number(string)
** again after 2 - is_The_Variable_Type(string)
** To check if the string can be cast
*/

int		main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Argument-Error : ./Convert + <arg>" << std::endl;
		return EXIT_FAILURE;
	}
	std::string arg = argv[1];
	convert *nb = new convert(arg);
	if (nb->is_Readable_Number(arg) == EXIT_FAILURE) {
		std::cout << "Argument-Error : Bad Format" << std::endl;
		delete nb;
		return EXIT_FAILURE;
	}
	if (nb->is_The_Variable_Type(arg) == EXIT_FAILURE) {
		std::cout << "Argument-Error : Bad Format" << std::endl;
		delete nb;
		return EXIT_FAILURE;
	}
	nb->getInformations();
	nb->is_Castable(arg);
	delete nb;
	return EXIT_SUCCESS;
}