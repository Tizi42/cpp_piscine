/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 10:18:06 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/04 10:18:07 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {

	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {

	std::cout << "ScavTrap name constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const & rhs) {

	std::cout << "ScavTrap copy constructor called" << std::endl;
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHit();
	this->_energyPoints = rhs.getEnergy();
	this->_attackDamage = rhs.getEnergy();
}

ScavTrap::~ScavTrap(void) {

	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs) {

	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHit();
	this->_energyPoints = rhs.getEnergy();
	this->_attackDamage = rhs.getEnergy();
	return (*this);
}

void ScavTrap::guardGate(void) const {

	std::cout << "ScavTrap " << this->_name;
	std::cout << " is now in Gate keeper mode" << std::endl;
}
