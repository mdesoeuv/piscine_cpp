/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:09:08 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/23 16:52:50 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

class Bureaucrat
{
	private:

		const std::string	name;
		int					grade;

		class GradeTooHighException : public std::exception
		{
			public:
   			
			   const char * what () const throw ()
				{
					return "Bureaucrat::GradeTooHighException";
				}
		};
		
		class GradeTooLowException : public std::exception
		{
			public:
			
				const char * what () const throw ()
				{
					return "Bureaucrat::GradeTooLowException";
				}
		};
		
		Bureaucrat	&operator=(const Bureaucrat& source);

	public:

		Bureaucrat(void);
		Bureaucrat(std::string Name, int Grade);
		Bureaucrat(const Bureaucrat& source);
		~Bureaucrat(void);
		friend std::ostream	&operator<<(std::ostream &stream, const Bureaucrat &people);

		const std::string	&getName(void) const;
		int					getGrade(void) const;
		void	upGrade(void);
		void	downGrade(void);

};

#endif
