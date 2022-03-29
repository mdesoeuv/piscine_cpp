/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:09:08 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/29 10:03:35 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include "GradeTooHighException.hpp"
# include "GradeTooLowException.hpp"

class Bureaucrat
{
	private:

		const std::string	name;
		int					grade;
		
		Bureaucrat	&operator=(const Bureaucrat& source);

	public:


		Bureaucrat(void);
		Bureaucrat(std::string Name, int Grade);
		Bureaucrat(const Bureaucrat& source);
		~Bureaucrat(void);

		GradeTooHighException gradeTooLow;
		
		GradeTooLowException gradeTooHigh;

		const std::string	&getName(void) const;
		int					getGrade(void) const;
		void				upGrade(void);
		void				downGrade(void);

};

std::ostream	&operator<<(std::ostream &stream, const Bureaucrat &people);

#endif
