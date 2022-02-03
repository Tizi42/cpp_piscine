/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:09:56 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/01 15:09:57 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"
#include "Fixed.hpp"

int main(void)
{
	Point	a(1.f, 1.f);
	Point	b(5.f, 5.f);
	Point	c(1.f, 5.f);
	Point	p(3.f, 4.f);

	std::cout << "Inside of triangle: " << std::endl;
	std::cout << bsp(a, b, c, p) << std::endl;
	std::cout << bsp(a, c, b, p) << std::endl;
	std::cout << bsp(c, b, a, Point(1.7f, 3.4f)) << std::endl;

	std::cout << "Outside of triangle: " << std::endl;
	std::cout << bsp(a, b, c, Point(5.f, 1.f)) << std::endl;
	std::cout << bsp(c, b, a, Point(-2.f, -9.f)) << std::endl;
	std::cout << bsp(c, b, a, Point(-3.7f, 12.f)) << std::endl;

	std::cout << "On the edge or vertex of triangle: " << std::endl;
	std::cout << bsp(a, b, c, c) << std::endl;
	std::cout << bsp(a, b, c, a) << std::endl;
	std::cout << bsp(a, b, c, Point(1.f, 3.f)) << std::endl;

	std::cout << "invalid triangles: " << std::endl;
	std::cout << bsp(a, a, c, p) << std::endl;
	std::cout << bsp(b, b, b, b) << std::endl;
	std::cout << bsp(b, b, b, p) << std::endl;
	std::cout << bsp(a, Point(3.f, 3.f), b, p) << std::endl;

	return (0);
}
