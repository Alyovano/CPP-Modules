/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 13:16:57 by alyovano          #+#    #+#             */
/*   Updated: 2021/04/11 01:54:06 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

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

	//ex03
	std::cout << std::endl;
	std::cout << "TEST NINJATRAP" << std::endl;
	std::cout << std::endl;

	{
		NinjaTrap ninja = NinjaTrap("Bruce lee");
		std::cout << ninja.get_name() << std::endl;

		FragTrap robot = FragTrap("Roberto");
		ClapTrap fusion = ClapTrap("Vegeto");
		ScavTrap portier = ScavTrap("Jeffrey");
		ninja.ninjaShoebox(robot);
		ninja.ninjaShoebox(fusion);
		ninja.ninjaShoebox(portier);
		ninja.getEnergy(50);
		ninja.getEnergy(2890);

	}

	//ex04
	std::cout << std::endl;
	std::cout << "TEST SUPERTRAP" << std::endl;
	std::cout << std::endl;

	{
		SuperTrap SuperRobot = SuperTrap("SuperRobot");
		SuperRobot.meleeAttack("Test");
		ScavTrap portier = ScavTrap("Jeffrey");
		SuperRobot.ninjaShoebox(portier);
		SuperRobot.takeDamage(56);
		SuperRobot.beRepaired(23);
		SuperRobot.vaulthunter_dot_exe("Robert");
		SuperRobot.getEnergy(7);
		SuperRobot.vaulthunter_dot_exe("Robert");
		SuperRobot.getEnergy(2);
		SuperRobot.beRepaired(2);
		SuperRobot.rangedAttack("Robert");
		SuperRobot.meleeAttack("Robert");
	}

	std::cout << "FIN" << std::endl;
	return 0;
}