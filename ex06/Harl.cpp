/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 16:12:51 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/17 19:06:50 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/*-------------------------*/
/*  Define debug function  */
/*-------------------------*/
void	Harl::debug( void ) {

	std::cout << CYAN << "[ DEBUG ]\n" << RESET
			<< YELLOW
			<< "I love having extra bacon for my "
				"7XL-double-cheese-triple-pickle-specialketchup burger.\n"
				"I really do!\n\n"
			<< RESET;

}

/*------------------------*/
/*  Define info function  */
/*------------------------*/
void	Harl::info( void ) {

	std::cout << CYAN << "[ INFO ]\n" << RESET
			<< YELLOW
			<< "I cannot believe adding extra bacon costs more money.\n"
				"You didn’t put enough bacon in my burger!\n"
				"If you did, I wouldn’t be asking for more!\n\n"
			<< RESET;

}

/*---------------------------*/
/*  Define warning function  */
/*---------------------------*/
void	Harl::warning( void ) {

	std::cout << CYAN << "[ WARNING ]\n" << RESET
			<< YELLOW
			<< "I think I deserve to have some extra bacon for free.\n"
				"I’ve been coming for years whereas you started working "
				"here since last month.\n\n"
			<< RESET;

}

/*-------------------------*/
/*  Define error function  */
/*-------------------------*/
void	Harl::error( void ) {

	std::cout << CYAN << "[ ERROR ]\n" << RESET
			<< YELLOW
			<< "This is unacceptable! I want to speak to the manager now.\n\n"
			<< RESET;

}

/*---------------------------*/
/*  Define unknown function  */
/*---------------------------*/
void	Harl::unknown( void ) {

	std::cout << BLUE
			<< "[ Probably complaining about insignificant problems ]\n\n"
			<< RESET;

}

/*-------------------------------*/
/*  Define getLogLevel function  */
/*-------------------------------*/
Harl::LogLevel	Harl::getLogLevel( const std::string& level ) {

	if ( level == "DEBUG" ) return DEBUG;
	if ( level == "INFO" ) return INFO;
	if ( level == "WARNING" ) return WARNING;
	if ( level == "ERROR" ) return ERROR;

	return UNKNOWN;

}

/*----------------------------*/
/*  Define complain function  */
/*----------------------------*/
void	Harl::complain( const std::string& level ) {

	LogLevel logLevel = getLogLevel( level );

	switch ( logLevel ) {
		case DEBUG:
			debug();
			[[fallthrough]];
		case INFO:
			info();
			[[fallthrough]];
		case WARNING:
			warning();
			[[fallthrough]];
		case ERROR:
			error();
			break;
		case UNKNOWN:
			unknown();
			break;
		}

}
