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

int main(void)
{
	Bureaucrat	jim("Jim", 24);
	Bureaucrat	bob("Bob", 3);
	Form		*f1 = new ShrubberyCreationForm("garden");
	Form		*f2 = new RobotomyRequestForm("Bot_007");
	Form		*f3 = new PresidentialPardonForm("Guy");

	try
	{
		std::cout << jim << std::endl;
		jim.signForm(*f1);
		jim.executeForm(*f1);
		jim.signForm(*f2);
		jim.executeForm(*f2);
		jim.signForm(*f3);
		jim.executeForm(*f3);
		std::cout << bob << std::endl;
		bob.executeForm(*f3);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	delete f1;
	delete f2;
	delete f3;

	return 0;
}
