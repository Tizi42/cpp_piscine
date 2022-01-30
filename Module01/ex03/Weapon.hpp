/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 20:41:38 by tyuan             #+#    #+#             */
/*   Updated: 2022/01/29 20:41:40 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <string>

class Weapon {

public:
	Weapon( std::string );

	std::string const&	getType( void ) const;
	void				setType(std::string t);

private:
	std::string _type;
};

#endif
