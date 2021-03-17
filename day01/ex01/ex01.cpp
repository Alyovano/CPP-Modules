/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 11:55:37 by alyovano          #+#    #+#             */
/*   Updated: 2021/03/17 18:43:34 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

void	memoryLeak()
{
	std::string*	panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;

	delete panthere;
}

// int		main()
// {
// 	memoryLeak();
// }
