/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:26:13 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/23 11:52:48 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:

		Cure(void);
		Cure(std::string const &SourceType);
		Cure(const Cure& source);
		~Cure(void);
		
		Cure	&operator=(const Cure& source);
	
		Cure			*clone(void) const;
		void		use(ICharacter& target);
		
};

#endif
