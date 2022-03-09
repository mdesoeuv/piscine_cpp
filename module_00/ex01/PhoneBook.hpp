/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:52:48 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/09 10:31:41 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	public:
	
	PhoneBook(void);
	~PhoneBook(void);

	void add_contact(void);
	void search_contact(void) const;
	void list_contacts(void) const;

	private:

	Contact tab[8];
	int	contact_nbr;
};


#endif
