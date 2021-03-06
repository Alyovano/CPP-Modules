/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 00:29:25 by aly               #+#    #+#             */
/*   Updated: 2021/05/04 14:37:55 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include <string>
#include <iostream>
#include <unistd.h>

#include "IspaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{

private:

public:
	virtual ISpaceMarine* clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
	
	TacticalMarine(const TacticalMarine & x);
	TacticalMarine&	operator=(const TacticalMarine & x);
	TacticalMarine();
	virtual ~TacticalMarine();
};

#endif