/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:49:18 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/24 16:32:29 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# define SHRUBBERY 0
# define ROBOTOMY 1
# define PARDON 2

# include <string>
# include "Form.hpp"

class Intern;

struct FormRecipe
{
	std::string	name;
	Form	*(Intern::* function_ptr)(const std::string& target);
};

class Intern
{
	private:

		FormRecipe	formTab[3];
		Form		*issueShrubbery(const std::string& target);
		Form		*issueRobotomy(const std::string& target);
		Form		*issuePardon(const std::string& target);
		Intern	&operator=(const Intern& source);

	public:

		Intern(void);
		Intern(const Intern& source);
		~Intern(void);
		Form	*makeForm(const std::string& formType, const std::string& target);
	
		struct FormCreationErrorException : public std::exception
		{
			const char *what(void) const throw ();
		};
};

#endif
