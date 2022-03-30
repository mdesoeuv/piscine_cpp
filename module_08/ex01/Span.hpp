/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:10:26 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/30 12:24:29 by mdesoeuv         ###   ########lyon.fr   */
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

		void			addNumber(unsigned int n);
		int				shortestSpan(void);
		int				longestSpan(void);

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
		

	private:

		unsigned int		_maxSize;
		std::vector<int>	tab;
	
};

#endif
