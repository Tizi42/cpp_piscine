/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 20:41:03 by tyuan             #+#    #+#             */
/*   Updated: 2022/01/29 20:41:05 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H
# define HUMAN_A_H

# include <iostream>
# include "Weapon.hpp"

class	HumanA {

public:
	void	attack( void ) const;

	HumanA(std::string name, Weapon& weapon);
	~HumanA( void );

private:
	std::string	_name;
	Weapon&		_weapon;
};

#endif
