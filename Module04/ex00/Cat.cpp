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
}

Cat::Cat(Cat const & rhs) {

	std::cout << "Cat copy constructor called" << std::endl;
	*this = rhs;
}

Cat::~Cat(void) {

	std::cout << "Cat destructor called" << std::endl;
}

Cat & Cat::operator=(Cat const & rhs) {

	std::cout << "Cat copy assignment operator called" << std::endl;
	this->type = rhs.getType();
	return (*this);
}

void Cat::makeSound(void) const {
	std::cout << "MEOW~" << std::endl;
}
