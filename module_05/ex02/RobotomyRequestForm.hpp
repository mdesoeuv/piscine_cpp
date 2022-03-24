/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:02:15 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/24 15:03:20 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:

		RobotomyRequestForm(const RobotomyRequestForm& source);
		RobotomyRequestForm(const std::string& Name, const std::string& Target);
		~RobotomyRequestForm(void);

		void	execute(Bureaucrat const &executor) const;

	protected:

		
	private:

		const std::string	target;
		
		RobotomyRequestForm(void);
		RobotomyRequestForm	&operator=(const RobotomyRequestForm& rhs);
		void	specialFunction(void) const;
};

#endif
