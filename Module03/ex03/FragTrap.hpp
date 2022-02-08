/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 13:40:01 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/04 13:40:02 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_H
# define FRAG_TRAP_H

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const & rhs);
	~FragTrap(void);

	FragTrap & operator=(FragTrap const & rhs);
	void highFivesGuys(void);
};

#endif
