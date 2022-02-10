/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:54:03 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/08 16:54:04 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) {

	std::cout << "WrongCat default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const & rhs) {

	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = rhs;
}

WrongCat::~WrongCat(void) {

	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs) {

	std::cout << "WrongCat copy assignment operator called" << std::endl;
	this->type = rhs.getType();
	return (*this);
}

void WrongCat::makeSound(void) const {
	std::cout << "WRONG MEOW~" << std::endl;
}
