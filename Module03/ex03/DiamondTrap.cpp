/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 13:49:33 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/04 13:49:36 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : _name("no_name") {

	std::cout << "DiamondTrap default constructor called" << std::endl;
	ClapTrap::_name = (std::string)"no_name" + "_clap_name";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), _name(name){

	std::cout << "DiamondTrap name constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
}

DiamondTrap::DiamondTrap(DiamondTrap const & rhs) {

	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = rhs;
}

DiamondTrap::~DiamondTrap(void) {

	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs) {

	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHit();
	this->_energyPoints = rhs.getEnergy();
	this->_attackDamage = rhs.getEnergy();
	return (*this);
}

void DiamondTrap::whoAmI(void) const {

	std::cout << "DiamondTrap: my name is " << this->_name << std::endl;
	std::cout << "And my ClapTrap name is " << ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(const std::string& target) {

	ScavTrap::attack(target);
}
