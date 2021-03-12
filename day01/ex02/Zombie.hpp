/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyovano <alyovano@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 12:04:11 by alyovano          #+#    #+#             */
/*   Updated: 2021/03/12 13:42:06 by alyovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <ctime>
#include <unistd.h>

#include "ZombieEvent.hpp"

class Zombie
{

private:
	std::string _name;
	std::string _type;	
public:
	void	advert();
	Zombie(std::string name, std::string type);
	~Zombie();
};

#endif