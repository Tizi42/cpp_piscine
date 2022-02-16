/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:07:56 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/10 13:07:58 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) {

	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) {

	std::cout << "AMateria type constructor called" << std::endl;
	this->type = type;
}

AMateria::AMateria(AMateria const & rhs) {

	std::cout << "AMateria copy constructor called" << std::endl;
	*this = rhs;
}

AMateria::~AMateria(void) {

	std::cout << "AMateria destructor called" << std::endl;
}

AMateria & AMateria::operator=(AMateria const & rhs) {

	std::cout << "AMateria copy assignment operator called" << std::endl;
	this->type = rhs.getType();
	return (*this);
}

std::string const & AMateria::getType(void) const {

	return (this->type);
}

void	AMateria::use(ICharacter& target) {

	(void)target;
}
