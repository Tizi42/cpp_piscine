/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 21:30:15 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/17 21:30:16 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main(void)
{
	char * a1 = new char();
	std::cout << "-> char *a1 = new char();" << std::endl;
	std::cout << "*a1 = '" << *a1 << "'" << std::endl;
	Array<char> a2(1);
	std::cout << "-> Array<char> a2(1);" << std::endl;
	std::cout << "a2[0] = '" << a2[0] << "'" << std::endl;
	std::cout << std::endl;

	Array<int> b(3);
	std::cout << "-> Array<int> b(3);" << std::endl;
	std::cout << "b.size() = " << b.size() << std::endl;
	std::cout << std::endl;

	b[0] = 8;
	b[1] = 42;
	b[2] = -999;
	Array<int> c = b;
	std::cout << "-> b[0] = 8; b[1] = 42; b[2] = -999;" << std::endl;
	std::cout << "-> Array<int> c = b;" << std::endl;
	std::cout << "b[0] = " <<b[0] << ", b[1] = " << b[1] << ", b[2] = " << b[2] << std::endl;
	std::cout << "c[0] = " <<c[0] << ", b[1] = " << c[1] << ", b[2] = " << c[2] << std::endl;
	std::cout << std::endl;

	c[1] = 5;
	std::cout << "-> c[1] = 5;" << std::endl;
	std::cout << "b[0] = " <<b[0] << ", b[1] = " << b[1] << ", b[2] = " << b[2] << std::endl;
	std::cout << "c[0] = " <<c[0] << ", c[1] = " << c[1] << ", c[2] = " << c[2] << std::endl;

	return (0);
}
