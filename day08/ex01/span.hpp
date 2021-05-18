/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:59:13 by aly               #+#    #+#             */
/*   Updated: 2021/05/18 16:09:00 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <stdexcept>
#include <string>
#include <iostream>
#include <unistd.h>
#include <stdlib.h>

class span
{

private:
	unsigned int	_max_range;
	unsigned int 	_index;
	int				*_tab;

public:

	int		getValue(unsigned int index);
	void	addNumber(int nb);

	span(const span & x);
	span&	operator=(const span & x);
	span(unsigned int nb);
	~span();
};

#endif