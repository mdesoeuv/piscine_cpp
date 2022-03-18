/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:22:10 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/18 14:45:49 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private :

		std::string		_Name;
		// FragTrap::_HitPoints;
		// ScavTrap::_EnergyPoints;
		// FragTrap::_AttackDamage;
		// unsigned int	_HitPoints;
		// unsigned int	_EnergyPoints;
		// unsigned int	_AttackDamage;


	public :
	
		DiamondTrap(void);
		DiamondTrap(const std::string& name);
		DiamondTrap(const DiamondTrap& source);
		~DiamondTrap(void);

		DiamondTrap& operator=(const DiamondTrap& source);
		
		void	whoAmI(void);
		using ScavTrap::attack;
	
};

#endif
