/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 11:15:04 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/18 14:41:27 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	protected:

		static const unsigned ATTACK_DAMAGE;
		static const unsigned HITPOINTS;
		static const unsigned ENERGY;

	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap& source);
		~FragTrap(void);
		FragTrap	&operator=(const FragTrap& source);
		
		void	highFivesGuys(void);
};

#endif
