/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 23:07:01 by aly               #+#    #+#             */
/*   Updated: 2021/05/05 11:42:06 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include <string.h>

#include "ISquad.hpp"

struct lst
{
	unsigned int *ptr;
	ISpaceMarine *solider;
	lst *next;
};


class Squad : public ISquad
{

private:
	int		check_presence(ISpaceMarine * x);
	lst 	*Last_solider();
	lst		*lst_new_solider(ISpaceMarine * x);
	int		lstsize();
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