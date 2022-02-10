/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:54:56 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/10 13:54:58 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter(void) {

	std::cout << "ICharacter default constructor called" << std::endl;
}

ICharacter::ICharacter(ICharacter const & rhs) {

	std::cout << "ICharacter copy constructor called" << std::endl;
	*this = rhs;
}

ICharacter & ICharacter::operator=(ICharacter const & rhs) {

	std::cout << "ICharacter copy assignment operator called but it did nothing" << std::endl;
	(void)rhs;
	return (*this);
}
