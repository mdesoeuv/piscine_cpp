/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:30:07 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/09 15:33:20 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	public :

	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);
	void	announce(void);
	void	setname(std::string name);

	private :

	std::string _name;

};

#endif
