/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:58:56 by tyuan             #+#    #+#             */
/*   Updated: 2022/01/30 15:58:58 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen( void ) {

}

Karen::~Karen( void ) {

}

int	Karen::getLevelInt(std::string level) const
{
	int			i;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (i = 0; i < 4; i++)
	{
		if (level.compare(levels[i]) == 0)
			return (i);
	}
	return (i);
}

void	Karen::complain( std::string level ) const {

	void	(Karen::*f[5])( void ) const = {&Karen::_debug,
											&Karen::_info,
											&Karen::_warning,
											&Karen::_error,
											&Karen::_other};
	int		lv = getLevelInt(level);
	(this->*f[lv])();
}

void	Karen::_other( void ) const {

	std::cout << "[ UNKNOWN LEVEL ]" << std::endl;
	std::cout << "Balabalabala..." << std::endl;
}

void	Karen::_debug( void ) const {

	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-"
				"pickle-special-ketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl;
}

void	Karen::_info( void ) const {

	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I can't believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger!" << std::endl;
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Karen::_warning( void ) const {

	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I've been coming for years whereas you started working "
				"here since last month." << std::endl;
}

void	Karen::_error( void ) const {

	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to "
				"the manager now." << std::endl;
}
