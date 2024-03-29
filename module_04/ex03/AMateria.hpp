/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:23:27 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/28 15:29:35 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>

# include "ICharacter.hpp"

class	ICharacter;

class AMateria
{
	protected:

		std::string	type;
		AMateria	&operator=(const AMateria& source);

	public:

		AMateria(void);
		AMateria(std::string const &SourceType);
		AMateria(const AMateria& source);
		virtual	~AMateria(void);

		std::string const &getType(void) const;
		
		virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter& target);
		
};


#endif
