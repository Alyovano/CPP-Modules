/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 16:47:33 by alyovano          #+#    #+#             */
/*   Updated: 2021/04/10 16:43:24 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#define UINT unsigned int

class ScavTrap : public ClapTrap
{
	private:
		static std::string	 _challeng[3];
	public:
		void			challengeNewcomer(void);
		ScavTrap(std::string input_name);
		~ScavTrap();
};


#endif