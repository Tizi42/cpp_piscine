/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:24:07 by tyuan             #+#    #+#             */
/*   Updated: 2022/01/30 17:24:08 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int ac, char **av)
{
	Karen	karen;

	if (ac != 2)
	{
		std::cout << "Usage:./karenFilter complain_level" << std::endl;
		return (1);
	}
	switch (karen.getLevelInt(av[1]))
	{
		case 0:
			karen.complain("DEBUG");
			std::cout << std::endl;
		case 1:
			karen.complain("INFO");
			std::cout << std::endl;
		case 2:
			karen.complain("WARNING");
			std::cout << std::endl;
		case 3:
			karen.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
