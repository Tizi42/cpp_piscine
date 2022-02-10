/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:53:48 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/08 16:53:49 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {

	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(Dog const & rhs) {

	std::cout << "Dog copy constructor called" << std::endl;
	this->_brain = new Brain();
	*this = rhs;
}

Dog::~Dog(void) {

	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

Dog & Dog::operator=(Dog const & rhs) {

	std::cout << "Dog copy assignment operator called" << std::endl;
	this->type = rhs.getType();
	*this->_brain = *rhs.getBrain();

	return (*this);
}

void Dog::makeSound(void) const {

	std::cout << "Woof!" << std::endl;
}

Brain * Dog::getBrain(void) const {

	return (this->_brain);
}

void Dog::setBrain(Brain & brn) {

	*this->_brain = brn;
}
