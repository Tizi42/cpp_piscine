/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:38:59 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/10 13:39:00 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) {

	std::cout << "Ice default constructor called" << std::endl;
	this->type = "ice";
}

Ice::Ice(Ice const & rhs) {

	std::cout << "Ice copy constructor called" << std::endl;
	*this = rhs;
}

Ice::~Ice(void) {

	std::cout << "Ice destructor called" << std::endl;
}

Ice & Ice::operator=(Ice const & rhs) {

	std::cout << "Ice copy assignment operator called but it did nothing" << std::endl;
	(void)rhs;
	return (*this);
}

AMateria*	Ice::clone() const {

	AMateria * ret = new Ice();
	return (ret);
}

void 		Ice::use(ICharacter& target) {

	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
