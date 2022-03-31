/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:33:30 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/31 09:51:10 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"



int	main(void)
{
	int	a = 0;
	int	b = 42;

	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl << std::endl;

	std::cout << "swapping int :" << std::endl;
	swap(a, b);

	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl << std::endl;
	std::cout << "min = " << min(a, b) << std::endl;
	std::cout << "max = " << max(a, b) << std::endl << std::endl;

	float	c = 0.7;
	float	d = 42000000000000;

	std::cout << "c : " << c << std::endl;
	std::cout << "d : " << d << std::endl << std::endl;

	std::cout << "swapping float :" << std::endl;
	swap(c, d);

	std::cout << "c : " << c << std::endl;
	std::cout << "d : " << d << std::endl << std::endl;
	std::cout << "min = " << min(c, d) << std::endl;
	std::cout << "max = " << max(c, d) << std::endl << std::endl;


	std::string	s1 = "bonjour";
	std::string	s2 = "au revoir";

	std::cout << "s1 : " << s1 << std::endl;
	std::cout << "s2 : " << s2 << std::endl << std::endl;
	
	std::cout << "swapping strings :" << std::endl;
	swap(s1, s2);

	std::cout << "s1 : " << s1 << std::endl;
	std::cout << "s2 : " << s2 << std::endl << std::endl;
	std::cout << "min = " << min(s1, s2) << std::endl;
	std::cout << "max = " << max(s1, s2) << std::endl;

	

	return (0);
}


// class Awesome
// {
// public:
// Awesome(void) : _n(0) {}
// Awesome( int n ) : _n( n ) {}
// Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
// bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); } bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); } bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); } bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); } bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); } bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); } int get_n() const { return _n; }
// private:
// int _n;
// };
// std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }

// int main(void)
// {
// Awesome a(2), b(4);


// swap(a, b);
// std::cout << a << " " << b << std::endl; std::cout << max(a, b) << std::endl;

// std::cout << min(a, b) << std::endl; return (0);
// }
