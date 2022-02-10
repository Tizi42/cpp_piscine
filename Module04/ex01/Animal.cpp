/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:53:38 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/08 16:53:39 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {

	std::cout << "Animal default constructor called" << std::endl;
	this->type = "none";
}

Animal::Animal(Animal const & rhs) {

	std::cout << "Animal copy constructor called" << std::endl;
	*this = rhs;
}

Animal::~Animal(void) {

	std::cout << "Animal destructor called" << std::endl;
}

Animal & Animal::operator=(Animal const & rhs) {

	std::cout << "Animal copy assignment operator called" << std::endl;
	this->type = rhs.type;
	return (*this);
}

std::string	Animal::getType(void) const {

	return (this->type);
}

void Animal::makeSound(void) const {
	std::cout << "* UNSPECIFIC ANIMAL SOUND *" << std::endl;
}
