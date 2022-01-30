/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 20:41:00 by tyuan             #+#    #+#             */
/*   Updated: 2022/01/29 20:41:02 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack( void ) const {

	std::cout << this->_name << " attacks with his ";
	std::cout << this->_weapon.getType() << std::endl;
}

HumanA::HumanA(std::string n, Weapon& w) : _name(n), _weapon(w) {

}
