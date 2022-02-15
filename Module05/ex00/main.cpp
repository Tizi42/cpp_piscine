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

int main(void)
{
	try
	{
		Bureaucrat a;
		//a.decreGrade();
		a.increGrade();

		Bureaucrat b("Jim", 3);
		std::cout << b << std::endl;
		b.increGrade();
		b.increGrade();
		b.increGrade();

		Bureaucrat c("Tom", 0);
		Bureaucrat d("Tom", 178);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
