/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 22:19:53 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/15 22:19:53 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERILIZATION_H
# define SERILIZATION_H

# include <iostream>

struct Data {
	int	data;
};

uintptr_t	serialize(Data* ptr);
Data* 		deserialize(uintptr_t raw);

#endif
