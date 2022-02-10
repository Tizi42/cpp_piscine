/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 13:39:58 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/04 13:40:00 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {

	std::cout << "FragTrap default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) {

	std::cout << "FragTrap name constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const & rhs) {

	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = rhs;
}

FragTrap::~FragTrap(void) {

	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs) {

	std::cout << "FragTrap copy assignment operator called" << std::endl;
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHit();
	this->_energyPoints = rhs.getEnergy();
	this->_attackDamage = rhs.getEnergy();
	return (*this);
}

void FragTrap::highFivesGuys(void) const {

	std::cout << "FragTrap " << this->_name;
	std::cout << " has a positive high fives request" << std::endl;
}
