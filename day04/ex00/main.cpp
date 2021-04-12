/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 13:02:07 by aly               #+#    #+#             */
/*   Updated: 2021/04/12 15:08:50 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"

void	sorcerer_test() {
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
}

void	victim_test() {
	std::cout << "----VICTIM TEST----" << std::endl;
	Victim pouet = Victim("Pouet");
	std::cout << pouet;
	
}

void	peon_test() {
}

int		main() {
	//Classes test
	sorcerer_test();
	victim_test();
	peon_test();
	std::cout << std::endl << std::endl;
	std::cout << "Story telling" << std::endl;



}