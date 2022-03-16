/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:04:33 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/16 15:25:31 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap
{
	private :

		std::string		_Name;
		unsigned int	_HitPoints;
		unsigned int	_EnergyPoints;
		unsigned int	_AttackDamage;
		
	public :
	
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &source);
		~ClapTrap(void);
		
		ClapTrap	&operator=(const ClapTrap &source);

		void	attack(const std::string& target);
		void 	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		
};
