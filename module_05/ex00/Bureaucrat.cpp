/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:15:34 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/24 09:31:14 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("peon"), grade(150)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string Name, int Grade) : name(Name)
{
	std::cout << "Bureaucrat constructor called" << std::endl;
	if (Grade < 1)
		throw GradeTooHighException();
	else if (Grade > 150)
		throw GradeTooLowException();
	else
		grade = Grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& source) : name(source.name), grade(source.grade)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat& source)
{
	grade = source.grade;

	return (*this);
}

std::ostream	&operator<<(std::ostream &stream, const Bureaucrat &people)
{
	stream << people.getName() << ", bureaucrat grade " << people.getGrade() << std::endl;

	return (stream);
}

const std::string	&Bureaucrat::getName(void) const
{
	return (name);
}

int	Bureaucrat::getGrade(void) const
{
	return (grade);
}

void	Bureaucrat::upGrade(void)
{
	if (grade == 1)
		throw GradeTooHighException();
	else
	{
		grade--;
		std::cout << this->getName() << " leveled up and is now grade " << grade << std::endl;
	}
}

void	Bureaucrat::downGrade(void)
{
	if (grade == 150)
		throw GradeTooLowException();
	else
	{
		grade++;
		std::cout << this->getName() << " leveled down and is now grade " << grade << std::endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw ()
{
	return ("Bureaucrat::GradeTooHighException");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw ()
{
	return ("Bureaucrat::GradeTooLowException");
}