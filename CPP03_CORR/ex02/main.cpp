/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 13:16:57 by alyovano          #+#    #+#             */
/*   Updated: 2021/04/16 16:30:30 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main() {
	//ex00
	std::cout << std::endl;
	std::cout << "TEST FRAGTRAP" << std::endl;
	std::cout << std::endl;

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
		FragTrap robot2(robot);
	}

	//ex01
	std::cout << std::endl;
	std::cout << "TEST SCAVTRAP" << std::endl;
	std::cout << std::endl;

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
		portier.challengeNewcomer();
	}

	//ex02
	std::cout << std::endl;
	std::cout << "TEST CLAPTRAP" << std::endl;
	std::cout << std::endl;

	{
		ClapTrap fusion;
		fusion.meleeAttack("Zombie");
		fusion = ClapTrap("Louis");
		fusion.rangedAttack("Roberto");
	}

	std::cout << "FIN" << std::endl;
	return 0;
}