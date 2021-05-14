/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 15:11:33 by aly               #+#    #+#             */
/*   Updated: 2021/05/14 15:46:36 by aly              ###   ########.fr       */
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

int		main(int argc, char **argv) {
	convert nb;

	if (argc != 2) {
		std::cout << "Argument-Error : ./Convert + <arg>" << std::endl;
		return EXIT_FAILURE;
	}
	std::string arg = argv[1];
	if (is_Readable_Number(arg) == EXIT_FAILURE) {
		std::cout << "Argument-Error : Bad Format" << std::endl;
		return EXIT_FAILURE;
	}
	if (nb.is_The_Variable_Type(arg) == EXIT_FAILURE) {
		std::cout << "Argument-Error : Bad Format" << std::endl;
		return EXIT_FAILURE;
	}
	std::cout << "Good" << std::endl;
	//convert_To_Others_Type(arg);
	return EXIT_SUCCESS;
}