/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:09:54 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/01 15:09:56 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point) {

	//valid triangle ??

	Point	pa(a - point);
	Point	pb(b - point);
	Point	pc(c - point);

	Fixed	paXpb = pa.crossProd2D(pb);
	Fixed	pbXpc = pb.crossProd2D(pc);
	Fixed	pcXpa = pc.crossProd2D(pa);

	if ((paXpb < 0 && pbXpc < 0 && pcXpa < 0)
		|| (paXpb > 0 && pbXpc > 0 && pcXpa > 0))
		return (true);
	return (false);
}
