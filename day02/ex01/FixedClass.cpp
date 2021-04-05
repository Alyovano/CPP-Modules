/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedClass.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 15:53:51 by aly               #+#    #+#             */
/*   Updated: 2021/04/05 14:22:51 by aly              ###   ########.fr       */
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

// Constructeurs

Fixed::Fixed(const int var)
{
	std::cout << "Integer constructor called" << std::endl;
	this->_value = var;
	return ;
}

Fixed::Fixed(const float var)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf32(var);
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