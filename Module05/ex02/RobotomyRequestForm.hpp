/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:09:58 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/14 18:09:59 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_H
# define ROBOTOMY_H

# include <iostream>
# include <cstdlib>
# include <ctime>
# include "Form.hpp"

class RobotomyRequestForm : public Form {

public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const & rhs);
	~RobotomyRequestForm(void);

	RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);

	void	execute(Bureaucrat const & executor) const;

private:
	std::string	_target;
};

#endif
