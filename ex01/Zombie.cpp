/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:49:15 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/12 14:47:35 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( void ) {}

Zombie::~Zombie( void ) {

	std::cout << "Zombie " << name << " is destroyed." << std::endl;

}

void	Zombie::setName( std::string name) {

	this->name = name;

}

void	Zombie::announce( void ) {

	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;

}
