/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 11:44:45 by aly               #+#    #+#             */
/*   Updated: 2021/05/17 13:20:59 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

char	random_char(void) {
	char rtable[62] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
	return rtable[rand() % 61];
}