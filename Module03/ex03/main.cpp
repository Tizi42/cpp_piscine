/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 10:33:18 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/04 10:33:40 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

int main(void)
{

	DiamondTrap	diamond("Harry");

	std::cout << std::endl;
	diamond.highFivesGuys();
	std::cout << std::endl;
	diamond.attack("Lily");
	diamond.takeDamage(23);
	diamond.beRepaired(5);
	diamond.whoAmI();
	std::cout << std::endl;

//	DiamondTrap	anotherdiamond(diamond);
}
