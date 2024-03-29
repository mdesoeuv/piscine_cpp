/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:20:25 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/11 14:12:25 by mdesoeuv         ###   ########lyon.fr   */
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
	const std::string&	getfirstname(void) const;
	const std::string&	getlastname(void) const;
	const std::string&	getnickname(void) const;
	const std::string&	getphonenumber(void) const;
	const std::string&	getsecret(void) const;
	
	private:
	
	bool initialize(std::string& attribute);
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string	_phone_nbr;
	std::string	_secret;
};

#endif
