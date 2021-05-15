#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <string>
#include <iostream>
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
	int		_parse_F;
	int		_parse_point;
	int		_type_check;
	int		_is_negativ;

	int		more_Variable_Test(std::string str);
	int		last_Variable_Test(std::string str);

public:

	int			getType() const;
	int			getSign() const;
	convert(const convert & x);
	convert&	operator=(const convert & x);
	convert();
	~convert();
	int		is_The_Variable_Type(std::string str);
	void	is_Castable(std::string str);
};

#endif