/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:20:25 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/08 16:34:39 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
	public:

	Contact(void);
	~Contact(void);	

	bool create(void);
	void print_contact(void) const;
	void print_field(std::string str) const;
	std::string	getfirstname(void) const;
	std::string	getlastname(void) const;
	std::string	getnickname(void) const;
	std::string	getphonenumber(void) const;
	std::string	getsecret(void) const;
	
	private:
	
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string	_phone_nbr;
	std::string	_secret;
};

#endif
