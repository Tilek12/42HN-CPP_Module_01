/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:45:39 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/13 13:57:49 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon ( const std::string& type ) : type ( type ) {}

const std::string&	Weapon::getType ( void ) const {

	return type;

}

void	Weapon::setType ( const std::string& newType ) {

	type = newType;

}
