/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:04:33 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/16 15:52:53 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifned CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

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

#endif
