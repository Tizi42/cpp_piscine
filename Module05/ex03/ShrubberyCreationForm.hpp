/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:09:54 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/14 18:09:57 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_H
# define SHRUBBERY_H

# include <iostream>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form {

public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(std::string fname, std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const & rhs);
	~ShrubberyCreationForm(void);

	ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);

	void	execute(Bureaucrat const & executor) const;

	class	FileCreationException;

private:
	std::string	_target;

};

class ShrubberyCreationForm::FileCreationException : public std::exception {

public:
    virtual const char* what() const throw() {

        return "Shrubbey target file creation failed";
    }
};

#endif
