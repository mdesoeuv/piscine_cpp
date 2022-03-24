/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 09:32:57 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/24 11:32:27 by mdesoeuv         ###   ########lyon.fr   */
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
		void	checkRequirements(Bureaucrat const &executor) const;
	
	public:

		Form(void);
		Form(const std::string& Name, int SignGrade, int ExecGrade);
		Form(const Form& source);
		~Form(void);
		friend std::ostream& operator<<(std::ostream& os, const Form& rhs);
		
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

		virtual void	execute(Bureaucrat const &executor) const = 0;
};

#endif
