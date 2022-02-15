/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:09:37 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/14 18:09:39 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("Robotomy", 72, 45) {

	this->_target = "target_name";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy", 72, 45) {

	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & rhs) {

	*this = rhs;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {

}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {

	std::cout << "RobotomyRequestForm copy assignment operator called, ";
	std::cout << "but it did nothing" << std::endl;
	(void)rhs;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {

	if (this->getSigned() == 0)
		throw Form::FormNotSignedException();
	if (executor.getGrade() > this->getGradeToExec())
		throw Form::GradeTooLowException();

	std::srand((unsigned)std::time(NULL));
	int rn = std::rand();
	if (rn % 2)
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << "The robotomy of " << this->_target << " failed" << std::endl;
}
