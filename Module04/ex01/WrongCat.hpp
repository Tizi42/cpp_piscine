/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:54:05 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/08 16:54:11 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_H
#define  WRONG_CAT_H

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:
	WrongCat(void);
	WrongCat(WrongCat const & rhs);
	~WrongCat(void);

	WrongCat & operator=(WrongCat const & rhs);
	void makeSound(void) const;
};

#endif
