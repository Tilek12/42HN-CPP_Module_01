/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:10:25 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/16 17:44:39 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/*-------------------------*/
/*  Define debug function  */
/*-------------------------*/
void	Harl::debug( void ) {

	std::cout << YELLOW
			<< "I love having extra bacon for my "
				"7XL-double-cheese-triple-pickle-specialketchup burger. "
				"I really do!\n\n"
			<< RESET;

}

/*------------------------*/
/*  Define info function  */
/*------------------------*/
void	Harl::info( void ) {

	std::cout << YELLOW
			<< "I cannot believe adding extra bacon costs more money. "
				"You didn’t put enough bacon in my burger! If you did, "
				"I wouldn’t be asking for more!\n\n"
			<< RESET;

}

/*---------------------------*/
/*  Define warning function  */
/*---------------------------*/
void	Harl::warning( void ) {

	std::cout << YELLOW
			<< "I think I deserve to have some extra bacon for free. "
				"I’ve been coming for years whereas you started working "
				"here since last month.\n\n"
			<< RESET;

}

/*-------------------------*/
/*  Define error function  */
/*-------------------------*/
void	Harl::error( void ) {

	std::cout << YELLOW
			<< "This is unacceptable! I want to speak to the manager now.\n\n"
			<< RESET;

}

/*----------------------------*/
/*  Define complain function  */
/*----------------------------*/
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

	std::cout << RED
			<< "Incorrect level: " << level
			<< RESET << std::endl << std::endl;

}
