/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighException.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 09:35:40 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/29 09:58:34 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRADETOOHIGHEXCEPTION_HPP
# define GRADETOOHIGHEXCEPTION_HPP

# include <exception>
# include <string>

class GradeTooHighException : public std::exception
{
	private:

		std::string	message;
	
	public:

		GradeTooHighException(void) throw();
		GradeTooHighException(std::string message) throw();
		GradeTooHighException(const GradeTooHighException& source) throw();
		~GradeTooHighException(void) throw();
		
		GradeTooHighException	&operator=(const GradeTooHighException& rhs) throw();
		
		const char *what(void) const throw ();

};

#endif
