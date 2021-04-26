/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 23:03:49 by aly               #+#    #+#             */
/*   Updated: 2021/04/26 23:03:49 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include <iostream>
#include <unistd.h>

#include "Enemy.hpp"
#include "AWeapon.hpp"

class Character
{

private:
	int			_armed;
	std::string _name;
	int			_ap;
	AWeapon * 	_weapon;		
public:

	Character(const Character & x);
	Character(std::string const & name);
	Character&	operator=(const Character & x);
	Character();
	~Character();

	void recoverAP();
	void equip(AWeapon *x);
	void attack(Enemy *x);
	std::string getName() const;
	int		getAP() const;
	std::string getweaponname() const;
	int		is_armed() const;
};

std::ostream & operator<<(std::ostream & out, Character const & x);

#endif