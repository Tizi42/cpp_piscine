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

int main(void)
{
	Bureaucrat	jim("Jim", 24);
	Form		f1("form 1", 42, 120);
	Form		f2("form 2", 12, 120);

	std::cout << jim << std::endl;
	std::cout << std::endl;
	std::cout << f1 << std::endl;
	std::cout << f2 << std::endl;

	try
	{
		jim.signForm(f1);
		jim.signForm(f2);
		Form	f3("form 3", 1, 200);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << f1 << std::endl;
	std::cout << f2 << std::endl;
	return 0;
}
