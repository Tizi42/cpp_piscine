/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:09:34 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/14 18:09:36 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("Shrubbey", 145, 137) {

	this->_target = "target_name";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbey", 145, 137) {

	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string fname, std::string target)
					: Form(fname, 145, 137) {

	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & rhs) {

	*this = rhs;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {

}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {

	std::cout << "ShrubberyCreationForm copy assignment operator called, ";
	std::cout << "but it did nothing" << std::endl;
	(void)rhs;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {

	if (this->getSigned() == 0)
		throw Form::FormNotSignedException();
	if (executor.getGrade() > this->getGradeToExec())
		throw Form::GradeTooLowException();

	std::ofstream	ofs((this->_target + "_shrubbery").c_str());
	if (ofs.fail())
		throw ShrubberyCreationForm::FileCreationException();

	ofs << "    /\\" << std::endl;
	ofs << "   /||\\" << std::endl;
	ofs << "  //||\\\\" << std::endl;
	ofs << "____||____" << std::endl;
}
