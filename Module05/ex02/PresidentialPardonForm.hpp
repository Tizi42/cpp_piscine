/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:10:00 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/14 18:10:02 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARDON_H
# define PARDON_H

# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm : public Form {

public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const & rhs);
	~PresidentialPardonForm(void);

	PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);

	void	execute(Bureaucrat const & executor) const;

private:
	std::string	_target;
};

#endif
