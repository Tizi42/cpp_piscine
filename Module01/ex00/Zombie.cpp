/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 17:53:50 by tyuan             #+#    #+#             */
/*   Updated: 2022/01/29 17:53:58 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string n ) : _name(n) {

}

Zombie::~Zombie( void ) {

	std::cout << this->_name << " is destroyed" << std::endl;
}

void Zombie::announce( void ) {

	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
