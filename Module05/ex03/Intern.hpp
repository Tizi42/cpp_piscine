/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:15:00 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/15 16:15:02 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

# include <iostream>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

# define SHRUBBERY 0
# define ROBOTOMY 1
# define PRESIDENTIAL 2
# define NONEXIST 3

class Intern {

public:
	Intern(void);
	Intern(Intern const & rhs);
	~Intern(void);

	Intern & operator=(Intern const & rhs);

	Form * makeForm(std::string fname, std::string target);

private:
	int		formType(std::string fname);
};

#endif
