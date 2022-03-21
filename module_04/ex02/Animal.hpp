/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:07:20 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/21 17:00:12 by mdesoeuv         ###   ########lyon.fr   */
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
		Animal(const std::string& type);
		Animal(const Animal& source);
		virtual ~Animal(void);
		Animal	&operator=(const Animal& source);
		const std::string&	getType(void) const;
		virtual void	makeSound(void) const;
		virtual void	displayFirstTenIdeas(void) const = 0; // pure virtual method	

};

#endif
