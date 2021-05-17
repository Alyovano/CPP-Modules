/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 13:30:53 by aly               #+#    #+#             */
/*   Updated: 2021/05/17 15:11:44 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base*   generate(void)
{
	int	random = rand() % 3;

	if (random == 0)
		return (new A);
	else if (random == 1)
		return (new B);
	else
		return (new C);
}

void	identify_from_pointer(Base* p)
{
	if (dynamic_cast<A*>(p) != 0)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != 0)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != 0)
		std::cout << "C" << std::endl;
}

void	identify_from_reference(Base& p)
{

	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	} catch(const std::exception& e) {}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	} catch(const std::exception& e) {}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	} catch(const std::exception& e) {}
}

int		main () {
	srand(time(NULL));
	// Classe de base prend un type aleatoire
	Base *test = generate();

	std::cout << "ptr: ";
	identify_from_pointer(test);

	std::cout << "ref: ";
	identify_from_reference(*test);

	delete test;
}