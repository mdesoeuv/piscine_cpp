/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:55:18 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/04/01 09:24:10 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	typedef std::stack<T, Container> Base;
	public:
		typedef typename Container::iterator iterator;

		MutantStack(void) : Base()
		{
			std::cout << "MutantStack default constructor called" << std::endl;
		}

		MutantStack(const MutantStack& source) : Base(source)
		{
			std::cout << "MutantStack copy constructor called" << std::endl;
		}

		~MutantStack(void)
		{
			std::cout << "MutantStack destructor called" << std::endl;
		}
		
		MutantStack&	operator=(const MutantStack& rhs)
		{
			Base::operator=(rhs);
	
			return (*this);
		}

		iterator begin(void)
		{ 
			return Base::c.begin();
		}
		
		iterator end(void)
		{
			return Base::c.end();
		}
};

#endif
