/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:51:11 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/14 16:51:12 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("no_name")
				 , _signed(0)
				 , _gradeToSign(1)
				 , _gradeToExec(1) {

	//std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string n, int gs, int ge) : _name(n)
										  , _signed(0)
										  , _gradeToSign(gs)
										  , _gradeToExec(ge) {

	//std::cout << "Form constructor called" << std::endl;
	if (gs < 1 || ge < 1)
		throw Form::GradeTooHighException();
	else if (gs > 150 || ge > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const & rhs) : _name(rhs.getName())
							 , _signed(rhs.getSigned())
							 , _gradeToSign(rhs.getGradeToSign())
							 , _gradeToExec(rhs.getGradeToExec()) {

	//std::cout << "Form copy constructor called" << std::endl;
}

Form::~Form(void) {

	//std::cout << "Form destructor called" << std::endl;
}

Form & Form::operator=(Form const & rhs) {

	std::cout << "Form copy assignment operator called but it did nothing" << std::endl;
	(void)rhs;
	return (*this);
}

void		Form::beSigned(Bureaucrat const & a) {

	if (a.getGrade() <= this->_gradeToSign)
		this->_signed = 1;
	else
		throw  Form::GradeTooLowException();
}

std::string	Form::getName(void) const {

	return (this->_name);
}

bool		Form::getSigned(void) const {

	return (this->_signed);
}

int			Form::getGradeToSign(void) const {

	return (this->_gradeToSign);
}

int			Form::getGradeToExec(void) const {

	return (this->_gradeToExec);
}

std::ostream &	operator<<(std::ostream & ofs, Form const & rhs) {

	ofs << "Form name: " << rhs.getName() << std::endl;
	ofs << "Signed: " << rhs.getSigned() << std::endl;
	ofs << "Grade to sign: " <<rhs.getGradeToSign() << std::endl;
	ofs << "Grade to execute: " << rhs.getGradeToExec() << std::endl;
	return (ofs);
}
