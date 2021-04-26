/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 23:03:55 by aly               #+#    #+#             */
/*   Updated: 2021/04/26 23:03:56 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>
#include <iostream>
#include <unistd.h>

class Enemy
{

protected:
	std::string _type;
	int _hp;
public:

	Enemy(const Enemy & x);
	std::string		getType() const;
	Enemy&	operator=(const Enemy & x);
	Enemy(int hp, std::string const & type);
	Enemy();
	virtual ~Enemy();
	int		getHP() const;
	virtual void takeDamage(int dmg);
};

#endif