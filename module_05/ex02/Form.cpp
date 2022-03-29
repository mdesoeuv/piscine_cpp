/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 09:42:43 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/29 11:26:12 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) :	name("unknown Form"), signature(false),
					signGrade(150),
					execGrade(150),
					gradeTooHigh("Form::GradeTooHighException"),
					gradeTooLow("Form::GradeTooLowException"),
					formNotSigned("Form::UnsignedFormException"),
					executionError("Form::ExecutionErrorException")
{
	std::cout << "Form default constructor called" << std::endl;
}

		
Form::Form(const std::string& Name, int SignGrade, int ExecGrade) :	name(Name),
																	signature(false),
																	signGrade(SignGrade),
																	execGrade(ExecGrade),
																	gradeTooHigh("Form::GradeTooHighException"),
																	gradeTooLow("Form::GradeTooLowException"),
																	formNotSigned("Form::UnsignedFormException"),
																	executionError("Form::ExecutionErrorException")
{
	std::cout << "Form constructor called" << std::endl;
	if (SignGrade < 1 || ExecGrade < 1)
		throw gradeTooHigh;
	else if (SignGrade > 150 || ExecGrade > 150)
		throw gradeTooLow;
}

Form::Form(const Form& source) :	name(source.name),
									signature(source.signature),
									signGrade(source.signGrade),
									execGrade(source.execGrade),
									gradeTooHigh(source.gradeTooHigh),
									gradeTooLow(source.gradeTooLow),
									formNotSigned(source.formNotSigned),
									executionError(source.executionError)
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
		throw gradeTooLow;
	else
		this->signature = true;
}

void	Form::checkRequirements(Bureaucrat const &executor) const
{
	if (signature == false)
		throw formNotSigned;
	if (executor.getGrade() > getExecGrade())
		throw gradeTooLow;
}

void	Form::execute(Bureaucrat const &executor) const
{
	try
	{
		checkRequirements(executor);
	}
	catch(ExecutionErrorException& e)
	{
		std::cerr << e.what() << std::endl;
		throw executionError;
		
	}
	catch(GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
		throw executionError;
	}
	specialFunction();
}
