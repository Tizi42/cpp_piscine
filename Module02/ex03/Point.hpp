/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:09:47 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/01 15:09:48 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

# include <iostream>
# include "Fixed.hpp"

class Point {

public:
	Point(void);
	Point(float const a, float const b);
	Point(Fixed const & a, Fixed const & b);
	Point(Point const & src);
	~Point(void);

	Point &	operator=(Point const & rhs);
	Point	operator-(Point const & rhs) const;

	Fixed	crossProd2D(Point const & rhs) const;
	Fixed	getX(void) const;
	Fixed	getY(void) const;

private:
	Fixed const	_x;
	Fixed const	_y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
