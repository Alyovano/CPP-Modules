/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 13:40:55 by aly               #+#    #+#             */
/*   Updated: 2021/03/31 14:42:15 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "HumanA.hpp"

void intra() {
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Test du pdf de l'intra" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
}

int main()
{
	{
		Weapon automatic = Weapon("AK47");

		HumanA alex("Alex", automatic);
		alex.attack();
		automatic.setType("R301");
		alex.attack();
	}
	std::cout << std::endl;
	{
		Weapon knives = Weapon("butter knife");

		HumanB tim = HumanB("Tim");
		tim.setWeapon(knives);
		tim.attack();
		knives.setType("machette");
		tim.attack();
	}

	// Intra PDF tests
	intra();

	{
		Weapon 			club = Weapon("crude spiked club");
		
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon 			club = Weapon("crude spiked club");

		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
}


// intmain()
// {
// 	{
// 		Weaponclub = Weapon("crude spiked club");
// 		HumanA bob("Bob", club);
// 		bob.attack();
// 		club.setType("some other type of club");
// 		bob.attack();
// 	}
// 	{
// 		Weaponclub = Weapon("crude spiked club");
// 		HumanB jim("Jim");
// 		jim.setWeapon(club);
// 		jim.attack();
// 		club.setType("some other type of club");
// 		jim.attack();
// 	}
// }