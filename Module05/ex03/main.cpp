/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 09:51:31 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/11 09:51:33 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern  someRandomIntern;
    Form*	f1;
	Form*	f2;
	Form*	f3;
	Form*	f4;

	f1 = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << *f1 << std::endl;
	f2 = someRandomIntern.makeForm("presidential pardon", "murderer");
	std::cout << *f2 << std::endl;
	f3 = someRandomIntern.makeForm("shrubbery creation", "home");
	std::cout << *f3 << std::endl;
	f4 = someRandomIntern.makeForm("construction request", "School");

	delete f1;
	delete f2;
	delete f3;
	
	return 0;
}
