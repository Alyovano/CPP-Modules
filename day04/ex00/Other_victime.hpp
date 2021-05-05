/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Other_victime.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 18:29:47 by aly               #+#    #+#             */
/*   Updated: 2021/05/05 18:34:26 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OTHER_VICTIME_HPP
#define OTHER_VICTIME_HPP

#include <string>
#include <iostream>
#include <unistd.h>

#include "Victim.hpp"

class Other_victime : virtual public Victim
{

private:

public:
	void getPolymorphed() const;

	Other_victime(const Other_victime & x);
	Other_victime&	operator=(const Other_victime & x);
	Other_victime();
	Other_victime(std::string name);
	~Other_victime();
};

#endif