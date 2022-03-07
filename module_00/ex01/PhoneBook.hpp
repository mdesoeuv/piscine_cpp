/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:52:48 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/07 11:38:06 by mdesoeuv         ###   ########lyon.fr   */
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
	
	
	int	getnumber(void) const;
	void add_contact(void);
	void search_contact(void);
	void display(void);
	
	private:

	Contact tab[8];
	int	contact_nbr;
};


#endif
