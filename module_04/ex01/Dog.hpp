/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:15:36 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/21 10:44:32 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:

		Brain *dogBrain;

	public:

		Dog(void);
		Dog(const Dog& source);
		~Dog(void);
		Dog	&operator=(const Dog& source);
		void	makeSound(void) const;


};

#endif
