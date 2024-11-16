/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 20:21:33 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/16 11:37:03 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

/*-----------------*/
/*  Print message  */
/*-----------------*/
void	print( std::string message, const std::string& var ) {

	std::cout << YELLOW << message;

	if ( !var.empty() ) {
		std::cout << var;
	}

	std::cout << RESET << std::endl;

}

/*-----------------------*/
/*  Print error message  */
/*-----------------------*/
void	printError( std::string message, const std::string& var ) {

	std::cerr << RED << message;

	if ( !var.empty() ) {
		std::cerr << var;
	}

	std::cerr << RESET << std::endl;

}
