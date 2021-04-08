/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyovano <alyovano@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 13:27:58 by alyovano          #+#    #+#             */
/*   Updated: 2021/04/08 17:40:26 by alyovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <cstdlib>

std::string 	gen_random(const int len) {
    
    std::string tmp_s;
    static const char alphanum[] =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

    srand( (unsigned) time(NULL) * getpid());
    tmp_s.reserve(len);
    for (int i = 0; i < len; ++i) 
        tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
    return tmp_s; 
}

void	ZombieEvent::setZombieType(std::string type) {
	this->_type = type;
}

/*
** Retourne un zombie allouer sur la stack
** Avec un nom/type aleatoire
*/


Zombie 			ZombieEvent::randomChump(void) {
	Zombie random_zombie;
	random_zombie.setName(gen_random(NAME_LENGHT));
	random_zombie.setType(this->_type);
	return (random_zombie);
}

/*
** Retourne un zombie allouer sur la heap
*/

Zombie			*ZombieEvent::newZombie(void) {
	Zombie *baby_zombie = new Zombie;
	return (baby_zombie);
}

ZombieEvent::ZombieEvent() {
}

ZombieEvent::~ZombieEvent() {
}