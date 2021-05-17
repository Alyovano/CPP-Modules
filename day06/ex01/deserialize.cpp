/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deserialize.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 12:30:00 by aly               #+#    #+#             */
/*   Updated: 2021/05/17 13:21:44 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"


Data*			deserialize(void* raw) {
	Data*	data = new Data;
	data->s1 = *reinterpret_cast<std::string*>(raw);
	data->n = *reinterpret_cast<int*>(reinterpret_cast<char*>(raw) + sizeof(std::string));
	data->s2 = *reinterpret_cast<std::string*>(reinterpret_cast<char*>(raw) + sizeof(std::string) + sizeof(int));
	return (data);
}