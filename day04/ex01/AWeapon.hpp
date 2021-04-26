/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 18:34:57 by alyovano          #+#    #+#             */
/*   Updated: 2021/04/26 17:25:58 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include <stdio.h>

class AWeapon
{

private:
	std::string _name;
	int _apcost;
	int _damage;

public:

	std::string	getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
	AWeapon(const AWeapon & x);
	AWeapon&	operator=(const AWeapon & x);
	AWeapon();
	AWeapon(std::string const & name, int apcost, int damage);
	~AWeapon();
};

std::ostream &operator<<(std::ostream &flux, AWeapon const& other);

#endif