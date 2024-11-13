/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:09:18 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/13 14:15:35 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA( const std::string& name, Weapon& weapon ) : name( name), weapon( weapon ) {}

void	HumanA::attack( void ) const {

	std::cout << name << " attacks with their " << weapon.getType() << std::endl;

}
