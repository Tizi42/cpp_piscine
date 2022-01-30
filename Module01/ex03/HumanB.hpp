/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 20:41:22 by tyuan             #+#    #+#             */
/*   Updated: 2022/01/29 20:41:25 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H
# define HUMAN_B_H

# include <iostream>
# include "Weapon.hpp"

class	HumanB {

public:
	void	attack(void) const;
	void	setWeapon(Weapon& club);

	HumanB(std::string name);
	~HumanB(void);

private:
	std::string	_name;
	Weapon*		_weapon;
};

#endif
