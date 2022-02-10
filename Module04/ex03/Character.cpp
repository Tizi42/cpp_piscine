/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:11:55 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/10 15:11:56 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("no_name") {

	std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(std::string n) : _name(n) {

	std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(Character const & rhs) {

	std::cout << "Character copy constructor called" << std::endl;
	*this = rhs;
}

Character::~Character(void) {

	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->_inventory[i];
}

Character & Character::operator=(Character const & rhs) {

	std::cout << "Character copy assignment operator called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (rhs.getInventoryAt(i))
			this->_inventory[i] = rhs.getInventoryAt(i)->clone();
		else
			this->_inventory[i] = NULL;
	}
	return (*this);
}

AMateria * Character::getInventoryAt(int idx) const {

	if (idx >= 0 && idx < 4)
		return (this->_inventory[idx]);
	return (NULL);
}

std::string const & Character::getName() const {

	return (this->_name);
}

void Character::equip(AMateria* m) {

	int	i;

	for (i = 0; i < 4 && this->_inventory[i]; i++)
		if (this->_inventory[i] == m)
			return ;
	if (i < 4)
	{
		this->_inventory[i] = m;
		std::cout << m->getType() << " is equipped to " << this->_name;
		std::cout << " at inventory slot [" << i << "]" << std::endl;
	}
}

void Character::unequip(int idx) {

	if (idx >= 0 && idx < 4 && this->_inventory[idx])
	{
		std::cout << this->_name << "'s inventory slot [" << idx << "]: ";
		std::cout << this->_inventory[idx]->getType() << " unequipped" << std::endl;
		this->_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target) {

	if (idx >= 0 && idx < 4 && this->_inventory[idx])
	{
		this->_inventory[idx]->use(target);
	}
}
