/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:09:51 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/01 15:09:53 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {

}

Point::Point(float const a, float const b) : _x(a), _y(b) {

}

Point::Point(Fixed const & a, Fixed const & b) : _x(a), _y(b) {

}

Point::Point(Point const & src) : _x(src.getX()), _y(src.getY()) {

}

Point::~Point(void) {

}

Point &	Point::operator=(Point const & rhs) {

	(void)rhs;
	std::cout << "Attributes in class Point are all constants";
	std::cout << ", no assignment happened." << std::endl;
	return (*this);
}

Point	Point::operator-(Point const & rhs) const {

	Point	ret(this->_x - rhs.getX(), this->_y - rhs.getY());

	return (ret);
}

Fixed	Point::crossProd2D(Point const & rhs) const {

	return (this->_x * rhs.getY() - rhs.getX() * this->_y);
}

Fixed	Point::getX(void) const {

	return (this->_x);
}


Fixed	Point::getY(void) const {

	return (this->_y);
}
