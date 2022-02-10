/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:23:52 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/10 17:23:54 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource(void) {

	std::cout << "IMateriaSource default constructor called" << std::endl;
}

IMateriaSource::IMateriaSource(IMateriaSource const & rhs) {

	std::cout << "IMateriaSource copy constructor called" << std::endl;
	*this = rhs;
}

IMateriaSource & IMateriaSource::operator=(IMateriaSource const & rhs) {

	std::cout << "IMateriaSource copy assignment operator called but it did nothing" << std::endl;
	(void)rhs;
	return (*this);
}
