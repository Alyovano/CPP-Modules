/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 00:29:25 by aly               #+#    #+#             */
/*   Updated: 2021/04/27 00:29:41 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include <string>
#include <iostream>
#include <unistd.h>

#include "IspaceMarine.hpp"

class TacticalMarine
{

private:

public:

	TacticalMarine(const TacticalMarine & x);
	TacticalMarine&	operator=(const TacticalMarine & x);
	TacticalMarine();
	~TacticalMarine();
};

#endif