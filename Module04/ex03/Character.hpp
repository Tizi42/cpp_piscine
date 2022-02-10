/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:11:57 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/10 15:12:00 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter {

public:
	Character(void);
	Character(std::string name);
	Character(Character const & rhs);
	~Character(void);

	Character & operator=(Character const & rhs);
	AMateria * getInventoryAt(int idx) const;

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

private:
	AMateria * 	_inventory[4];
	std::string	_name;
};

#endif
