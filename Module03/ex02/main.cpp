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
#include "FragTrap.hpp"

int main(void)
{

	FragTrap	frag("Harry");
	frag.highFivesGuys();
	frag.attack("Lily");
	frag.takeDamage(3);

	FragTrap	anotherfrag(frag);
}
