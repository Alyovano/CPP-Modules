/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:50:48 by alyovano          #+#    #+#             */
/*   Updated: 2021/03/17 18:43:40 by aly              ###   ########.fr       */
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