/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:09:35 by aly               #+#    #+#             */
/*   Updated: 2021/05/03 14:24:30 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>
#include <unistd.h>

# include "ICharacter.hpp"

class AMateria
{
private:
	std::string _type;
	unsigned int _xp;

	AMateria();
public:
	AMateria(std::string const & type);
	AMateria(const AMateria &materia);
	AMateria &operator=(const AMateria &materia);
	virtual ~AMateria();

	std::string const & getType() const;
	unsigned int getXP() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif