/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 12:04:11 by alyovano          #+#    #+#             */
/*   Updated: 2021/03/17 20:43:03 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <ctime>
#include <unistd.h>

class Zombie
{

private:
	std::string _name;
	std::string _type;
public:
	void	setName(std::string name);
	void	setType(std::string type);
	void	advert();
	void	announce();
	Zombie();
	~Zombie();
};

#endif
