/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 18:10:59 by tyuan             #+#    #+#             */
/*   Updated: 2022/01/29 18:11:00 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name ) {

	Zombie*	zbs = new Zombie[N];

	for (int i = 0; i < N; i++)
		zbs[i].setName(name);
	return (zbs);
 }
