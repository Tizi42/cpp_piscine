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

Zombie::Zombie( std::string name ) : _name(name) {

	std::cout << this->_name << " is created" << std::endl;
}

Zombie::Zombie( void ) {
	std::cout << "A zombie is created with no name" << std::endl;
	this->_name = "noName";
}

Zombie::~Zombie( void ) {

	std::cout << this->_name << " is destroyed" << std::endl;
}

void Zombie::announce( void ) const {

	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName( std::string name) {

	this->_name = name;
	std::cout << "Set zombie's name as " << this->_name << std::endl;
}
