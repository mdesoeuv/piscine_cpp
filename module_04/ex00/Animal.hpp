/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:07:20 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/18 16:52:06 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal
{
	protected:

		std::string	type;

	public:
	
		Animal(void);
		Animal(const Animal& source);
		~Animal(void);
		Animal	&operator=(const Animal& source);

		void			getType(void);
		virtual void	makeSound(void);

};

#endif
