/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:02:15 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/24 15:03:08 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:

		ShrubberyCreationForm(const ShrubberyCreationForm& source);
		ShrubberyCreationForm(const std::string& Name, const std::string& Target);
		~ShrubberyCreationForm(void);

	private:

		const std::string	target;
		
		ShrubberyCreationForm(void);
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm& rhs);
		
		void	specialFunction(void) const;
};

#endif
