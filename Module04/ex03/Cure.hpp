/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:39:05 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/10 13:39:06 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria {

public:
	Cure(void);
	Cure(Cure const & rhs);
	~Cure(void);

	Cure & operator=(Cure const & rhs);
	AMateria*	clone() const;
	void 		use(ICharacter& target);

};

#endif
