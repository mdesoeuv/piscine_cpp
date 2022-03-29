/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 09:42:43 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/29 11:58:54 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : name("unknown Form"), signature(false), signGrade(150), execGrade(150)
{
	std::cout << "Form default constructor called" << std::endl;
}

		
Form::Form(const std::string& Name, int SignGrade, int ExecGrade) : name(Name), signature(false), signGrade(SignGrade), execGrade(ExecGrade)
{
	std::cout << "Form constructor called" << std::endl;
	if (SignGrade < 1 || ExecGrade < 1)
		throw Form::GradeTooHighException();
	else if (SignGrade > 150 || ExecGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& source) :	name(source.name),
									signature(source.signature),
									signGrade(source.signGrade),
									execGrade(source.execGrade)
{
	std::cout << "Form copy constructor called" << std::endl;
}

Form::~Form(void)
{
	std::cout << "Form destructor called" << std::endl;
}

std::ostream	&operator<<(std::ostream& os, const Form& rhs)
{
	os << "Form : " << rhs.getName() << ", signature : ";
	if (rhs.getSignStatus() == true)
		os << "signed";
	else
		os << "unsigned";
	os << ", grade required to sign : " << rhs.getSignGrade() << ", grate required to execute : " << rhs.getExecGrade() << std::endl;
	
	return(os);
}

int	Form::getSignGrade(void) const
{
	return (this->signGrade);
}

int	Form::getExecGrade(void) const
{
	return (this->execGrade);
}

bool		Form::getSignStatus(void) const
{
	return (signature);
}

const std::string& Form::getName(void) const
{
	return (name);
}

void	Form::beSigned(const Bureaucrat& peon)
{
	if (peon.getGrade() > this->signGrade)
		throw Form::GradeTooLowException();
	else
		this->signature = true;
}

const char *Form::GradeTooLowException::what(void) const throw()
{
	return ("Form::GradeTooLowException");
}

const char *Form::GradeTooHighException::what(void) const throw()
{
	return ("Form::GradeTooHighException");
}

const char *Form::UnsignedFormException::what(void) const throw()
{
	return ("Form::UnsignedFormException");
}

const char *Form::ExecutionErrorException::what(void) const throw()
{
	return ("Form::ExecutionErrorException");
}

void	Form::checkRequirements(Bureaucrat const &executor) const
{
	if (signature == false)
		throw Form::UnsignedFormException();
	if (executor.getGrade() > getExecGrade())
		throw Form::GradeTooLowException();
}

void	Form::execute(Bureaucrat const &executor) const
{

	checkRequirements(executor);
	specialFunction();
}
