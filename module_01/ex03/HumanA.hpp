/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:05:11 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/09 18:08:46 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>

class	HumanA
{
	public :

		HumanA(std::string name, Weapon& weapon);
		~HumanA(void);
		void	attack(void) const;

	private :

		std::string	_name;
		Weapon&		_weapon;
};

#endif
