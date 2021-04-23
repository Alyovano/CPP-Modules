/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 01:26:16 by aly               #+#    #+#             */
/*   Updated: 2021/04/24 01:26:17 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include <string>
#include <iostream>
#include <unistd.h>

#include "Victim.hpp"

class Peon : virtual public Victim
{

private:
public:

	Peon(const Peon & x);
	Peon&	operator=(const Peon & x);
	Peon();
	Peon(std::string name);
	virtual void getPolymorphed() const;
	virtual ~Peon();
};

#endif