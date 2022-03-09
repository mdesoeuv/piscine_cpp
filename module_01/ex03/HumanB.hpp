/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:27:51 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/09 18:15:29 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>

class	HumanB
{
	public :

		HumanB(std::string name);
		HumanB(std::string name, Weapon* weapon);
		~HumanB(void);
		void	attack(void) const;
		void	setWeapon(Weapon& weapon);

	private :

		std::string	_name;
		Weapon*		_weapon;
};

#endif
