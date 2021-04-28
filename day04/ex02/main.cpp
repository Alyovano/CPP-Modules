/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 00:27:55 by aly               #+#    #+#             */
/*   Updated: 2021/04/28 16:55:56 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

int		main() {

	std::cout << "----TacticalMarine----" << std::endl;

	ISpaceMarine *bob = new TacticalMarine;
	// bob->battleCry();
	// bob->meleeAttack();
	// bob->rangedAttack();
	//delete bob;

	std::cout << "----AssaultTerminator----" << std::endl;

	ISpaceMarine *jim = new AssaultTerminator;
	// jim->battleCry();
	// jim->meleeAttack();
	// jim->rangedAttack();
	//delete jim;

	std::cout << "----Squad----" << std::endl;
	
	ISquad *vlc = new Squad;

	// ZONE DE DOUTE
	vlc->push(bob);
	vlc->push(jim);
	vlc->push(jim);
	vlc->push(jim);
	//std::cout << "Nombre de marines : " << vlc->getCount() << std::endl;
	//ISpaceMarine* cur = vlc->getUnit(0);
	// cur->battleCry();
	// cur->rangedAttack();
	// cur->meleeAttack();
	//vlc->getUnit(1);

}