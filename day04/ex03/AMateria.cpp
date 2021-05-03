/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:09:31 by aly               #+#    #+#             */
/*   Updated: 2021/05/03 14:24:52 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(std::string const &type)
{
	this->_type = type;
	this->_xp = 0;
}

AMateria::AMateria(const AMateria& materia)
{
	*this = materia;
}

AMateria::~AMateria()
{

}

AMateria &AMateria::operator=(const AMateria& materia)
{
	if (this != &materia)
	{
		this->_type = materia.getType();
		this->_xp = materia.getXP();
	}
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (_type);
}

unsigned int AMateria::getXP() const
{
	return (_xp);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
	_xp += 10;
}