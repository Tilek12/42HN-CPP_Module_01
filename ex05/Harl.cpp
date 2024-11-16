/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:10:25 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/16 14:59:50 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void	Harl::debug( void ) {

	std::cout << "I love having extra bacon for my "
				"7XL-double-cheese-triple-pickle-specialketchup burger. "
				"I really do!\n\n";

}

void	Harl::info( void ) {

	std::cout << "I cannot believe adding extra bacon costs more money. "
				"You didn’t put enough bacon in my burger! If you did, "
				"I wouldn’t be asking for more!\n\n";

}

void	Harl::warning( void ) {

	std::cout << "I think I deserve to have some extra bacon for free. "
				"I’ve been coming for years whereas you started working "
				"here since last month.\n\n";

}

void	Harl::error( void ) {

	std::cout << "This is unacceptable! I want to speak to the manager now.\n\n";

}

void	Harl::complain( std::string level ) {

	void	( Harl::*complaints[] )() = { &Harl::debug,
											&Harl::info,
											&Harl::warning,
											&Harl::error };

	std::string	levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	for ( int i = 0; i < 4; i++ ) {
		if ( levels[i] == level ) {
			( this->*complaints[i] )();
			return;
		}
	}

	std::cout << "Incorrect level: " << level << std::endl;

}
