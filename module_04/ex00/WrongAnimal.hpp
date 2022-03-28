/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:07:20 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/28 09:31:32 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>

class WrongAnimal
{
	protected:

		std::string	type;

	public:
	
		WrongAnimal(void);
		WrongAnimal(const std::string& type);
		WrongAnimal(const WrongAnimal& source);
		virtual ~WrongAnimal(void);
		WrongAnimal	&operator=(const WrongAnimal& source);

		const std::string&	getType(void) const;
		void				makeSound(void) const;

};

#endif
