/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 17:54:19 by tyuan             #+#    #+#             */
/*   Updated: 2022/01/29 17:54:21 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie {

public:
	Zombie( std::string name );
	Zombie( void );
	~Zombie( void );
	void announce( void );
	void setName( std::string name);

private:
	std::string	_name;
};

Zombie*    zombieHorde( int N, std::string name );

#endif
