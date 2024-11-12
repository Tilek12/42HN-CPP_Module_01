/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:49:36 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/12 16:31:15 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

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

/*---------------------------*/
/*  Zombie Class definition  */
/*---------------------------*/
class	Zombie {

private:

	std::string	name;
	int			index;

public:

	Zombie( void );
	~Zombie( void );

	void	setName( std::string name );
	void	setIndex( int index );
	void	announce( void ) const;
	void	print( std::string message, std::string msgColor ) const;

};

/*-------------*/
/*  Functions  */
/*-------------*/
Zombie*	zombieHorde( int N, std::string name );

#endif
