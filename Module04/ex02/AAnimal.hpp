/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:53:40 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/10 13:00:11 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
# define AANIMAL_H

# include <iostream>

class AAnimal {

public:
	AAnimal(void);
	AAnimal(AAnimal const & rhs);
	virtual ~AAnimal(void);

	AAnimal &		operator=(AAnimal const & rhs);
	std::string		getType(void) const;
	virtual void	makeSound(void) const = 0;

protected:
	std::string type;
};

#endif
