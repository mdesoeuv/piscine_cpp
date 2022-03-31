/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:26:44 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/31 10:03:59 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <vector>

template <typename T>
void	displayElement(T t)
{
	std::cout << t << std::endl;
}

// int	main(void)
// {
// 	std::vector<int> TabInt;
// 	std::vector<float> TabFloat;
// 	std::vector<std::string>	TabStr;

// 	TabInt.push_back(42);
// 	TabInt.push_back(85);
// 	TabInt.push_back(2022);

// 	iter(TabInt, TabInt.size(), displayElement<int>);
// 	std::cout << std::endl;

// 	TabFloat.push_back(42.46);
// 	TabFloat.push_back(850000000000000000);
// 	TabFloat.push_back(2022.1);

// 	::iter(TabFloat, TabFloat.size(), displayElement<float>);
// 	std::cout << std::endl;
	
// 	TabStr.push_back("bonjour");
// 	TabStr.push_back("au revoir");
	
// 	iter(TabStr, TabStr.size(), displayElement<std::string>);

// 	return (0);
// }

class Awesome
{
public:
Awesome( void ) : _n( 42 ) { return; } int get( void ) const { return this->_n; } private:
int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; } 

int main() {
int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense? 
Awesome tab2[5];

iter( tab, 5, print ); iter( tab2, 5, print );

return 0;
}
