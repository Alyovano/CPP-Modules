/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:26:10 by aly               #+#    #+#             */
/*   Updated: 2021/05/03 14:26:26 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string& name)
{
	for (int i = 0; i < 4; i++)
		_inven[i] = NULL;
	this->_name = name;
}

Character::Character(const Character& character)
{
	for (int i = 0; i < 4; i++)
		_inven[i] = NULL;
	*this = character;
}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
	{
		if (_inven[i])
			delete _inven[i];
	}
}

Character &Character::operator=(const Character& character)
{
	if (this != &character)
	{
		this->_name = character.getName();
		for (int i = 0; i < 4; i++)
		{
			if (_inven[i])
				delete _inven[i];
		}
		for (int i = 0;i < 4;i++)
		{
			if (character._inven[i] == NULL)
				_inven[i] = NULL;
			else
				_inven[i] = character._inven[i]->clone();
		}
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	for(int i = 0; i < 4; i++)
	{
		if (!_inven[i])
		{
			_inven[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || 4 <= idx)
		return ;
	_inven[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || 4 <= idx)
		return ;
	if (_inven[idx])
		_inven[idx]->use(target);
}
