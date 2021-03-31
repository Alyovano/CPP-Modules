/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 13:40:53 by aly               #+#    #+#             */
/*   Updated: 2021/03/31 14:35:27 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"
class HumanB
{
private:
	Weapon *_my_weapon;
	std::string _name;
public:
	void	attack();
	void 	setWeapon(Weapon & user_weapon);
	HumanB(std::string user_name);
	~HumanB();
};

#endif