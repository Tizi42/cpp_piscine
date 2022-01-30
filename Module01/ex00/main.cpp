/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 17:54:02 by tyuan             #+#    #+#             */
/*   Updated: 2022/01/29 17:54:05 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int	main() {
	Zombie*	newZbPtr;

	newZbPtr = newZombie("foo");
	newZbPtr->announce();
	randomChump("bar");
	delete newZbPtr;
	return 0;
}
