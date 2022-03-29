/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighException.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 09:38:44 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/29 10:01:47 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "GradeTooHighException.hpp"

GradeTooHighException::GradeTooHighException(void) throw() : std::exception::exception()
{
}

GradeTooHighException::GradeTooHighException(std::string Message) throw() : std::exception::exception(), message(Message)
{
}

GradeTooHighException::GradeTooHighException(const GradeTooHighException& source) throw() : std::exception::exception(source), message(source.message)
{
}

GradeTooHighException::~GradeTooHighException(void) throw()
{
}

GradeTooHighException	&GradeTooHighException::operator=(const GradeTooHighException& rhs) throw()
{
	std::exception::operator=(rhs);
	message = rhs.message;
	
	return (*this);
}

const char *GradeTooHighException::what(void) const throw ()
{
	return (message.c_str());
}
