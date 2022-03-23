/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:26:13 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/23 14:30:53 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:

		Ice(void);
		Ice(const Ice& source);
		~Ice(void);
		
		Ice	&operator=(const Ice& source);
	
		Ice			*clone(void) const;
		void		use(ICharacter& target);
		
};

#endif
