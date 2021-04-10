/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 13:17:00 by alyovano          #+#    #+#             */
/*   Updated: 2021/04/10 16:43:30 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#define UINT unsigned int

class FragTrap : public ClapTrap
{
	private:
		static std::string	 _attack[5];
	public:
		void			vaulthunter_dot_exe(std::string const & target);
		FragTrap(std::string input_name);
		~FragTrap();
};

#endif
