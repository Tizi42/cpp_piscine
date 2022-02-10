/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:53:45 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/08 16:53:47 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define  CAT_H

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"


class Cat : public Animal {

public:
	Cat(void);
	Cat(Cat const & rhs);
	~Cat(void);

	Cat & 	operator=(Cat const & rhs);
	void	makeSound(void) const;
	Brain *	getBrain(void) const;
	void	setBrain(Brain & brn);

private:
	Brain *	_brain;
};

#endif
