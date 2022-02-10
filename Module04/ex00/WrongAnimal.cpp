/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:53:58 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/08 16:53:59 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {

	std::cout << "WrongAnimal default constructor called" << std::endl;
	this->type = "none";
}

WrongAnimal::WrongAnimal(WrongAnimal const & rhs) {

	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = rhs;
}

WrongAnimal::~WrongAnimal(void) {

	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs) {

	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	this->type = rhs.type;
	return (*this);
}

std::string	WrongAnimal::getType(void) const {

	return (this->type);
}

void WrongAnimal::makeSound(void) const {
	std::cout << "* UNSPECIFIC WRONG ANIMAL SOUND *" << std::endl;
}
