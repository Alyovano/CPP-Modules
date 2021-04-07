/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyovano <alyovano@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 13:16:57 by alyovano          #+#    #+#             */
/*   Updated: 2021/04/07 17:16:13 by alyovano         ###   ########.fr       */
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
	return 0;
}