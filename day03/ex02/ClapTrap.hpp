/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 14:22:16 by aly               #+#    #+#             */
/*   Updated: 2021/04/11 00:28:28 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#define UINT unsigned int
#include <string>
#include <iostream>
class ClapTrap
{
private:
	void			init_ClapTrap(void);
protected:
		UINT 				 _hit_points;
		UINT				 _max_hit_points;
		UINT				 _energy_points;
		UINT				 _max_energy_points;
		UINT				 _level;
		int					 _melee_attack_dmg;
		int					 _ranged_attack_dmg;
		UINT				 _armor_dmg_reduc;
		std::string 		 _name;
public:
	void			rangedAttack(std::string const & target);
	void			meleeAttack(std::string const & target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	void			getEnergy(unsigned int amount);
	ClapTrap(std::string name);
	ClapTrap();
	~ClapTrap();
};


#endif