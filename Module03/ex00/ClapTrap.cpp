/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:04:12 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/03 12:04:14 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("no_name"), _hitPoints(10),
							_energyPoints(10), _attackDamage(0) {

	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10),
							_energyPoints(10), _attackDamage(0) {

	std::cout << "ClapTrap name constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & rhs) {

	std::cout << "ClapTrap copy constructor called" << std::endl;
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHit();
	this->_energyPoints = rhs.getEnergy();
	this->_attackDamage = rhs.getEnergy();
}

ClapTrap::~ClapTrap(void) {

	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs) {

	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHit();
	this->_energyPoints = rhs.getEnergy();
	this->_attackDamage = rhs.getEnergy();
	return (*this);
}

void ClapTrap::attack(std::string const & target) {

	if (this->_energyPoints == 0 || this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " can't attack anymore..." << std::endl;
		this->printStatus();
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks ";
	std::cout << target << ", causing " << this->_attackDamage;
	std::cout << " points of damage!" << std::endl;
	this->_energyPoints--;
	this->printStatus();
}

void ClapTrap::takeDamage(unsigned int amount) {

	std::cout << "ClapTrap " << this->_name << " takes ";
	std::cout << amount << " points of damage!" << std::endl;
	if ((int)(this->_hitPoints - amount) > 0)
		this->_hitPoints -= amount;
	else
	{
		this->_hitPoints = 0;
		std::cout << this->_name << " is dead..." << std::endl;
	}
	this->printStatus();
}

void ClapTrap::beRepaired(unsigned int amount) {

	if (this->_energyPoints == 0 || this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " can't be repaired anymore..." << std::endl;
		this->printStatus();
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " repaired itself and regained ";
	std::cout << amount << " hit points!" << std::endl;
	this->_hitPoints += amount;
	this->_energyPoints--;
	this->printStatus();
}

void ClapTrap::printStatus(void) const {

	std::cout << "=== Hit: " << this->_hitPoints;
	std::cout << " === Energy: " << this->_energyPoints << " ==="<< std::endl;
	std::cout << std::endl;
}

void ClapTrap::setName(std::string name) {

	this->_name = name;
}

void ClapTrap::setHit(unsigned int hit) {

	this->_hitPoints = hit;
}

void ClapTrap::setEnergy(unsigned int energy) {

	this->_energyPoints = energy;
}

void ClapTrap::setDamage(unsigned int damage) {

	this->_attackDamage = damage;
}

std::string		ClapTrap::getName(void) const {

	return (this->_name);
}

unsigned int	ClapTrap::getHit(void) const {

	return (this->_hitPoints);
}

unsigned int	ClapTrap::getEnergy(void) const {

	return (this->_energyPoints);
}

unsigned int	ClapTrap::getDamage(void) const {

	return (this->_attackDamage);
}
