/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 23:04:16 by aly               #+#    #+#             */
/*   Updated: 2021/04/26 23:04:17 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include <string>
#include <iostream>
#include <unistd.h>

#include "Enemy.hpp"

class RadScorpion : public Enemy
{

private:

public:

	RadScorpion(const RadScorpion & x);
	RadScorpion&	operator=(const RadScorpion & x);
	RadScorpion();
	virtual ~RadScorpion();
};

#endif