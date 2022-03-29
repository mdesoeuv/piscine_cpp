/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ExecutionErrorException.hpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 09:35:40 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/29 11:14:20 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXECUTIONERROREXCEPTION_HPP
# define EXECUTIONERROREXCEPTION_HPP

# include <exception>
# include <string>

class ExecutionErrorException : public std::exception
{
	private:

		std::string	message;
	
	public:

		ExecutionErrorException(void) throw();
		ExecutionErrorException(std::string message) throw();
		ExecutionErrorException(const ExecutionErrorException& source) throw();
		~ExecutionErrorException(void) throw();
		
		ExecutionErrorException	&operator=(const ExecutionErrorException& rhs) throw();
		
		const char *what(void) const throw ();

};

#endif
