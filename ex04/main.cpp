/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 21:32:16 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/14 21:52:05 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colors.hpp"
#include <iostream>

int	main( int argc, char **argv ) {

	std::string	fileName;
	std::string	s1;
	std::string	s2;

	if ( argc != 4 ) {
		std::cerr << RED << "Usage: ./replace <fileName> <s1> <s2>\n\n" << RESET;
		return 1;
	} else if ( argv[1] || argv[2] || argv[3] ) {
		std::cerr << RED << "ERROR!!!: Arguments mustn't be empty\n\n" << RESET;
		return 1;
	}

	fileName = argv[1];
	s1 = argv[2];
	s2 = argv[3];

	if ( fileName.empty() || s1.empty() || s2.empty() ) {
		std::cerr << RED << "ERROR: Arguments mustn't be empty\n\n" << RESET;
		return 1;
	}

	return 0;
}
