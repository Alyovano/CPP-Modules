/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 13:26:52 by alyovano          #+#    #+#             */
/*   Updated: 2021/03/17 19:58:48 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include "Zombie.hpp"
#include <string>
#include <iostream>
#include <ctime>
#include <unistd.h>

#define NAME_LENGHT 8

class ZombieEvent
{
private:
	std::string _type;
public:
	void	setZombieType(std::string type);
	Zombie	randomChump(void);
	Zombie *newZombie(void);
	ZombieEvent();
	~ZombieEvent();
};

#endif
