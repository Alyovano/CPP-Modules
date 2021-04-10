/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyovano <alyovano@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 13:17:00 by alyovano          #+#    #+#             */
/*   Updated: 2021/04/08 17:30:02 by alyovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>

#define UINT unsigned int

class FragTrap
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
		static std::string	 _attack[5];
	public:
		void			vaulthunter_dot_exe(std::string const & target);
		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			getEnergy(unsigned int amount);
		FragTrap(std::string input_name);
		~FragTrap();
};

#endif
