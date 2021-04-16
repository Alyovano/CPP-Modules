/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 00:35:49 by aly               #+#    #+#             */
/*   Updated: 2021/04/11 00:50:55 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public ClapTrap
{
private:
	/* data */
public:
		void		ninjaShoebox(NinjaTrap & ptr);
		void		ninjaShoebox(ClapTrap & ptr);
		void		ninjaShoebox(ScavTrap & ptr);
		void		ninjaShoebox(FragTrap & ptr);
	NinjaTrap(std::string name);
	~NinjaTrap();
};

#endif