/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 23:04:21 by aly               #+#    #+#             */
/*   Updated: 2021/04/26 23:04:22 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include <string>
#include <iostream>
#include <unistd.h>

#include "Enemy.hpp"

class SuperMutant : public Enemy
{

private:

public:

	SuperMutant(const SuperMutant & x);
	SuperMutant&	operator=(const SuperMutant & x);
	SuperMutant();
	virtual ~SuperMutant();
	virtual void	takeDamage(int dmg);
};

#endif