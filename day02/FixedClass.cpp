/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedClass.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 15:53:51 by aly               #+#    #+#             */
/*   Updated: 2021/04/04 21:21:39 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FixedClass.hpp"

int const 		Fixed::_bits = 8;

int			Fixed::getRawBits(void) const
{
	std::cout << "getRawBits function called" << std::endl;
	return (this->_value);
}

// void		Fixed::_init_var()
// {
// 	this->_value = 6;
// }

Fixed::Fixed(/* args */) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
	//_init_var();
}

Fixed	&Fixed::operator=(Fixed const & ret_fix)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = ret_fix.getRawBits();
	return (*this);
}

Fixed::Fixed(const Fixed & var) : _value(var._value)
{
	std::cout << "Copy constructor called" << std::endl;
	return ;
}


Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}