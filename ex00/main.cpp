/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 18:26:07 by imontero          #+#    #+#             */
/*   Updated: 2023/12/24 00:00:57 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int  main()
{
	try
	{
		Bureaucrat jose("Joserra Funcionario", 1);
		std::cout << jose << std::endl;
		jose.upGrade();
		std::cout << jose << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	std::cout << std::endl << "++++++++++" << std::endl << std::endl;

	try
	{
		Bureaucrat terelu;
		std::cout << terelu << std::endl;
		terelu.upGrade(5);
		std::cout << terelu << std::endl;
		terelu.upGrade();
		std::cout << terelu << std::endl;
		terelu.downGrade();
		std::cout << terelu << std::endl;
		terelu.downGrade(10);
		std::cout << terelu << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	
	std::cout << std::endl << "++++++++++" << std::endl << std::endl;
	std::cout << "The End" << std::endl;
	
	return (0);
}
