/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:54:00 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/08 16:54:01 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_H
# define WRONG_ANIMAL_H

# include <iostream>

class WrongAnimal {

public:
	WrongAnimal(void);
	WrongAnimal(WrongAnimal const & rhs);
	~WrongAnimal(void);

	WrongAnimal &	operator=(WrongAnimal const & rhs);
	std::string		getType(void) const;
	void			makeSound(void) const;

protected:
	std::string type;
};

#endif
