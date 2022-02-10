/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:53:50 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/08 16:53:51 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define  DOG_H

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal {

public:
	Dog(void);
	Dog(Dog const & rhs);
	~Dog(void);

	Dog & 	operator=(Dog const & rhs);
	void	makeSound(void) const;
	Brain *	getBrain(void) const;
	void	setBrain(Brain & brn);

private:
	Brain *	_brain;
};

#endif
