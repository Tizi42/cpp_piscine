/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:07:45 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/15 18:07:46 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <random>
#include <ctime>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	std::srand((unsigned)std::time(NULL));
	int rn = std::rand() % 3;
	if (rn == 0)
		return (new A());
	else if (rn == 1)
		return (new B());
	return (new C());
}

void identify(Base * p)
{
	A * a = dynamic_cast<A *>(p);
	if (a)
	{
		std::cout << "The type of the object pointed to by p: A" << std::endl;
		return ;
	}
	B * b = dynamic_cast<B *>(p);
	if (b)
	{
		std::cout << "The type of the object pointed to by p: B" << std::endl;
		return ;
	}
	std::cout << "The type of the object pointed to by p: C" << std::endl;
}

void identify(Base & p)
{
	try
	{
		A & a = dynamic_cast<A &>(p);
		p = a;
		std::cout << "The type of the object pointed to by p: A" << std::endl;
	}
	catch (std::bad_cast &e)
	{
		try
		{
			B & b = dynamic_cast<B &>(p);
			p = b;
			std::cout << "The type of the object pointed to by p: B" << std::endl;
		}
		catch (std::bad_cast &e)
		{
			std::cout << "The type of the object pointed to by p: C" << std::endl;
		}
	}
}

int main(void)
{
	Base * a = generate();

	identify(a);
	identify(*a);

	delete a;
}
