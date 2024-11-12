/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:49:15 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/12 16:27:27 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

/*----------------------------*/
/*  Zombie Class constructor  */
/*----------------------------*/
Zombie::Zombie( std::string name ) : name(name) {}

/*---------------------------*/
/*  Zombie Class destructor  */
/*---------------------------*/
Zombie::~Zombie( void ) {

	std::cout << BLUE << name << " has been destroyed." << RESET << std::endl;

}

/*----------------------------*/
/*  Define announce function  */
/*----------------------------*/
void	Zombie::announce( void ) {

	std::cout << YELLOW << name << ": BraiiiiiiinnnzzzZ..." << RESET << std::endl;

}
