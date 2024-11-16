/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:44:14 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/16 11:32:32 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
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

/*-------------*/
/*  Functions  */
/*-------------*/
void		print( std::string message, const std::string& var = "" );
void		printError( std::string message, const std::string& var = "" );
void		replace( const std::string& fileName,
					const std::string& s1,
					const std::string& s2 );
std::string	readContent( const std::string& fileName );
std::string	makeReplacement( const std::string& content,
							const std::string& s1,
							const std::string& s2 );
bool		writeContent( const std::string& fileName, const std::string& content );

#endif