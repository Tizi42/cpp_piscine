/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:23:55 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/10 17:23:56 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_H
# define IMATERIASOURCE_H

# include <iostream>

class AMateria;

class IMateriaSource {

public:
	IMateriaSource(void);
	IMateriaSource(IMateriaSource const & rhs);

	IMateriaSource & operator=(IMateriaSource const & rhs);

	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif
