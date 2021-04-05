/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedClass.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 15:53:56 by aly               #+#    #+#             */
/*   Updated: 2021/04/05 14:23:54 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXEDCLASS_HPP
#define FIXEDCLASS_HPP

#include <iostream>

class Fixed
{
private:
	static int const 	_bits;
	void		_init_var();
	int _value;
public:
	Fixed	&operator=(Fixed const & ret_fix);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	Fixed(const Fixed & var);
	Fixed(/* args */);
	~Fixed();
};


#endif
