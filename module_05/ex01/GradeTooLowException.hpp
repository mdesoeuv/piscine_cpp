/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowException.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 09:35:40 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/29 10:00:35 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRADETOOLOWEXCEPTION_HPP
# define GRADETOOLOWEXCEPTION_HPP

# include <exception>
# include <string>

class GradeTooLowException : public std::exception
{
	private:

		std::string	message;
	
	public:

		GradeTooLowException(void) throw();
		GradeTooLowException(std::string message) throw();
		GradeTooLowException(const GradeTooLowException& source) throw();
		~GradeTooLowException(void) throw();
		
		GradeTooLowException	&operator=(const GradeTooLowException& rhs) throw();
		
		const char *what(void) const throw ();

};

#endif
