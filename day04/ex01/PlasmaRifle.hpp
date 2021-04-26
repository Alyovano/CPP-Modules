/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 23:04:05 by aly               #+#    #+#             */
/*   Updated: 2021/04/26 23:04:05 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include <string>
#include <iostream>
#include <unistd.h>

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{

private:

public:
	virtual void attack() const;
	PlasmaRifle(const PlasmaRifle & x);
	PlasmaRifle&	operator=(const PlasmaRifle & x);
	PlasmaRifle();
	virtual ~PlasmaRifle();
};

#endif