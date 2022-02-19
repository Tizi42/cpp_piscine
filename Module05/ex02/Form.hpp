/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:51:07 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/14 16:51:09 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Form {

public:
	Form(void);
	Form(std::string name, int gradeSign, int gradeExec);
	Form(Form const & rhs);
	virtual ~Form(void);

	Form & operator=(Form const & rhs);

	std::string	getName(void) const;
	bool		getSigned(void) const;
	int			getGradeToSign(void) const;
	int			getGradeToExec(void) const;
	void		beSigned(Bureaucrat const & a);

	virtual void	execute(Bureaucrat const & executor) const = 0;

	class			GradeTooHighException;
	class			GradeTooLowException;
	class			FormNotSignedException;

private:
	std::string const	_name;
	bool				_signed;
	int const			_gradeToSign;
	int const			_gradeToExec;
};

std::ostream &	operator<<(std::ostream & ofs, Form const & rhs);

class Form::GradeTooHighException : public std::exception {

public:
    virtual const char* what() const throw() {

        return "Form Error: grade too high";
    }
};

class Form::GradeTooLowException : public std::exception {

public:
    virtual const char* what() const throw() {

        return "Form Error: grade too low";
    }
};

class Form::FormNotSignedException : public std::exception {

public:
    virtual const char* what() const throw() {

        return "Form Error: form not signed";
    }
};

#endif
