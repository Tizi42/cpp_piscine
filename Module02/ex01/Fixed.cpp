/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 10:51:03 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/01 10:51:05 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const	Fixed::_fractional = 8;

Fixed::Fixed(void) : _fixedPoint(0) {

	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n) {

	std::cout << "Int constructor called" << std::endl;
	this->_fixedPoint = n * pow(2, Fixed::_fractional);
}

Fixed::Fixed(float const f) {

	std::cout << "Float constructor called" << std::endl;
	this->_fixedPoint = roundf(f * pow(2, Fixed::_fractional));
}

Fixed::Fixed(Fixed const & src) {

	std::cout << "Copy constructor called" << std::endl;
	this->_fixedPoint = src.getRawBits();
}

Fixed::~Fixed(void) {

	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(Fixed const & other) {

	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPoint = other.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const {

	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPoint);
}

void	Fixed::setRawBits(int const raw) {

	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPoint = raw;
}

float	Fixed::toFloat( void ) const {

	return (this->_fixedPoint / pow(2, Fixed::_fractional));
}

int	Fixed::toInt( void ) const {

	return (roundf(this->_fixedPoint / pow(2, Fixed::_fractional)));
}

std::ostream &	operator<<(std::ostream & ofs, Fixed const & rhs) {

	ofs << rhs.toFloat();
	return (ofs);
}
