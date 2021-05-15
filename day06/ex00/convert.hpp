#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define CHAR	1
#define INT		2
#define FLOAT	3
#define DOUBLE	4

#define NEGATIVE 5

class convert
{

private:
	int			_parse_F;
	int			_parse_point;
	int			_type_check;
	int			_is_negativ;
	bool		_impossible;
	std::string _arg;

	int		more_Variable_Test(std::string str);
	int		last_Variable_Test(std::string str);

	//char
	void	int_To_Char(int nb);
	void	float_To_Char(float nb);
	void	double_To_Char(double nb);
	//float
	void	int_To_Float(int nb);
	void	char_To_Float(char nb);
	void	double_To_Float(double nb);
	//double
	void	int_To_Double(int nb);
	void	float_To_Double(float nb);
	void	char_To_Double(char nb);
	//int
	void	char_To_Int(char nb);
	void	float_To_Int(float nb);
	void	double_To_Int(double nb);

public:

	int			getType() const;
	int			getSign() const;
	void		getInformations() const;
	convert(const convert & x);
	convert&	operator=(const convert & x);
	convert(std::string var);
	~convert();

	int		is_Readable_Number(std::string str);

	int		is_The_Variable_Type(std::string str);
	void	is_Castable(std::string str);
};

#endif