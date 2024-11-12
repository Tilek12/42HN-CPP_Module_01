/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:49:36 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/12 16:27:26 by tkubanyc         ###   ########.fr       */
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

public:

	Zombie( std::string name );
	~Zombie( void );

	void announce( void );

};

/*-------------*/
/*  Functions  */
/*-------------*/
Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
