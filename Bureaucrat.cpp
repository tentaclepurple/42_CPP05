/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 18:43:56 by imontero          #+#    #+#             */
/*   Updated: 2023/12/23 18:43:56 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name("Undefined"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat & copy)
{
	*this = copy;
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat & Bureaucrat::operator =(Bureaucrat const & rhs)
{
	this->_grade = rhs._grade;
	return (*this);
}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int			Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void		Bureaucrat::upGrade(void)
{
	if (this->_grade - 1 < 1)
		throw(GradeTooHighException());
	else if (this->_grade - 1 > 150)
		throw (GradeTooLowException());
	this->_grade--;
}

void		Bureaucrat::upGrade(int i)
{
	if (this->_grade - i < 1)
		throw (GradeTooHighException());
	else if (this->_grade - i > 150)
		throw (GradeTooLowException());
	this->_grade -= i;
}

void		Bureaucrat::downGrade(void)
{
	if (this->_grade + 1  > 150)
		throw(GradeTooLowException());
	else if (this->_grade  + 1 < 1)
		throw (GradeTooHighException());
	this->_grade++;
}

void		Bureaucrat::downGrade(int i)
{
	if (this->_grade + i < 1)
		throw (GradeTooHighException());
	else if (this->_grade + i > 150)
		throw (GradeTooLowException());
	this->_grade += i;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & inst)
{
	o << inst.getName() << ", bureaucrat grade: " << inst.getGrade();
	return (o);
}



