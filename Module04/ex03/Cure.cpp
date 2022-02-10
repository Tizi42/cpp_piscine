/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:39:03 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/10 13:39:05 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) {

	std::cout << "Cure default constructor called" << std::endl;
	this->type = "cure";
}

Cure::Cure(Cure const & rhs) {

	std::cout << "Cure copy constructor called" << std::endl;
	*this = rhs;
}

Cure::~Cure(void) {

	std::cout << "Cure destructor called" << std::endl;
}

Cure & Cure::operator=(Cure const & rhs) {

	std::cout << "Cure copy assignment operator called but it did nothing" << std::endl;
	(void)rhs;
	return (*this);
}

AMateria*	Cure::clone() const {

	AMateria * ret = new Cure();
	return (ret);
}

void 		Cure::use(ICharacter& target) {

	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
