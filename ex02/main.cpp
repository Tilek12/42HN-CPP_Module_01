/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:58:21 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/13 13:03:53 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*---------------*/
/*  Text colors  */
/*---------------*/
const std::string RED		= "\033[0;31m";
const std::string GREEN		= "\033[0;32m";
const std::string YELLOW	= "\033[0;33m";
const std::string BLUE		= "\033[0;34m";
const std::string PURPLE	= "\033[0;35m";
const std::string CYAN		= "\033[0;36m";
const std::string RESET		= "\033[0m";

int	main( void ) {

	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << std::endl;
	std::cout << CYAN << "The memory address of the string variable: " << RESET
				<< YELLOW << &string << RESET << std::endl;
	std::cout << GREEN << "The memory address held by stringPTR:\t   " << RESET
				<< YELLOW << stringPTR << RESET << std::endl;
	std::cout << PURPLE << "The memory address held by stringREF:\t   " << RESET
				<< YELLOW << &stringREF << RESET << std::endl;
	std::cout << std::endl;

	std::cout << CYAN << "The value of the string variable:  " << RESET
				<< YELLOW << string << RESET << std::endl;
	std::cout << GREEN << "The value pointed to by stringPTR: " << RESET
				<< YELLOW << *stringPTR << RESET << std::endl;
	std::cout << PURPLE << "The value pointed to by stringREF: " << RESET
				<< YELLOW << stringREF << RESET << std::endl;
	std::cout << std::endl;

	return 0;

}
