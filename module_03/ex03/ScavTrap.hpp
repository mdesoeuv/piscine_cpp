/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 10:10:37 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/18 13:46:12 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	protected:
		
		static const unsigned ATTACK_DAMAGE;
		static const unsigned HITPOINTS;
		static const unsigned ENERGY;

	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& source);
		~ScavTrap(void);
		ScavTrap	&operator=(const ScavTrap& source);
		
		void	guardGate(void);
};

#endif