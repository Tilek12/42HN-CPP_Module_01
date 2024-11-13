/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:48:17 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/13 15:53:05 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB( const std::string& name ) : name( name ), weapon( nullptr ) {}

void	HumanB::setWeapon( Weapon& weapon ) {

	this->weapon = &weapon;

}

void	HumanB::attack( void ) const {

	if ( weapon ) {
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	} else {
		std::cout << name << " has no weapon to attack" << std::endl;
	}

}
