/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 12:04:11 by alyovano          #+#    #+#             */
/*   Updated: 2021/03/17 21:07:46 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include <string>
#include <iostream>
#include <ctime>
#include <unistd.h>
#include "Zombie.hpp"

#define NB_OF_NAME 6
#define NB_OF_TYPE 6

class ZombieHorde
{

private:
	static std::string	tab_type[NB_OF_TYPE];
	static std::string	tab_name[NB_OF_NAME];
	Zombie		*_ptr;
	std::string _name;
	std::string _type;
	int					secure_token;
public:
	void	setName(std::string name);
	void	setType(std::string type);
	void	advert();
	void	announce();
	ZombieHorde(int n);
	~ZombieHorde();
};

#endif
