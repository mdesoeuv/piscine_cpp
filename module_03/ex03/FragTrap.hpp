/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 11:15:04 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/17 13:12:41 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap& source);
		~FragTrap(void);
		FragTrap	&operator=(const FragTrap& source);
		
		void	highFivesGuys(void);
};

#endif
