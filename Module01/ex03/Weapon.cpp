/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 20:41:32 by tyuan             #+#    #+#             */
/*   Updated: 2022/01/29 20:41:34 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string const&	Weapon::getType( void ) const {

	return (this->_type);
}

void	Weapon::setType(std::string t) {

	this->_type = t;
}

Weapon::Weapon( std::string type ) : _type(type) {


}
