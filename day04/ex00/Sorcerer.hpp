/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 12:59:36 by aly               #+#    #+#             */
/*   Updated: 2021/04/24 00:45:43 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer
{
private:
	std::string _name;
	std::string _title;
public:
	std::string			get_name(void) const;
	std::string			get_title(void) const;
	Sorcerer&			operator=(const Sorcerer & x);
	void 				polymorph(Victim const &a);
	Sorcerer(std::string name, std::string title);
	Sorcerer(const Sorcerer & x);
	~Sorcerer();
};

std::ostream &		operator<<(std::ostream & output, const Sorcerer & x);

#endif