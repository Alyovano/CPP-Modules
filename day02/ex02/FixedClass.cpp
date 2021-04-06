/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedClass.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 15:53:51 by aly               #+#    #+#             */
/*   Updated: 2021/04/06 16:59:12 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FixedClass.hpp"

int const 		Fixed::_bits = 8;

void		Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

int			Fixed::getRawBits(void) const
{
	std::cout << "getRawBits function called" << std::endl;
	return (this->_value);
}

Fixed	&Fixed::operator=(Fixed const & ret_fix)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = ret_fix.getRawBits();
	return (*this);
}

float	Fixed::toFloat(void) const
{
	return (this->getRawBits() / (float)(1 << 8)); 
}

int		Fixed::toInt(void) const
{
	return (this->getRawBits() >> 8);
}

// Operateur arithmetique

Fixed		&Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed		Fixed::operator++(int)
{
	Fixed copy(*this);
	this->setRawBits(this->getRawBits() + 1);
	return (copy);
}

Fixed		&Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed		Fixed::operator*(Fixed const & var) const
{
	Fixed result;

	result.setRawBits(this->getRawBits() * var.getRawBits() >> 8);
	return (result);
}

Fixed		Fixed::operator--(int)
{
	Fixed copy(*this);
	this->setRawBits(this->getRawBits() - 1);
	return (copy);
}

Fixed		Fixed::operator/(Fixed const & var) const
{
	Fixed result;

	result.setRawBits(this->getRawBits() / var.getRawBits() << 8);
	return (result);
}

Fixed		Fixed::operator+(Fixed const & var) const
{
	Fixed result;

	result.setRawBits(this->getRawBits() + var.getRawBits());
	return (result);
}

Fixed		Fixed::operator-(Fixed const & var) const
{
	Fixed result;

	result.setRawBits(this->getRawBits() - var.getRawBits());
	return (result);
}
// Operateur comparaison

bool		Fixed::operator>(Fixed const & var) const
{
	if (this->getRawBits() > var.getRawBits())
		return (true);
	else
		return (false);
}

bool		Fixed::operator<(Fixed const & var) const
{
	if (this->getRawBits() < var.getRawBits())
		return (true);
	else
		return (false);
}

bool		Fixed::operator>=(Fixed const & var) const
{
	if (this->getRawBits() >= var.getRawBits())
		return (true);
	else
		return (false);
}

bool		Fixed::operator<=(Fixed const & var) const
{
	if (this->getRawBits() <= var.getRawBits())
		return (true);
	else
		return (false);
}

bool		Fixed::operator==(Fixed const & var) const
{
	if (this->getRawBits() == var.getRawBits())
		return (true);
	else
		return (false);
}

bool		Fixed::operator!=(Fixed const & var) const
{
	if (this->getRawBits() == var.getRawBits())
		return (false);
	else
		return (true);
}

// Constructeurs

Fixed::Fixed(const int var) : _value(var << 8)
{
	std::cout << "Integer constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const float var)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(var * (1 << Fixed::_bits));
	return ;
}

Fixed::Fixed(const Fixed & var) : _value(var._value)
{
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream	&operator<<(std::ostream &stream, Fixed const &fix)
{
	stream << fix.getRawBits() / (float)(1 << 8);
	return (stream);
}

// Min  -  Max

Fixed		&Fixed::min(Fixed &n, Fixed &n2)
{
	if (n < n2)
		return (n);
	else
		return (n2);
}

Fixed		&Fixed::max(Fixed &n, Fixed &n2)
{
	if (n > n2)
		return (n);
	else
		return (n2);
}

Fixed const		&Fixed::max(Fixed const &n, Fixed const &n2)
{
	if (n > n2)
		return (n);
	else
		return (n2);
}

Fixed const		&Fixed::min(Fixed const &n, Fixed const &n2)
{
	if (n < n2)
		return (n);
	return (n2);
}
