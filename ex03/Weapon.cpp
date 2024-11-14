/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:45:39 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/14 21:19:42 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/*----------------------------*/
/*  Weapon Class constructor  */
/*----------------------------*/
Weapon::Weapon ( const std::string& type ) : type ( type ) {}

/*---------------------------*/
/*  Define getType function  */
/*---------------------------*/
const std::string&	Weapon::getType ( void ) const {

	return type;

}

/*---------------------------*/
/*  Define setType function  */
/*---------------------------*/
void	Weapon::setType ( const std::string& newType ) {

	type = newType;

}
