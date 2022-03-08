/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:20:25 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/08 15:11:39 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

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
	
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string	phone_nbr;
	std::string	secret;
};

#endif
