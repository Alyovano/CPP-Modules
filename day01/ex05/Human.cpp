/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyovano <alyovano@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 15:14:19 by alyovano          #+#    #+#             */
/*   Updated: 2021/03/29 16:32:14 by alyovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Brain	&Human::getBrain()
{
	return (_brain);
}

Brain	*Human::identify()
{
	return (&this->_brain);
}

Human::Human()
{
}

Human::~Human()
{
}