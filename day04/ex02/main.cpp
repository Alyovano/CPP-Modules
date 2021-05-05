/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 00:27:55 by aly               #+#    #+#             */
/*   Updated: 2021/05/04 15:43:47 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

int		main() {
	// {
	// 	std::cout << "----TacticalMarine----" << std::endl;

	// 	ISpaceMarine *bob = new TacticalMarine;
	// 	bob->battleCry();
	// 	bob->meleeAttack();
	// 	bob->rangedAttack();
	// 	delete bob;

	
	// }
	// {
	// 	std::cout << "----AssaultTerminator----" << std::endl;
	// 	ISpaceMarine *jim = new AssaultTerminator;
	// 	jim->battleCry();
	// 	jim->meleeAttack();
	// 	jim->rangedAttack();
	// 	delete jim;

	// }
	{
		std::cout << "----MANDATATE TEST----" << std::endl;
		ISpaceMarine* bob = new TacticalMarine;
		ISpaceMarine* jim = new AssaultTerminator;
		ISquad* vlc = new Squad;
		vlc->push(bob);
		vlc->push(jim);
		vlc->push(jim);
		vlc->push(jim);
		vlc->push(jim);
		vlc->push(jim);
		vlc->push(jim);
		for (int i = 0; i < vlc->getCount(); ++i)
		{
			ISpaceMarine* cur = vlc->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		delete vlc;
	}

}