/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:00:59 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/16 17:42:31 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/*--------------*/
/*  Print Harl  */
/*--------------*/
void	printHarl( Harl& harl, std::string level ) {

	std::cout << CYAN << level << ":" << RESET << std::endl;
	harl.complain( level );

}

/*-----------------*/
/*  Main function  */
/*-----------------*/
int	main( void ) {

	Harl	harl;

	printHarl( harl, "DEBUG" );
	printHarl( harl, "INFO" );
	printHarl( harl, "WARNING" );
	printHarl( harl, "ERROR" );
	printHarl( harl, "unknown" );

	return 0;

}
