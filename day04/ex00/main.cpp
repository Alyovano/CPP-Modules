/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 13:02:07 by aly               #+#    #+#             */
/*   Updated: 2021/04/24 01:25:26 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int		main() {
	//Classes test
	std::cout << "----SORCERER TEST----" << std::endl;
	Sorcerer robert = Sorcerer("Robert", "Le Spectaculaire");
	Sorcerer gandalf = Sorcerer("Gandalf", "La Mayar");
	std::cout << robert;
	std::cout << gandalf;
	robert = gandalf;
	std::cout << robert;
	std::cout << gandalf;
	gandalf = robert;
	std::cout << robert;
	std::cout << gandalf;
	Sorcerer mathis = Sorcerer("Mathis", "Le Magnifique");
	Sorcerer test = Sorcerer(mathis);
	std::cout << test;

	
	std::cout << "----VICTIM TEST----" << std::endl;
	Victim pouet = Victim("Pouet");
	std::cout << pouet;

	//Polymorph test
	std::cout << "----POLYMOTPH VICTIM----" << std::endl;
	gandalf.polymorph(pouet);


	std::cout << "----PEON TEST----" << std::endl;
	Peon petit_peon("PEON");
	std::cout << petit_peon;

	std::cout << "----POLYMOTPH PEON----" << std::endl;
	gandalf.polymorph(petit_peon);
	std::cout << "----DESTRUCTION----" << std::endl;
}