/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 21:29:41 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/17 21:29:42 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	char	tab[3] = {'9', 'b', 'c'};
	int		tab2[5] = {2, 3, 5, 7, -22};

	iter<char>(tab, 3, printArray<char>);
	std::cout << std::endl;
	iter<int>(tab2, 5, printArray<int>);
}
