/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 13:40:12 by aly               #+#    #+#             */
/*   Updated: 2021/03/31 14:18:07 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"
class HumanA
{
private:
	Weapon *_my_weapon;
	std::string _name;
public:
	void	attack();
	HumanA(std::string user_name, Weapon & mon_arme);
	~HumanA();
};

#endif