/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 16:00:21 by aly               #+#    #+#             */
/*   Updated: 2021/05/18 10:29:41 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int		main() {
	float	tabfloat[5] = { 59.5f, 31.6f, 99.9f, 1.325f, 3333.6f };
	int		tabint[5] = { 0, 1, 2, 3, 4 };
	int		fooint[5] = { 89, 544966, 565656, -5465655, 5665 };
	
	std::cout << "FLOAT " << std::endl;
	iter(tabfloat, 5, display<float>);
	iter(tabfloat, 5, plus1<float>);
	iter(tabfloat, 5, display<float>);
	iter(tabfloat, 5, divideby2<float>);
	iter(tabfloat, 5, display<float>);

	std::cout << "INT " << std::endl;
	iter(tabint, 5, display<int>);
	iter(tabint, 5, plus1<int>);
	iter(tabint, 5, display<int>);
	iter(tabint, 5, divideby2<int>);
	iter(tabint, 5, display<int>);

	std::cout << "INT 2" << std::endl;
	iter(fooint, 5, display<int>);
	iter(fooint, 5, plus1<int>);
	iter(fooint, 5, display<int>);
	iter(fooint, 5, divideby2<int>);
	iter(fooint, 5, display<int>);

}