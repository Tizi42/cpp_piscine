/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:04:16 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/03 12:04:17 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_H
# define CLAP_TRAP_H

#include <iostream>

class ClapTrap {

public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & rhs);
	~ClapTrap(void);

	ClapTrap & operator=(ClapTrap const & rhs);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void setName(std::string name);
	void setHit(unsigned int hit);
	void setEnergy(unsigned int energy);
	void setDamage(unsigned int damage);

	void printStatus(void) const;

	std::string		getName(void) const;
	unsigned int	getHit(void) const;
	unsigned int	getEnergy(void) const;
	unsigned int	getDamage(void) const;

protected:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;
};

#endif
