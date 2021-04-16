/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 13:16:57 by alyovano          #+#    #+#             */
/*   Updated: 2021/04/16 16:25:25 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main() {
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

	FragTrap robot2(robot);
	robot2.beRepaired(5);
	//Not mandatate
	robot.getEnergy(0);
	robot.getEnergy(10);
	robot.getEnergy(45);

	return 0;
}