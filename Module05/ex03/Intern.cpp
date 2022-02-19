/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:14:57 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/15 16:14:59 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {

	//std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(Intern const & rhs) {

	//std::cout << "Intern copy constructor called" << std::endl;
	*this = rhs;
}

Intern::~Intern(void) {

	//std::cout << "Intern destructor called" << std::endl;
}

Intern & Intern::operator=(Intern const & rhs) {

	std::cout << "Intern copy assignment operator called but nothing happened" << std::endl;
	(void)rhs;
	return (*this);
}

int		Intern::formType(std::string fname)
{
	int			i;
	std::string	formType[3] = {"shrubbery creation"
							, "robotomy request"
							, "presidential pardon"};

	for (i = 0; i < 3; i++)
	{
		if (fname.compare(formType[i]) == 0)
			return (i);
	}
	return (i);
}

Form *	Intern::makeForm(std::string fname, std::string target) {

	Form * ret;
	ret = NULL;
	switch(formType(fname)) {

		case SHRUBBERY:
			ret = new ShrubberyCreationForm(fname, target);
			break;
		case ROBOTOMY:
			ret = new RobotomyRequestForm(fname, target);
			break;
		case PRESIDENTIAL:
			ret = new PresidentialPardonForm(fname, target);
			break;
		default:
			std::cout << "Form name incorrect!" << std::endl;
	}
	if (ret)
		std::cout << "Intern creates " << fname << " form" << std::endl;
	return (ret);
}
