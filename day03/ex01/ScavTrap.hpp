/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 16:47:33 by alyovano          #+#    #+#             */
/*   Updated: 2021/04/16 14:54:54 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>

#define UINT unsigned int

class ScavTrap
{
	private:
		UINT 				 _hit_points;
		UINT				 _max_hit_points;
		UINT				 _energy_points;
		UINT				 _max_energy_points;
		UINT				 _level;
		int					 _melee_attack_dmg;
		int					 _ranged_attack_dmg;
		UINT				 _armor_dmg_reduc;
		std::string 		 _name;
		static std::string	 _challeng[3];
	public:
		void			getEnergy(unsigned int amount);
		void			challengeNewcomer(void);
		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		ScavTrap(const ScavTrap & x);
		ScavTrap&			operator=(const ScavTrap & x);
		ScavTrap(std::string input_name);
		~ScavTrap();
};


#endif