/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 18:17:00 by aly               #+#    #+#             */
/*   Updated: 2021/03/31 20:45:55 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int		error(int error) {
	if (error == 6)
		std::cerr << "S2 is Empty" << std::endl;
	if (error == 5)
		std::cerr << "S1 is Empty" << std::endl;
	if (error == 4)
		std::cerr << "Cant open the file" << std::endl;
	if (error == 3)
		std::cerr << "Error : S1 & S2 are the same" << std::endl;
	if (error == 2)
		std::cerr << "File Error" << std::endl;
	if (error == 1)
		std::cerr << "Argument Error" << std::endl;
	return error;
}
