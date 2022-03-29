/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowException.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 09:38:44 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/29 10:01:56 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "GradeTooLowException.hpp"

GradeTooLowException::GradeTooLowException(void) throw() : std::exception::exception()
{
}

GradeTooLowException::GradeTooLowException(std::string Message) throw() : std::exception::exception(), message(Message)
{
}

GradeTooLowException::GradeTooLowException(const GradeTooLowException& source) throw() : std::exception::exception(source), message(source.message)
{
}

GradeTooLowException::~GradeTooLowException(void) throw()
{
}

GradeTooLowException	&GradeTooLowException::operator=(const GradeTooLowException& rhs) throw()
{
	std::exception::operator=(rhs);
	message = rhs.message;
	
	return (*this);
}

const char *GradeTooLowException::what(void) const throw ()
{
	return (message.c_str());
}
