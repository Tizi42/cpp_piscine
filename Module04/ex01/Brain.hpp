/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 22:32:46 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/08 22:32:47 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

class Brain {

public:
	Brain(void);
	Brain(Brain const & rhs);
	~Brain(void);

	Brain & operator=(Brain const & rhs);

	std::string ideas[100];
};

#endif
