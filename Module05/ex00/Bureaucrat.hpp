/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 09:51:34 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/11 09:51:36 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include <exception>

class Bureaucrat {

public:
	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const & rhs);
	~Bureaucrat(void);

	Bureaucrat &	operator=(Bureaucrat const & rhs);

	std::string		getName(void) const;
	int				getGrade(void) const;
	void			increGrade(void);
	void			decreGrade(void);

	class			GradeTooHighException;
	class			GradeTooLowException;

private:
	std::string const	_name;
	int					_grade;

};

std::ostream &	operator<<(std::ostream & ofs, Bureaucrat const & rhs);

class Bureaucrat::GradeTooHighException : public std::exception {

public:
    virtual const char* what() const throw() {

        return "Error: The highest possible grade is 1";
    }
};

class Bureaucrat::GradeTooLowException : public std::exception {

public:
    virtual const char* what() const throw() {

        return "Error: The lowest possible grade is 150";
    }
};

#endif
