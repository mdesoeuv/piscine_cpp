/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ExecutionErrorException.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 09:38:44 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/29 11:13:52 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ExecutionErrorException.hpp"

ExecutionErrorException::ExecutionErrorException(void) throw() : std::exception::exception()
{
}

ExecutionErrorException::ExecutionErrorException(std::string Message) throw() : std::exception::exception(), message(Message)
{
}

ExecutionErrorException::ExecutionErrorException(const ExecutionErrorException& source) throw() : std::exception::exception(source), message(source.message)
{
}

ExecutionErrorException::~ExecutionErrorException(void) throw()
{
}

ExecutionErrorException	&ExecutionErrorException::operator=(const ExecutionErrorException& rhs) throw()
{
	std::exception::operator=(rhs);
	message = rhs.message;
	
	return (*this);
}

const char *ExecutionErrorException::what(void) const throw ()
{
	return (message.c_str());
}
