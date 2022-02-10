/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:53:43 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/08 16:53:44 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {

	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(Cat const & rhs) {

	std::cout << "Cat copy constructor called" << std::endl;
	this->_brain = new Brain();
	*this = rhs;
}

Cat::~Cat(void) {

	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
}

Cat & Cat::operator=(Cat const & rhs) {

	std::cout << "Cat copy assignment operator called" << std::endl;
	this->type = rhs.getType();
	*this->_brain = *rhs.getBrain();

	return (*this);
}

void Cat::makeSound(void) const {

	std::cout << "MEOW~" << std::endl;
}

Brain * Cat::getBrain(void) const {

	return (this->_brain);
}

void Cat::setBrain(Brain & brn) {

	*this->_brain = brn;
}
