/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:11:49 by aly               #+#    #+#             */
/*   Updated: 2021/05/03 14:34:18 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include <iostream>

int main()
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter *moi = new Character("moi");

	AMateria *tmp;
	tmp = src->createMateria("ice");
	moi->equip(tmp);
	tmp = src->createMateria("cure");
	moi->equip(tmp);

	ICharacter *bob = new Character("bob");

	moi->use(0, *bob);
	moi->use(1, *bob);

	delete bob;
	delete moi;
	delete src;

	{
		std::cout << std::endl << "=== CHARACTER COPY" << std::endl << std::endl;

		IMateriaSource *source = new MateriaSource();
		source->learnMateria(new Ice());
		source->learnMateria(new Cure());

		Character *a = new Character("A");
		Character *b = new Character("B");
		Character *enemy = new Character("bob");

		a->equip(source->createMateria("ice"));
		a->equip(source->createMateria("cure"));

		*b = *a;
		delete a;

		b->use(0, *enemy);
		b->use(1, *enemy);

		delete source;
		delete b;
		delete enemy;
	}

	{
		std::cout << std::endl << "=== MATERIA COPY" << std::endl << std::endl;

		AMateria *a = new Ice();
		AMateria *b = new Ice();

		Character c("xxx");

		a->use(c);
		a->use(c);
		a->use(c);

		*b = *a;

		std::cout << "original XP: " << a->getXP() << std::endl;
		std::cout << "  copied XP: " << b->getXP() << std::endl;

		delete a;
		delete b;
	}

	{
		std::cout << std::endl << "=== createMateria() ON NOT REGISTERED" << std::endl << std::endl;

		IMateriaSource *source = new MateriaSource();
		source->learnMateria(new Ice());

		std::cout << "got: " << source->createMateria("cure") << std::endl;

		delete source;
	}

	{
		std::cout << std::endl << "=== UNEQUIP" << std::endl << std::endl;

		Ice *ice = new Ice();
		Character *a = new Character("A");

		a->equip(ice);
		a->unequip(0);

		std::cout << "(should not print anything)" << std::endl;
		a->use(0, *a);

		delete ice;
		delete a;
	}

	{
		std::cout << std::endl << "=== MATERIA XP" << std::endl << std::endl;

		Ice *ice = new Ice();
		Character *a = new Character("A");

		std::cout << "Xp: " << ice->getXP() << std::endl;

		a->equip(ice);
		a->use(0, *a);
		a->use(0, *a);
		a->use(0, *a);
		a->use(0, *a);

		std::cout << "Xp: " << ice->getXP() << std::endl;

		delete a;
	}

	//MANDATATE TESTS
	std::cout << "MANDATATE TESTS" << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* moi = new Character("moi");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		moi->equip(tmp);
		tmp = src->createMateria("cure");
		moi->equip(tmp);
		ICharacter* bob = new Character("bob");
		moi->use(0, *bob);
		moi->use(1, *bob);
		delete bob;
		delete moi;
		delete src;
}
return 0;

	return (0);
}