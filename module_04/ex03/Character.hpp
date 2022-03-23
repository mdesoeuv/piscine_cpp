/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:52:20 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/23 14:10:29 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"
# include <string>

class Character : public ICharacter
{
	public:
	
		Character(void);
		Character(std::string Name);
		Character(const Character& source);
		~Character(void);
		Character	&operator=(const Character& source);
		
		std::string	const	&getName(void) const;
		void				equip(AMateria* m);
		void				unequip(int index);
		void				use(int index, ICharacter& target);

	private:

		std::string	name;
		AMateria	*inventory[4];
		int			equippedMateriaNb;
		int			slot[4];
		
		
};

#endif
