/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:26:54 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/10 17:26:56 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include <iostream>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource {

public:
	MateriaSource(void);
	MateriaSource(MateriaSource const & rhs);
	~MateriaSource(void);

	MateriaSource & operator=(MateriaSource const & rhs);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);

	AMateria * getInventoryAt(int idx) const;

private:
	AMateria * 	_inventory[4];
};

#endif
