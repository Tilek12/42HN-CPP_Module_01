/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:09:18 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/14 21:23:10 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

/*----------------------------*/
/*  HumanA Class constructor  */
/*----------------------------*/
HumanA::HumanA( const std::string& name, Weapon& weapon ) : name( name), weapon( weapon ) {}

/*--------------------------*/
/*  Define attack function  */
/*--------------------------*/
void	HumanA::attack( void ) const {

	std::cout << name << " attacks with their " << weapon.getType() << std::endl;

}
