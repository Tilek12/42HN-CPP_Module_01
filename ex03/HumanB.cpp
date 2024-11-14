/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:48:17 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/14 21:21:51 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

/*----------------------------*/
/*  Zombie Class constructor  */
/*----------------------------*/
HumanB::HumanB( const std::string& name ) : name( name ), weapon( nullptr ) {}

/*-----------------------------*/
/*  Define setWeapon function  */
/*-----------------------------*/
void	HumanB::setWeapon( Weapon& weapon ) {

	this->weapon = &weapon;

}

/*--------------------------*/
/*  Define attack function  */
/*--------------------------*/
void	HumanB::attack( void ) const {

	if ( weapon ) {
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	} else {
		std::cout << name << " has no weapon to attack" << std::endl;
	}

}
