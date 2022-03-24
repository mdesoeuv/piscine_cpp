/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:59:28 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/24 16:41:44 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void)
{
	formTab[SHRUBBERY].name = "shrubbery creation";
	formTab[SHRUBBERY].function_ptr = &Intern::issueShrubbery;
	formTab[ROBOTOMY].name = "robotomy request";
	formTab[ROBOTOMY].function_ptr = &Intern::issueRobotomy;
	formTab[PARDON].name = "presidential pardon";
	formTab[PARDON].function_ptr = &Intern::issuePardon;
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern& source)
{
	formTab[SHRUBBERY].name = source.formTab[SHRUBBERY].name;
	formTab[SHRUBBERY].function_ptr = source.formTab[SHRUBBERY].function_ptr;
	formTab[ROBOTOMY].name = source.formTab[ROBOTOMY].name;
	formTab[ROBOTOMY].function_ptr = source.formTab[ROBOTOMY].function_ptr;
	formTab[PARDON].name = source.formTab[PARDON].name;
	formTab[PARDON].function_ptr = source.formTab[PARDON].function_ptr;
	std::cout << "Intern copy constructor called" << std::endl;
}

Intern::~Intern(void)
{
	std::cout << "Intern destructor called" << std::endl;
}

Form	*Intern::makeForm(const std::string& formType, const std::string& target)
{
	for (int i = 0; i < 4; ++i)
	{
		if (formTab[i].name == formType)
			return ((this->*formTab[i].function_ptr)(target));
	}
	// throw FormCreationErrorException();
	return (NULL);
}

Form	*Intern::issueShrubbery(const std::string& target)
{
	return (new ShrubberyCreationForm(formTab[SHRUBBERY].name, target));
}

Form	*Intern::issueRobotomy(const std::string& target)
{
	return (new RobotomyRequestForm(formTab[ROBOTOMY].name, target));
}

Form	*Intern::issuePardon(const std::string& target)
{
	return (new PresidentialPardonForm(formTab[PARDON].name, target));
}

const char *Intern::FormCreationErrorException::what(void) const throw ()
{
	return ("Intern::FormCreationErrorException");
}
