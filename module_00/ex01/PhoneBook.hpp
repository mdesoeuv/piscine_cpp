/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:52:48 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/04 12:19:10 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class PhoneBook
{
	public:
	
	PhoneBook(void);
	~PhoneBook(void);
	
	
	int	getnumber(void) const;
	void add_contact(Contact new_contact);
	
	private:

	Contact *tab;
	int	contact_nbr;
};

#endif
