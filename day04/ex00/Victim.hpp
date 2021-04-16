/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 14:39:21 by aly               #+#    #+#             */
/*   Updated: 2021/04/14 14:23:21 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>
#include <iostream>
class Victim
{
protected:
	std::string _name;
private:
public:
	std::string			get_name(void) const;
	Victim(std::string name);
	~Victim();
};

std::ostream &		operator<<(std::ostream & output, const Victim & x);

#endif
