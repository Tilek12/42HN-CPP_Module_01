/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:49:15 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/12 16:32:40 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

/*----------------------------*/
/*  Zombie Class constructor  */
/*----------------------------*/
Zombie::Zombie( void ) : index(0) {}

/*---------------------------*/
/*  Zombie Class destructor  */
/*---------------------------*/
Zombie::~Zombie( void ) {

	Zombie::print( "is destroyed.", PURPLE );

}

/*---------------------------*/
/*  Define setName function  */
/*---------------------------*/
void	Zombie::setName( std::string name ) {

	this->name = name;

}

/*----------------------------*/
/*  Define setIndex function  */
/*----------------------------*/
void	Zombie::setIndex( int index ) {

	this->index = index;

}

/*----------------------------*/
/*  Define announce function  */
/*----------------------------*/
void	Zombie::announce( void ) const {

	Zombie::print( "BraiiiiiiinnnzzzZ...", GREEN );

}

/*-------------------------*/
/*  Define print function  */
/*-------------------------*/
void	Zombie::print( std::string message, std::string msgColor ) const {

	std::cout << YELLOW << name << " " << RESET
			<< CYAN << index << RESET
			<< YELLOW << ": " << RESET
			<< msgColor << message << RESET << std::endl;

}
