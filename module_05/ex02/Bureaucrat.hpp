/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:09:08 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/29 11:39:54 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

class Form;

class Bureaucrat
{
	private:

		const std::string	name;
		int					grade;
		
		Bureaucrat	&operator=(const Bureaucrat& source);

	public:

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

		Bureaucrat(void);
		Bureaucrat(std::string Name, int Grade);
		Bureaucrat(const Bureaucrat& source);
		~Bureaucrat(void);
		

		const std::string	&getName(void) const;
		int					getGrade(void) const;
		void				upGrade(void);
		void				downGrade(void);

		void				signForm(Form& form);
		void				executeForm(Form const& form);

};

std::ostream	&operator<<(std::ostream &stream, const Bureaucrat &people);

#endif
