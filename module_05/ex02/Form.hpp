/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 09:32:57 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/29 11:24:15 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include "Bureaucrat.hpp"
# include "GradeTooHighException.hpp"
# include "GradeTooLowException.hpp"
# include "ExecutionErrorException.hpp"

class Bureaucrat;

class Form
{
	protected:	
		
		void			checkRequirements(Bureaucrat const &executor) const;
		virtual void	specialFunction(void) const = 0;
	

	private:

		const std::string	name;
		bool				signature;
		const int			signGrade;
		const int			execGrade;
		
		Form	&operator=(const Form& rhs);
	
	public:

		Form(void);
		Form(const std::string& Name, int SignGrade, int ExecGrade);
		Form(const Form& source);
		~Form(void);
		
		int		getSignGrade(void) const;
		int		getExecGrade(void) const;
		bool	getSignStatus(void) const;
		const	std::string& getName(void) const;
		
		void	beSigned(const Bureaucrat& peon);
		void	execute(Bureaucrat const &executor) const;

		GradeTooHighException gradeTooHigh;
		GradeTooLowException gradeTooLow;
		ExecutionErrorException	formNotSigned;
		ExecutionErrorException	executionError;

};

std::ostream& operator<<(std::ostream& os, const Form& rhs);

#endif
