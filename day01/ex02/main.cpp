/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 12:12:41 by alyovano          #+#    #+#             */
/*   Updated: 2021/03/17 20:07:25 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main()
{
	Zombie zombie;
	zombie.setName("Maurice");
	zombie.setType("Mutant");
	zombie.advert();

	// On creer une instance Event

	ZombieEvent event;

	// Le type reste enregistre

	event.setZombieType("Rampant");

	// On creer un zombie via Zombie Event

	Zombie *new_zombie  = event.newZombie();

	new_zombie->setName("Perigourdine");
	new_zombie->setType("Guerriere");
	new_zombie->advert();
	//free
	delete new_zombie;


	// Creation d'un random sur la stack

	Zombie random  = event.randomChump();
	random.announce();
	//random.advert();
	return (0);
}
