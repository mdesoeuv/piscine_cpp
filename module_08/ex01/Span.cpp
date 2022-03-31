/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:16:12 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/31 12:00:52 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <algorithm>

Span::Span(void) : _maxSize(0)
{
	std::cout << "Span default constructor called" << std::endl;
}

Span::Span(const Span& source) : _maxSize(source._maxSize), tab(source.tab)
{
	std::cout << "Span copy constructor called" << std::endl;	
}

Span::Span(unsigned int N) : _maxSize(N)
{
	std::cout << "Span constructor called" << std::endl;
}

Span::~Span(void)
{
	std::cout << "Span destructor called" << std::endl;
}

Span&	Span::operator=(const Span& rhs)
{
	this->_maxSize = rhs._maxSize;
	this->tab = rhs.tab;

	return (*this);
}

int&	Span::operator[](size_t index)
{
	if (index >= this->tab.size())
		throw SpanIndexException();
	
	return (tab[index]);
}

void	Span::addNumber(unsigned int n)
{
	if (tab.size() == _maxSize)
		throw SpanFullException();
	tab.push_back(n);
}

int	Span::shortestSpan(void)
{
	if (tab.size() < 2)
		throw SpanRequirementsException();

	int					result;
	int					diff;
	std::vector<int>	copy(tab);

	result = abs(tab[0] - tab[1]);
	std::sort(copy.begin(), copy.end());
	for (size_t i = 1; i < copy.size(); ++i)
	{
		diff = abs(copy[i] - copy[i - 1]);
		if (diff < result)
			result = diff;	
	}
	return (result);
}

int	Span::longestSpan(void)
{
	int	min;
	int	max;

	if (tab.size() < 2)
		throw SpanRequirementsException();
	min = *(std::min_element(tab.begin(), tab.end()));
	max = *(std::max_element(tab.begin(), tab.end()));

	return (max - min);
}

void	Span::addRange(std::vector<int>::const_iterator startIter, std::vector<int>::const_iterator endIter) // conv en const ok mais pas l'inverse
{
	for (std::vector<int>::const_iterator iter = startIter; this->tab.size() <= this->_maxSize && iter != endIter; ++iter)
	{
		tab.push_back(*iter);
	}
}

const char * Span::SpanEmptyException::what(void) const throw()
{
	return ("Error: Span is empty");
}

const char * Span::SpanFullException::what(void) const throw()
{
	return ("Error: Span is full");
}

const char * Span::SpanRequirementsException::what(void) const throw()
{
	return ("Error: Span does not contains enough elements");
}

const char * Span::SpanIndexException::what(void) const throw()
{
	return ("Error: Span index");
}
