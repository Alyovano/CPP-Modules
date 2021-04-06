/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedClass.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 15:53:56 by aly               #+#    #+#             */
/*   Updated: 2021/04/06 16:59:22 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXEDCLASS_HPP
#define FIXEDCLASS_HPP

#include <iostream>
#include <math.h>

class Fixed
{
private:
	static int const 	_bits;
	void		_init_var();
	int _value;
public:
	bool		operator!=(Fixed const & var) const;
	bool		operator==(Fixed const & var) const;
	bool		operator<=(Fixed const & var) const;
	bool		operator>=(Fixed const & var) const;
	bool		operator<(Fixed const & var) const;
	bool		operator>(Fixed const & var) const;
	static Fixed			&min(Fixed &n, Fixed &n2);
	static Fixed			&max(Fixed &n, Fixed &n2);
	static Fixed const		&max(Fixed const &n, Fixed const &n2);
	static Fixed const		&min(Fixed const &n, Fixed const &n2);
	Fixed		&operator++(void);
	Fixed		operator++(int);
	Fixed		&operator--(void);
	Fixed		operator--(int);
	Fixed		operator*(Fixed const & var) const;
	Fixed		operator/(Fixed const & var) const;
	Fixed		operator+(Fixed const & var) const;
	Fixed		operator-(Fixed const & var) const;
	Fixed		&operator=(Fixed const & ret_fix);
	int			getRawBits(void) const;
	void		setRawBits(int const raw);
	int			toInt(void) const;
	float		toFloat(void) const;
	Fixed(const Fixed & var);
	Fixed(const float var);
	Fixed(const int var);
	Fixed();
	~Fixed();
};

std::ostream	&operator<<(std::ostream & stream, Fixed const & fix);

#endif
