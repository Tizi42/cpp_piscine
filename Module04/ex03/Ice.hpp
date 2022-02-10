/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:39:01 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/10 13:39:03 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria {

public:
	Ice(void);
	Ice(Ice const & rhs);
	~Ice(void);

	Ice & operator=(Ice const & rhs);

	AMateria*	clone() const;
	void 		use(ICharacter& target);

};

#endif
