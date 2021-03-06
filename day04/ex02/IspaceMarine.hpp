/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IspaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 23:08:19 by aly               #+#    #+#             */
/*   Updated: 2021/05/04 14:30:44 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class ISpaceMarine
{
public:
		virtual ~ISpaceMarine() {}
		virtual ISpaceMarine* clone() const = 0;
		virtual void battleCry() const = 0;
		virtual void rangedAttack() const = 0;
		virtual void meleeAttack() const = 0;
};
