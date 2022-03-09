/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:54:25 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/09 18:03:27 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
	public :
		
		Weapon(void);
		Weapon(std::string type);
		~Weapon(void);
		
		const std::string&	getType(void) const;		
		void				setType(std::string newType);

	private :

		std::string	_type;
};

#endif