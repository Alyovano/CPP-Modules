/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 14:46:45 by aly               #+#    #+#             */
/*   Updated: 2021/05/18 15:48:54 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <iostream>
#include <stdexcept>
#include <list>


template <typename T>
int		easyfind(T &tab, int n) {
	typename T::iterator it = tab.begin();
	for (typename T::iterator it_end = tab.end() ; it != it_end ; it++)
	{
		if (*it == n)
			return n;
	}
	throw std::exception();
}

// template <typename T>
// int        easyfind(T &tab, int n) {
//     for (typename T::iterator it = tab.begin(); it != tab.end() ; it++)
//     {
//         if (*it == n)
//             return n;
//     }
//     throw std::exception();
// }
