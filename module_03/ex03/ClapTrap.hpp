/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:04:33 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/25 11:09:15 by mdesoeuv         ###   ########lyon.fr   */
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
		
		ClapTrap(const std::string& name, unsigned HitPoints, unsigned EnergyPoints, unsigned AttackDammage);
		
	public :
	
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &source);
		virtual ~ClapTrap(void);
		
		ClapTrap	&operator=(const ClapTrap &source);

		virtual void	attack(const std::string& target);
		void 			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			displayAttributes(void) const;
		
};

#endif
