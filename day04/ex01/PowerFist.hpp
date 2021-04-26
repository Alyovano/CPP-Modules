/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 23:04:10 by aly               #+#    #+#             */
/*   Updated: 2021/04/26 23:04:11 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include <string>
#include <iostream>
#include <unistd.h>

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{

private:

public:

	virtual void attack() const;
	PowerFist(const PowerFist & x);
	PowerFist&	operator=(const PowerFist & x);
	PowerFist();
	virtual ~PowerFist();
};

#endif