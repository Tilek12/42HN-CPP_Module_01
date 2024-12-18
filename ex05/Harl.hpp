/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:54:42 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/17 15:52:40 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

/*---------------*/
/*  Text colors  */
/*---------------*/
const std::string BLACK		= "\033[0;30m";
const std::string RED		= "\033[0;31m";
const std::string GREEN		= "\033[0;32m";
const std::string YELLOW	= "\033[0;33m";
const std::string BLUE		= "\033[0;34m";
const std::string PURPLE	= "\033[0;35m";
const std::string CYAN		= "\033[0;36m";
const std::string WHITE		= "\033[0;37m";
const std::string B_BLACK	= "\033[1;30m";
const std::string B_RED		= "\033[1;31m";
const std::string B_GREEN	= "\033[1;32m";
const std::string B_YELLOW	= "\033[1;33m";
const std::string B_BLUE	= "\033[1;34m";
const std::string B_PURPLE	= "\033[1;35m";
const std::string B_CYAN	= "\033[1;36m";
const std::string B_WHITE	= "\033[1;37m";
const std::string RESET		= "\033[0m";

/*---------------------*/
/*  Define Harl class  */
/*---------------------*/
class	Harl {

private:

	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );

public:

	void	complain( std::string level );

};

/*-------------*/
/*  Functions  */
/*-------------*/
void	printHarl( Harl& harl, std::string level );

#endif
