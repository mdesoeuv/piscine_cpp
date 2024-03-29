/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:35:00 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/18 18:29:23 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	private:

	public:

		Cat(void);
		Cat(const Cat& source);
		~Cat(void);
		Cat	&operator=(const Cat& source);
		void	makeSound(void) const;

};

#endif
