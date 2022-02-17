/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:56:27 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/16 15:56:28 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

int	main(int ac, char **av)
{
	if (ac != 2 || detectType(av[1]) == -1)
	{
		std::cout << "Usage: ./conversion value_of_a_type" << std::endl;
		std::cout << std::endl;
		std::cout << "| type   |     examples     |" << std::endl;
		std::cout << "|---------------------------|" << std::endl;
		std::cout << "| char   | '0'   'a'        |" << std::endl;
		std::cout << "| int    |  0     42    -42 |" << std::endl;
		std::cout << "| float  | 0.0f  -4.2f  4.2f|" << std::endl;
		std::cout << "| double | 0.0   -4.2   4.2 |" << std::endl;
		return (1);
	}
	return (0);
}
