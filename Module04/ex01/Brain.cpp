/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 22:32:43 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/08 22:32:45 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {

	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const & rhs) {

	std::cout << "Brain copy constructor called" << std::endl;
	*this = rhs;
}

Brain::~Brain(void) {

	std::cout << "Brain destructor called" << std::endl;
}

Brain & Brain::operator=(Brain const & rhs) {

	std::cout << "Brain copy assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}
