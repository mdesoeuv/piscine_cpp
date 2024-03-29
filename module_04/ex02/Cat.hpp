/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:35:00 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/21 10:38:15 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:

		Brain *catBrain;

	public:

		Cat(void);
		Cat(const Cat& source);
		~Cat(void);
		Cat	&operator=(const Cat& source);
		void	makeSound(void) const;
		void	displayFirstTenIdeas(void) const;
		void	setIdea(const std::string& newIdea, size_t index);
};

#endif
