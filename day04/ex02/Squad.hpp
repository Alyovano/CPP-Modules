/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 23:07:01 by aly               #+#    #+#             */
/*   Updated: 2021/05/04 15:53:36 by aly              ###   ########.fr       */
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
	std::string position;
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
	int		_AT;
	int		_TM;
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