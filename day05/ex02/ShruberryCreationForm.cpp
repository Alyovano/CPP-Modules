/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyovano <alyovano@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 18:29:40 by alyovano          #+#    #+#             */
/*   Updated: 2021/05/12 22:54:00 by alyovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "ShruberryCreationForm.hpp"

void 	ShruberryCreationForm::execute(Bureaucrat const & executor) const {
	(void)executor;
	if (this->getSign() == false) {
		std::cout << "Le contract n'est pas encore signe" << std::endl;
		return ;
	}
	std::string filenaMe = this->getTarget();
	filenaMe += "_shrubbery";
	std::ofstream fd(filenaMe.c_str());
	for (size_t i = 0; i < 3; i++)
	{
		fd << "	    ****" << std::endl;
		fd << "     ********" << std::endl;
		fd << "    **  ******" << std::endl;
		fd << "     *   ******     ******" << std::endl;
		fd << "         ******   *********" << std::endl;
		fd << "          ****  *****   ***" << std::endl;
		fd << "          ***  ***     **" << std::endl;
		fd << "    *************       *" << std::endl;
		fd << "  ******************" << std::endl;
		fd << " *****   H*****H*******" << std::endl;
		fd << " ***     H-___-H  *********" << std::endl;
		fd << "  ***    H     H      *******" << std::endl;
		fd << "   **    H-___-H        *****" << std::endl;
		fd << "     *   H     H         ****" << std::endl;
		fd << "         H     H         ***" << std::endl;
		fd << "         H-___-H         **" << std::endl;
		fd << "         H     H         *" << std::endl;
		fd << "         H-___-H" << std::endl;
	}
}

ShruberryCreationForm::ShruberryCreationForm(std::string target) : 
					Form("ShruberryCreationForm", 145, 137, target) {
}

ShruberryCreationForm::~ShruberryCreationForm() {
}

ShruberryCreationForm::ShruberryCreationForm(const ShruberryCreationForm & x) : Form(x) {
	*this = x;
}

ShruberryCreationForm&		ShruberryCreationForm::operator=(const ShruberryCreationForm & x) {
	// if (this != &x) {
	// 	this->a = x.a;
	// 	this->b = x.b;
	// 	     ...
	// }
	(void)x; // -Werror -Wextra -Wall
    return *this;
}
