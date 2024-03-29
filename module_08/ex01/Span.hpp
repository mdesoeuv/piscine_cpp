/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:10:26 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/04/01 15:18:34 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>

class Span
{
	public:

		Span(void);
		Span(const Span& source);
		Span(unsigned int N);
		~Span(void);
		Span&	operator=(const Span& rhs);
		int&	operator[](size_t index);

		void			addNumber(int n);
		int				shortestSpan(void);
		int				longestSpan(void);
		void			addRange(std::vector<int>::const_iterator startIter, std::vector<int>::const_iterator endIter);
		size_t			size(void);

		class	SpanFullException : public std::exception
		{
			public:

				const char *what(void) const throw();
		
		};
		
		class	SpanEmptyException : public std::exception
		{
			public:

				const char *what(void) const throw();
		
		};
		
		class	SpanRequirementsException : public std::exception
		{
			public:

				const char *what(void) const throw();
		
		};
		
		class	SpanIndexException : public std::exception
		{
			public:

				const char *what(void) const throw();
		
		};
		

	private:

		unsigned int		_maxSize;
		std::vector<int>	tab;
	
};

#endif
