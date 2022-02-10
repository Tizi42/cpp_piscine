/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:53:40 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/08 16:53:42 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class Animal {

public:
	Animal(void);
	Animal(Animal const & rhs);
	virtual ~Animal(void);

	Animal &		operator=(Animal const & rhs);
	std::string		getType(void) const;
	virtual void	makeSound(void) const;

protected:
	std::string type;
};

#endif
