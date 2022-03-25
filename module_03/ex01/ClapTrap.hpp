/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:04:33 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/25 17:17:37 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	protected :

		std::string		_Name;
		unsigned int	_HitPoints;
		unsigned int	_EnergyPoints;
		unsigned int	_AttackDamage;
		
		ClapTrap(std::string name, unsigned int hitPoints, unsigned int energy, unsigned int attackDamage);

	public :
	
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &source);
		virtual ~ClapTrap(void);
		
		ClapTrap	&operator=(const ClapTrap &source);

		virtual void	attack(const std::string& target);
		void 			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			displayAttributes(void);
		
};

#endif
