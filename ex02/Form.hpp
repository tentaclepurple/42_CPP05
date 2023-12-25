/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 11:33:49 by imontero          #+#    #+#             */
/*   Updated: 2023/12/24 11:33:49 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		bool				_sigStatus;
		int const			_signGrade;
		int const			_execGrade;
		
	public:
		Form(void);
		Form(std::string name, int signGrade, int executeGrade);
		Form(const Form & copy);
		~Form(void);

		Form & operator =(Form const & rhs);

		std::string const	getName(void) const;
		bool				getSigStatus(void) const;
		int					getSignGrade(void) const;
		int					getExecGrade(void) const;
		void				beSigned(Bureaucrat &inst);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade too high");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade too low");
				}
		};
};

std::ostream& operator<<(std::ostream &o, const Form &inst);


#endif
