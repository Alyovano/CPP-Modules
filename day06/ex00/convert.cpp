/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 15:42:05 by aly               #+#    #+#             */
/*   Updated: 2021/05/14 16:24:47 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int		convert::more_Variable_Test(std::string str) {
	for (size_t i = 0; i < str.length() && str[i] ; i++) {
		if (!isdigit(str[i])) {
			if (i == 0 && str.length() == 1) {
				std::cerr << "Un char" << std::endl;
				_type_check = CHAR;
				return EXIT_SUCCESS;
			}
			else if (str[i] != '.' || str[i] != 'f') {
				std::cerr << "Debug 2 " << std::endl;
				return EXIT_FAILURE;
			}
			else {
				std::cerr << "Debug 3 " << std::endl;
				if (str[i] == '.')
					_parse_point += 1;
				else if (str[i] == 'f')
					_parse_F += 1;
			}
		}	
	}
	if (_parse_point > 1 || _parse_F > 1)
		return EXIT_FAILURE;
	return EXIT_SUCCESS;
}

int		convert::is_The_Variable_Type(std::string str) {
	if (str == "-inff" || str == "inff" || str == "nanf") {
		_type_check = FLOAT;
		return EXIT_SUCCESS;
	}
	else if (str == "-inf" || str == "inf" || str == "nan") {
		_type_check = DOUBLE;
		return EXIT_SUCCESS;
	}
	else {
		if (more_Variable_Test(str) == EXIT_FAILURE)
			return EXIT_FAILURE;
	}
	_type_check = INT;
	return EXIT_SUCCESS;
}

// Constructeur - Destructeur - Copy - Assignation
convert::convert(const convert & x) {
	*this = x;
}

convert&		convert::operator=(const convert & x) {
	(void)x;
    return *this;
}

convert::convert() {
	_parse_F = 0;
	_parse_point = 0;
	_type_check = 0;
}

convert::~convert() {
}
