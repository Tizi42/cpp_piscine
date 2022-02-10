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
}

Dog::Dog(Dog const & rhs) {

	std::cout << "Dog copy constructor called" << std::endl;
	*this = rhs;
}

Dog::~Dog(void) {

	std::cout << "Dog destructor called" << std::endl;
}

Dog & Dog::operator=(Dog const & rhs) {

	std::cout << "Dog copy assignment operator called" << std::endl;
	this->type = rhs.getType();
	return (*this);
}

void Dog::makeSound(void) const {
	std::cout << "Woof!" << std::endl;
}
