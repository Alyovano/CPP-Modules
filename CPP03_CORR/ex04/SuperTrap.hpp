/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 01:10:13 by aly               #+#    #+#             */
/*   Updated: 2021/04/11 01:21:28 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class 		SuperTrap : public FragTrap, public NinjaTrap
{
private:
	/* data */
public:
	SuperTrap(std::string name);// parametric name construct 
	SuperTrap(); // parametric std construct
	~SuperTrap();
};


#endif