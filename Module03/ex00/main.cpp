/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:04:22 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/03 12:04:24 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	trap("Bob");

	trap.attack("Jim");
	trap.attack("Sam");
	trap.attack("Tim");
	trap.takeDamage(5);
	trap.beRepaired(1);
	trap.takeDamage(2);
	trap.takeDamage(2);
	trap.attack("Tom");
	trap.attack("Pam");
	trap.beRepaired(2);
	trap.takeDamage(3);
	trap.beRepaired(2);
	trap.beRepaired(2);
	trap.beRepaired(2);
	trap.beRepaired(2);
	trap.attack("Kim");
	trap.takeDamage(10);
}
