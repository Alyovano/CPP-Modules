/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 13:53:25 by aly               #+#    #+#             */
/*   Updated: 2021/04/14 14:15:27 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"
#include "Sorcerer.hpp"

#include <string>

class Peon : public Victim
{
private:
	/* data */
public:
	Peon(std::string name);
	Peon(/* args */);
	~Peon();
};


#endif