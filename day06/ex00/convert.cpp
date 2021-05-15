/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 15:42:05 by aly               #+#    #+#             */
/*   Updated: 2021/05/15 10:52:38 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

//Geteurs
int			convert::getType() const {
	return _type_check;
}

int			convert::getSign() const {
	return _is_negativ;
}

// Algo de parsing interne
int		convert::last_Variable_Test(std::string str) {
	if (_parse_point == 0 && _parse_F == 0) {
		_type_check = INT;
		return EXIT_SUCCESS;
	}
	if (_parse_point > 1 || _parse_F > 1)
		return EXIT_FAILURE;
	if (_parse_point == 1 && _parse_F == 0) {
		_type_check = DOUBLE;
		return EXIT_SUCCESS;
	}
	if (_parse_F == 1) {
		int j = 0;
		while (str[j])
			j++;
		if (str[j - 1] == 'f') {
			_type_check = FLOAT;
			return EXIT_SUCCESS;
		}
	}
	return EXIT_FAILURE;
}

int		convert::more_Variable_Test(std::string str) {
	for (size_t i = 0; i < str.length() && str[i] ; i++) {
		if (!isdigit(str[i])) {
			if (i == 0 && str.length() == 1) {
				_type_check = CHAR;
				return EXIT_SUCCESS;
			}
			else if (i == 0 && str.length() > 1) {
				if (str[i] == '-') {
					_is_negativ = NEGATIVE;
				}
				else if (str[i] != '-')
					return EXIT_FAILURE;
			}
			else if ((i > 0) && (str[i] == '.' || str[i] == 'f')) {
				if (str[i] == '.')
					_parse_point += 1;
				else if (str[i] == 'f')
					_parse_F += 1;
			}
			else
				return EXIT_FAILURE;
		}
	}
	if (last_Variable_Test(str) == EXIT_FAILURE)
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
	if (str == "-." || str == "-.f" || str == "-f")
		return EXIT_FAILURE;
	if ((str[0] == '-') && (str[1] == '.' || str[1] == 'f'))
		return EXIT_FAILURE;
	else {
		if (more_Variable_Test(str) == EXIT_FAILURE)
			return EXIT_FAILURE;
	}
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
