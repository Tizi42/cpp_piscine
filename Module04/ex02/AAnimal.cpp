/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:53:38 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/10 13:00:04 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) {

	std::cout << "AAnimal default constructor called" << std::endl;
	this->type = "none";
}

AAnimal::AAnimal(AAnimal const & rhs) {

	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = rhs;
}

AAnimal::~AAnimal(void) {

	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal & AAnimal::operator=(AAnimal const & rhs) {

	std::cout << "AAnimal copy assignment operator called" << std::endl;
	this->type = rhs.type;
	return (*this);
}

std::string	AAnimal::getType(void) const {

	return (this->type);
}

//void AAnimal::makeSound(void) const {
//	std::cout << "* UNSPECIFIC ANIMAL SOUND *" << std::endl;
//}
