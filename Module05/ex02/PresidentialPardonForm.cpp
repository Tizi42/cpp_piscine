/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:09:40 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/14 18:09:42 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("Pardon", 25, 5) {

	this->_target = "target_name";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Pardon", 25, 5) {

	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & rhs) {

	*this = rhs;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {

}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {

	std::cout << "PresidentialPardonForm copy assignment operator called, ";
	std::cout << "but it did nothing" << std::endl;
	(void)rhs;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {

	if (this->getSigned() == 0)
		throw Form::FormNotSignedException();
	if (executor.getGrade() > this->getGradeToExec())
		throw Form::GradeTooLowException();

	std::cout << this->_target << "has been pardoned by Zaphod Beeblebrox" << std::endl;
}
