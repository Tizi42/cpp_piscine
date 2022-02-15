/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 09:51:36 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/11 09:51:40 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void) : _name("no_name"), _grade(150) {

	//std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {

	//std::cout << "Bureaucrat name/grade constructor called" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & rhs) {

	//std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = rhs;
}

Bureaucrat::~Bureaucrat(void) {

	//std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs) {

	//std::cout << "Bureaucrat copy assignment operator called" << std::endl;
	this->_grade = rhs.getGrade();
	return (*this);
}

void		Bureaucrat::signForm(Form & f) {

	try {

		f.beSigned(*this);
		std::cout << this->getName() << " signed " << f.getName() << std::endl;
	}
	catch (std::exception &e) {

		std::cout << this->getName() << " couldn’t sign " << f.getName();
		std::cout << " because his grade is too low" << std::endl;
	}
}

std::string	Bureaucrat::getName(void) const {

	return (this->_name);
}

int			Bureaucrat::getGrade(void) const {
	return (this->_grade);
}

void		Bureaucrat::increGrade(void) {

	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
	{
		this->_grade--;
		std::cout << "Grade incremented, current grade: " << this->_grade << std::endl;
	}
}

void		Bureaucrat::decreGrade(void) {

	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
	{
		this->_grade++;
		std::cout << "Grade decremented, current grade: " << this->_grade << std::endl;
	}
}

std::ostream &	operator<<(std::ostream & ofs, Bureaucrat const & rhs) {

	ofs << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return (ofs);
}
