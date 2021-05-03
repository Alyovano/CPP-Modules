/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:30:48 by aly               #+#    #+#             */
/*   Updated: 2021/05/03 14:32:36 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource & ref)
{
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
	*this = ref;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& ref)
{
	if (this != &ref)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_materias[i])
				delete _materias[i];
			this->_materias[i] = NULL;
		}
		for (int i = 0; i < 4; i++)
		{
			if (ref._materias[i])
				this->_materias[i] = ref._materias[i]->clone();
			else
				this->_materias[i] = NULL;
		}
	}
	return (*this);
}
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i])
			delete _materias[i];
		this->_materias[i] = NULL;
	}
}

void	MateriaSource::learnMateria(AMateria *mataeria)
{
	if (mataeria)
	{
		for (int i = 0; i < 4; i++) 
		{
			if (!this->_materias[i]) 
			{
				this->_materias[i] = mataeria;
				return ;
			}
		}
	}
	return ;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] && (this->_materias[i]->getType() == type))
			return this->_materias[i]->clone();
	}
	return (NULL);
}