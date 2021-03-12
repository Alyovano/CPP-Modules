/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyovano <alyovano@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:50:48 by alyovano          #+#    #+#             */
/*   Updated: 2021/03/12 11:48:31 by alyovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP
#include <iostream>
#include <string>

class Pony
{
public:
	void	name(std::string name);
	void 	color(std::string new_color);
	Pony();
	~Pony();

private:
	std::string _name;
	std::string _color;
};


#endif