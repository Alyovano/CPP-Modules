/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 11:30:24 by aly               #+#    #+#             */
/*   Updated: 2021/05/17 13:24:29 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

void*	serialize(void) {
	srand (time(NULL));
	char *ret_serialized = new char[sizeof(std::string) + sizeof(int) + sizeof(std::string)];
	std::string tmp;
	std::string tmp2;
	Data srcs;
	for (size_t i = 0; i < 8; i++){
		tmp += random_char();
	}
	for (size_t i = 0; i < 8; i++){
		tmp2 += random_char();
	}
	int tmp_nb = rand();
	std::cout << "Premiere str random : " << tmp << std::endl;
	std::cout << "Deuxieme str random : " << tmp2 << std::endl;
	std::cout << "int random : " << tmp_nb << std::endl;

	*reinterpret_cast<std::string*>(ret_serialized) = tmp;
	*reinterpret_cast<int*>(ret_serialized + sizeof(std::string)) = tmp_nb;
	*reinterpret_cast<std::string*>(ret_serialized 
					+ sizeof(std::string) + sizeof(int)) = tmp2;
	return (reinterpret_cast<void*>(ret_serialized));
}