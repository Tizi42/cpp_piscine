/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:20:38 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/18 17:20:39 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main(void)
{
	std::vector<int> vec;

	vec.push_back(-3);
	vec.push_back(32);
	vec.push_back(1);

	try
	{
		std::cout << *easyfind(vec, -3) << std::endl;
		std::cout << *easyfind(vec, 1) << std::endl;
		std::cout << *easyfind(vec, 9) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
