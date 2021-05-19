/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 12:23:59 by aly               #+#    #+#             */
/*   Updated: 2021/05/19 12:24:18 by aly              ###   ########.fr       */
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

public:

	span(const span & x);
	span&	operator=(const span & x);
	span();
	~span();
};

#endif