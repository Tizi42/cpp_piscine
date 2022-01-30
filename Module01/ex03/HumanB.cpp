/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 20:41:12 by tyuan             #+#    #+#             */
/*   Updated: 2022/01/29 20:41:14 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack(void) const {

	if (this->_weapon->getType().empty())
	{
		std::cout << this->_name << " attacks with his bare hands" << std::endl;
		return ;
	}
	std::cout << this->_name << " attacks with his ";
	std::cout << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon) {

	if (this->_weapon->getType().empty())
		delete this->_weapon;
	this->_weapon = &weapon;
}

HumanB::HumanB(std::string n) : _name(n) {
	this->_weapon = new Weapon("");
}

HumanB::~HumanB(void) {
	if (this->_weapon->getType().empty())
		delete this->_weapon;
}
