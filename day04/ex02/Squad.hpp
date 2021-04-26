/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 23:07:01 by aly               #+#    #+#             */
/*   Updated: 2021/04/27 00:59:06 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include <string>
#include <iostream>
#include <unistd.h>

#include "ISquad.hpp"

struct lst
{
	int position;
	ISpaceMarine *solider;
	lst *next;
};


class Squad : public ISquad
{

private:
	int		_count;
	lst		*_squad;
public:

	virtual int 				push(ISpaceMarine * x);
	virtual int					getCount() const;
	virtual ISpaceMarine*	 	getUnit(int i) const;

	Squad(const Squad & x);
	Squad&	operator=(const Squad & x);
	Squad();
	virtual ~Squad();
};

#endif