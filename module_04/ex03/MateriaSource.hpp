/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 15:08:55 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/23 15:47:52 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	public:

		MateriaSource(void);
		MateriaSource(const MateriaSource& source);
		~MateriaSource(void);

		MateriaSource	&operator=(const MateriaSource& source);

		void		learnMateria(AMateria *source);
		AMateria	*createMateria(std::string const & type);

	private:

		AMateria	*materiaTab[4];
		int			materiaNb;

};

#endif
