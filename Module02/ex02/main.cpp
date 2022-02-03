/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:49:50 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/01 12:49:51 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int	main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << std::setw(29) << "a : " << a << std::endl;
	std::cout << std::setw(29) << "++a : " << ++a << std::endl;
	std::cout << std::setw(29) << "a : " << a << std::endl;
	std::cout << std::setw(29) << "a++ : " << a++ << std::endl;
	std::cout << std::setw(29) << "a : " << a << std::endl;

	std::cout << "b(Fixed(5.05f) * Fixed(2)) : " << b << std::endl;

	std::cout << std::setw(29) << "max a b : " << Fixed::max( a, b ) << std::endl;
	std::cout << std::setw(29) << "min a b : " <<Fixed::min( a, b ) << std::endl;

	Fixed c(16);
	Fixed d(3.25f);
	Fixed e(c / d);

	std::cout << std::setw(29) << "c(16) : " << c << std::endl;
	std::cout << std::setw(29) << "d(3.25f) : " << d << std::endl;
	std::cout << std::setw(29) << "e(c / d) : " << e << std::endl;
	std::cout << std::setw(29) << "c + d : " << c + d << std::endl;
	std::cout << std::setw(29) << "c - d : " << c - d << std::endl;
	std::cout << std::setw(29) << "c == d : " << (c == d) << std::endl;
	std::cout << std::setw(29) << "c < c : " << (c < c) << std::endl;
	std::cout << std::setw(29) << "c <= c : " << (c <= c) << std::endl;
	std::cout << std::setw(29) << "d > d : " << (d > d) << std::endl;
	std::cout << std::setw(29) << "d >= d : " << (d >= d) << std::endl;

return 0; }
