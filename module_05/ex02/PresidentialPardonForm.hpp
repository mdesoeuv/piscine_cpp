/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:02:15 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/24 15:28:45 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:

		PresidentialPardonForm(const PresidentialPardonForm& source);
		PresidentialPardonForm(const std::string& Name, const std::string& Target);
		~PresidentialPardonForm(void);

		void	execute(Bureaucrat const &executor) const;

	protected:

		
	private:

		const std::string	target;
		
		PresidentialPardonForm(void);
		PresidentialPardonForm	&operator=(const PresidentialPardonForm& rhs);
		void	specialFunction(void) const;
};

#endif
