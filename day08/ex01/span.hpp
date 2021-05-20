/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 12:23:59 by aly               #+#    #+#             */
/*   Updated: 2021/05/20 15:29:56 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <iostream>
#include <stdexcept>
#include <list>
#include <string>
#include <iostream>
#include <unistd.h>

class span
{

private:
	std::list<int>	_lst;
	unsigned int	_max_range;
	unsigned int	_actual_range;
public:

	span(const span & x);
	span&	operator=(const span & x);
	span(unsigned int max);
	virtual ~span();

	void		addNumber(int n);
	void		printvalues();
	int			shortestSpan();
	int			longestSpan();


	struct AddOutOfRange : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
	struct CannotFindMinMax : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
};

#endif