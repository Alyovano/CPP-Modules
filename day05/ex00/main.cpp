/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 21:31:25 by alyovano          #+#    #+#             */
/*   Updated: 2021/05/03 17:24:55 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main()
{
	Bureaucrat employe = Bureaucrat("Goerges", 1);
	std::cout << employe.getName() << std::endl;
	std::cout << employe.getGrade() << std::endl;
	return 0;
}
