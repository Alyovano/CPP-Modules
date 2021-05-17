/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 11:22:43 by aly               #+#    #+#             */
/*   Updated: 2021/05/17 13:23:48 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

int		main() {
	std::cout << "======SERIALIZE======" << std::endl;
	void  * test = serialize();
	std::cout << "Adresse ptr = " << (unsigned int *)test << std::endl;
	// Print ptr adress


	std::cout << "=====DESERIALIZE=====" << std::endl;
	Data *data = deserialize(test);
	std::cout << "s1: " << data->s1 << std::endl;
	std::cout << "int: " << data->n << std::endl;
	std::cout << "s2: " <<  data->s2 << std::endl;

	delete reinterpret_cast<char*>(test);
	delete data;
	return EXIT_SUCCESS;
}
