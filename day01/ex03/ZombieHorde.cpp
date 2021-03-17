/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 12:05:10 by alyovano          #+#    #+#             */
/*   Updated: 2021/03/17 21:11:56 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

std::string ZombieHorde::tab_name[] = {
	"Patrice", "Marlene", "Juan",
	"Sacha", "Irene", "Marcus",
};

std::string ZombieHorde::tab_type[] = {
	"Mutant", "Rampant", "Volant",
	"Normal", "Pas ouf", "Moisi",
};

ZombieHorde::ZombieHorde(int n) {
	if (n <= 0)
	{
		Zombie *anti_crash = new Zombie;
		this->_ptr = anti_crash;
		this->secure_token = 1;
		return ;
	}
	srand (time(NULL));
	Zombie *zombies = new Zombie[n];
	int i = 0;
	while (i < n) {
		zombies[i].setName(ZombieHorde::tab_name[std::rand() % NB_OF_NAME]);
		zombies[i].setType(ZombieHorde::tab_type[std::rand() % NB_OF_TYPE]);
		zombies[i].announce();
		i++;
	}
	this->secure_token = 0;
	this->_ptr = zombies;
}

ZombieHorde::~ZombieHorde() {
	if (this->secure_token == 1) {
		std::cout << "n must be < 0" << std::endl;
		delete this->_ptr;
	}
	else {	
		std::cout << "La horde a ete detruite" << std::endl;
		delete[]this->_ptr;
	}
}
