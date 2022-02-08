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
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap	scav("Sally");
	scav.guardGate();
	scav.attack("Tom");
	scav.takeDamage(42);
	scav.beRepaired(10);
}
