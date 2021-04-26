/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 23:03:59 by aly               #+#    #+#             */
/*   Updated: 2021/04/26 23:04:00 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int		main() {
	// PLASMARIFLE TEST
	{
		std::cout << "PLASMARIFLE TEST" << std::endl;
		PlasmaRifle *plasma = new PlasmaRifle;
		std::cout << "APcoast : " << plasma->getAPCost() << std::endl;
		std::cout << "Damages : " << plasma->getDamage() << std::endl;
		std::cout << "Name : " << plasma->getName() << std::endl;
		std::cout << "Attaque : ";
		plasma->attack();
		delete plasma;
	}

	std::cout << std::endl;
	std::cout << std::endl;

	// POWERFIST TEST
	{
		std::cout << "POWERFIST TEST" << std::endl;
		PowerFist *pf = new PowerFist;
		std::cout << "APcoast : " << pf->getAPCost() << std::endl;
		std::cout << "Damages : " << pf->getDamage() << std::endl;
		std::cout << "Name : " << pf->getName() << std::endl;
		std::cout << "Attaque : ";
		pf->attack();
		delete pf;
	}

	std::cout << std::endl;
	std::cout << std::endl;

	// SUPER MUTANT TEST
	{
		std::cout << "SUPER MUTANT TEST" << std::endl;
		SuperMutant *sm = new SuperMutant;
		std::cout << "HP : " << sm->getHP();
		std::cout << " | Type : " << sm->getType() << std::endl;
		sm->takeDamage(50);
		std::cout << "HP : " << sm->getHP() << std::endl;
		sm->takeDamage(26);
		std::cout << "HP : " << sm->getHP() << std::endl;
		sm->takeDamage(89);
		std::cout << "HP : " << sm->getHP() << std::endl;
		sm->takeDamage(954);

		delete sm;
	}

	std::cout << std::endl;
	std::cout << std::endl;

	//  RADSCORPION TEST
	{
		std::cout << "SUPER MUTANT TEST" << std::endl;
		RadScorpion *rs = new RadScorpion;
		std::cout << "HP : " << rs->getHP();
		std::cout << " | Type : " << rs->getType() << std::endl;
		rs->takeDamage(50);
		std::cout << "HP : " << rs->getHP() << std::endl;
		rs->takeDamage(56);

		delete rs;
	}

	std::cout << std::endl;
	std::cout << std::endl;

	//  CHARACTER TEST
	{
		std::cout << "CHARACTER TEST" << std::endl;
		Character *personnage = new Character("Mathias");
		PlasmaRifle *plasma = new PlasmaRifle;
		RadScorpion *rs = new RadScorpion;
		PowerFist *pf = new PowerFist;

		std::cout << "Equipement de l'arme" << std::endl;
		personnage->equip(plasma);
		std::cout << "Attaque sur RadScorpion" << std::endl;
		personnage->attack(rs);
		std::cout << *personnage << std::endl;
		std::cout << "Changement de l'arme" << std::endl;
		personnage->equip(pf);
		std::cout << *personnage << std::endl;


		delete personnage;
		delete plasma;
		delete rs;
		delete pf;
	}

	std::cout << std::endl;
	std::cout << std::endl;

	//  MANDATATE PDF TEST
	std::cout << "PDF TESTS" << std::endl;
	{
		Character* moi = new Character("moi");
		std::cout << *moi;
		Enemy* b = new RadScorpion();
		AWeapon* pr = new PlasmaRifle();
		AWeapon* pf = new PowerFist();
		moi->equip(pr);
		std::cout << *moi;
		moi->equip(pf);
		moi->attack(b);
		std::cout << *moi;
		moi->equip(pr);
		std::cout << *moi;
		moi->attack(b);
		std::cout << *moi;
		moi->attack(b);
		std::cout << *moi;

		delete b;
		delete pr;
		delete pf;
		delete moi;
	}
	return 0;
}