/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 17:26:21 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/17 19:01:24 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/*-----------------*/
/*  Main function  */
/*-----------------*/
int	main( int argc, char** argv ) {

	if ( argc != 2 ) {
		std::cerr << RED
				<< "ERROR: Incorrect Input!\n\n"
					"Usage: ./harlFilter <level>\n\n"
				<< RESET;
		return 1;
	}

	Harl	harl;
	harl.complain(argv[1]);

	return 0;
}
