/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:46:31 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/22 09:50:07 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

class ICharacter
{
	public:

		virtual ~ICharacter(void);
		virtual std::string const	&getName(void) const = 0;
		virtual void				equip(AMateria* m) = 0;
		virtual void				unequip(int index) = 0;
		virtual void				use(int index, ICharacter& target) = 0;

};

#endif