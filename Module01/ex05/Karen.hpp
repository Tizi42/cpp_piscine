/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:59:00 by tyuan             #+#    #+#             */
/*   Updated: 2022/01/30 15:59:02 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
# define KAREN_H

# include <iostream>
# include <string>

class	Karen {

public:
	void	complain( std::string level ) const;
	int		getLevelInt(std::string level) const;

private:
	void	_debug( void ) const;
	void	_info( void ) const;
	void	_warning( void ) const;
	void	_error( void ) const;
	void	_other( void ) const;
};

#endif
