/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 18:26:07 by imontero          #+#    #+#             */
/*   Updated: 2023/12/25 01:07:27 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int  main()
{
	try
	{
		Bureaucrat jose("Joserra Funcionario", 1); //bureaucrat instanciated
		std::cout << jose << std::endl;
		Form	x1("X1", 2, 2);  //form instanciated
		std::cout << x1 << std::endl;

		jose.downGrade();
		std::cout << jose << std::endl;

		x1.beSigned(jose);
		std::cout << x1 << std::endl;
		x1.beSigned(jose);
		Form	x2("X2", 1, 1);
		x2.beSigned(jose);		

	}
	catch(std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	std::cout << std::endl << "++++++++++" << std::endl << std::endl;

	try
	{
		Bureaucrat	terelu;
		std::cout << terelu << std::endl;
		Bureaucrat	yeni("La Yeni", 2);
		terelu = yeni;
		std::cout << terelu << std::endl;
		Form	npi;
		std::cout << npi << std::endl;
		Form	x450("X450", 50, 50);
		std::cout << x450 << std::endl;
		Form	r120(x450);
		std::cout << r120 << std::endl;
		r120.beSigned(terelu);
		x450.beSigned(yeni);

	}
	catch(std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	
	std::cout << std::endl << "++++++++++" << std::endl << std::endl;
	std::cout << "The End" << std::endl;
	
	return (0);
}
