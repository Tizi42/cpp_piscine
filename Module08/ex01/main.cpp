/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:25:45 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/18 17:26:26 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	Span sp = Span(6);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << std::endl;

	Span sp2(10000);
	std::vector<int> toCopy(2000, 1);
	std::vector<int> toCopy2(2000, 4);
	std::vector<int> toCopy3(2500, -4);
	std::vector<int> toCopy4(1000, -2147483648);
	std::vector<int> toCopy5(2500, 2147483647);

	sp2.addNumber(toCopy.begin(), toCopy.end());
	sp2.addNumber(toCopy2.begin(), toCopy2.end());
	sp2.addNumber(toCopy3.begin(), toCopy3.end());
	sp2.addNumber(toCopy4.begin(), toCopy4.end());
	sp2.addNumber(toCopy5.begin(), toCopy5.end());

	std::cout << "shortestSpan = " << sp2.shortestSpan() << std::endl;
	std::cout << "longestSpan = " << sp2.longestSpan() << std::endl;

	sp2 = sp;
	std::cout << "shortestSpan = " << sp2.shortestSpan() << std::endl;
	std::cout << "longestSpan = " << sp2.longestSpan() << std::endl;

	sp2.addNumber(999);
	std::cout << "shortestSpan = " << sp2.shortestSpan() << std::endl;
	std::cout << "longestSpan = " << sp2.longestSpan() << std::endl;

	std::cout << std::endl << "= Exceptions test = " << std::endl;
	try
	{
		sp2.addNumber(11);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Span emptySpan(5);
		emptySpan.shortestSpan();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Span oneElemSpan(5);
		oneElemSpan.addNumber(42);
		oneElemSpan.shortestSpan();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
