/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:07:59 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/10 13:08:00 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_MATERIA_H
# define A_MATERIA_H

# include <iostream>
# include "ICharacter.hpp"

class AMateria {

public:
	AMateria(void);
	AMateria(std::string const & type);
	AMateria(AMateria const & rhs);
	virtual ~AMateria(void);

	AMateria & operator=(AMateria const & rhs);

	std::string const & getType(void) const; //Returns the materia type
	virtual AMateria* 	clone(void) const = 0;
	virtual void 		use(ICharacter& target);

protected:
	std::string	type;

};

#endif
