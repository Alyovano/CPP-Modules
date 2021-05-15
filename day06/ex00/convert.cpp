/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 15:42:05 by aly               #+#    #+#             */
/*   Updated: 2021/05/15 12:49:49 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"
#include <string>
//Geteurs
int			convert::getType() const {
	return _type_check;
}

int			convert::getSign() const {
	return _is_negativ;
}

void		convert::getInformations() const {
	std::cout << "==========INFO==========" << std::endl;
	this->getSign() == NEGATIVE ? std::cout 
			<< "Negative number : " : std::cout << "Positive number : ";
	if (this->getType() == INT)
		std::cout << "INT";
	else if (this->getType() == CHAR)
		std::cout << "CHAR";
	else if (this->getType() == FLOAT)
		std::cout << "FLOAT";
	else if (this->getType() == DOUBLE)
		std::cout << "DOUBLE";
	else if (this->getType() == 0)
		std::cout << "Pas de type trouve";
	std::cout << std::endl;
	std::cout << "Value : " << _arg <<  std::endl;
	std::cout << "=========================";
	std::cout << std::endl;
}

// Casting

// Casting - Chars
void	convert::int_To_Char(int nb) {
	char a = static_cast< char >(nb);
	if (_impossible == true)
		std::cout << "char: " << "impossible" << std::endl;
	else if (_impossible == false && (a && (a > 32 && a < 127)))
		std::cout << "char: " << a << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
}

void	convert::float_To_Char(float nb) {
	char a = static_cast< char >(nb);
	if (_impossible == true)
		std::cout << "char: " << "impossible" << std::endl;
	else if (_impossible == false && (a && (a > 32 && a < 127)))
		std::cout << "char: " << a << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
}

void	convert::double_To_Char(double nb) {
	char a = static_cast< char >(nb);
	if (_impossible == true)
		std::cout << "char: " << "impossible" << std::endl;
	else if (_impossible == false && (a && (a > 32 && a < 127)))
		std::cout << "char: " << a << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
}
// Casting - Float
void	convert::int_To_Float(int nb) {
	float a = static_cast< float >(nb);
	std::cout << "float :" << a << ".0f" << std::endl;
}

void	convert::char_To_Float(char nb) {
	float a = static_cast< float >(nb);
	std::cout << "float :" << a << ".0f" << std::endl;
}

void	convert::double_To_Float(double nb) {
	// PAS FINI
	float a = static_cast< float >(nb);
	std::cout << "float :" << a << "f" << std::endl;
}
// Casting - Double
void	convert::int_To_Double(int nb) {
	double a = static_cast< double >(nb);
	std::cout << "double :" << a << ".0" << std::endl;
}

void	convert::char_To_Double(char nb) {
	double a = static_cast< double >(nb);
	std::cout << "double :" << a << ".0" << std::endl;
}

void	convert::float_To_Double(float nb) {
	// PAS FINI
	double a = static_cast< double >(nb);
	std::cout << "double :" << a << std::endl;
}


// Casting - Int
void	convert::float_To_Int(float nb) {
	int a = static_cast< int >(nb);
	if (_impossible == true)
		std::cout << "int: " << "impossible" << std::endl;
	else
		std::cout << "int: " << a << std::endl;
}

void	convert::double_To_Int(double nb) {
	int a = static_cast< int >(nb);
	if (_impossible == true)
		std::cout << "int: " << "impossible" << std::endl;
	else
		std::cout << "int: " << a << std::endl;
}

void	convert::char_To_Int(char nb) {
	int a = static_cast< int >(nb);
	if (_impossible == true)
		std::cout << "int: " << "impossible" << std::endl;
	else
		std::cout << "int: " << a << std::endl;
}

void	convert::is_Castable(std::string str) {
	if (_type_check == INT) {
		int nb = 0;
		try {
			nb = std::stoi(str);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Overflow... Stay in the limits" << '\n';
			return ;
		}
		int_To_Char(nb);
		std::cout << "int: " << nb << std::endl;
		int_To_Float(nb);
		int_To_Double(nb);
	}
	else if (_type_check == CHAR) {
		char a = str[0];
		int_To_Char((int)a);
		char_To_Int(a);
		char_To_Float(a);
		char_To_Double(a);
	}
	else if (_type_check == FLOAT) {
		float nb = 0;
		try {
			nb = std::stof(str);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Overflow... Stay in the limits" << '\n';
			return ;
		}
		float_To_Char(nb);
		float_To_Int(nb);
		std::cout << "float: " << nb << "f" << std::endl;
		float_To_Double(nb);
	}
	else if (_type_check == DOUBLE) {
		double nb = 0;
		try {
			nb = std::stod(str);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Overflow... Stay in the limits" << '\n';
			return ;
		}
		double_To_Char(nb);
		double_To_Int(nb);
		double_To_Float(nb);
		std::cout << "double: " << nb << std::endl;
	}
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
		_impossible = true;
		if (str[0] == '-')
			_is_negativ = NEGATIVE;
		return EXIT_SUCCESS;
	}
	else if (str == "-inf" || str == "inf" || str == "nan") {
		_type_check = DOUBLE;
		_impossible = true;
		if (str[0] == '-')
			_is_negativ = NEGATIVE;
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

// VERIFS

int		convert::is_Readable_Number(std::string str) {
	for (size_t i = 0; i < str.length() ; i++) {
        if (isspace(str[i]))
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

convert::convert(std::string var) {
	_arg = var;
	_parse_F = 0;
	_parse_point = 0;
	_type_check = 0;
	_impossible = false;
}

convert::~convert() {
}
