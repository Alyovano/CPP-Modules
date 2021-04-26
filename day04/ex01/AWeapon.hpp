/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyovano <alyovano@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 18:34:57 by alyovano          #+#    #+#             */
/*   Updated: 2021/04/25 19:09:16 by alyovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <string>
#include <iostream>
#include <unistd.h>

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

#endif