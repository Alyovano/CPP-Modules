/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyovano <alyovano@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 13:16:57 by alyovano          #+#    #+#             */
/*   Updated: 2021/04/08 16:56:40 by alyovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main() {
	{
		FragTrap robot = FragTrap("Roberto");
		robot.rangedAttack("Test");
		robot.meleeAttack("");
		robot.takeDamage(5);
		robot.takeDamage(6);
		robot.takeDamage(40);
		robot.takeDamage(4567);
		robot.takeDamage(876543);
		robot.takeDamage(0);
		robot.beRepaired(10);
		robot.takeDamage(9);
		robot.beRepaired(100);
		robot.vaulthunter_dot_exe("Bernard");
	}
	{
		ScavTrap portier = ScavTrap("Jeffrey");
		portier.rangedAttack("Test");
		portier.meleeAttack("");
		portier.takeDamage(5);
		portier.takeDamage(6);
		portier.takeDamage(40);
		portier.takeDamage(4567);
		portier.takeDamage(876543);
		portier.takeDamage(0);
		portier.beRepaired(10);
		portier.takeDamage(9);
		portier.beRepaired(100);
	}

	return 0;
}