/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 09:32:57 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/29 11:40:05 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include "Bureaucrat.hpp"

class Form
{

	private:

		const std::string	name;
		bool				signature;
		const int			signGrade;
		const int			execGrade;
		
		Form	&operator=(const Form& rhs);
		
	protected:	
		
		void			checkRequirements(Bureaucrat const &executor) const;
		virtual void	specialFunction(void) const = 0;
	
	public:

		Form(void);
		Form(const std::string& Name, int SignGrade, int ExecGrade);
		Form(const Form& source);
		virtual ~Form(void);
		
		int		getSignGrade(void) const;
		int		getExecGrade(void) const;
		bool	getSignStatus(void) const;
		const	std::string& getName(void) const;
		
		void	beSigned(const Bureaucrat& peon);

		class GradeTooHighException : public std::exception
		{
			public:

				const char *what(void) const throw ();

		};
		
		class GradeTooLowException : public std::exception
		{
			public:

				const char *what(void) const throw ();
			
		};
		
		class UnsignedFormException : public std::exception
		{
			public:

				const char *what(void) const throw ();
			
		};
		
		class ExecutionErrorException : public std::exception
		{
			public:

				const char *what(void) const throw ();
			
		};

		void			execute(Bureaucrat const &executor) const;
};

std::ostream& operator<<(std::ostream& os, const Form& rhs);

#endif
