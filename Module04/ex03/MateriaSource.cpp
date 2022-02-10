/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:26:51 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/10 17:26:53 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {

	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & rhs) {

	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = rhs;
}

MateriaSource::~MateriaSource(void) {

	std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs) {

	std::cout << "MateriaSource copy assignment operator called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (rhs.getInventoryAt(i))
			this->_inventory[i] = rhs.getInventoryAt(i)->clone();
		else
			this->_inventory[i] = NULL;
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria * m) {

	int i;

	for (i = 0; i < 4 && this->_inventory[i]; i++)
		;
	if (i < 4)
	{
		this->_inventory[i] = m;
		std::cout << m->getType() << " learnt" << std::endl;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {

	for (int i = 0; i < 4 && this->_inventory[i]; i++)
	{
		if (this->_inventory[i]->getType() == type)
		{
			AMateria * ret = this->_inventory[i]->clone();
			return (ret);
		}
	}
	return (NULL);
}

AMateria * MateriaSource::getInventoryAt(int idx) const {

	if (idx >= 0 && idx < 4)
		return (this->_inventory[idx]);
	return (NULL);
}
