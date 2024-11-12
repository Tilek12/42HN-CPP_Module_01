/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:49:38 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/12 15:18:57 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name ) {

	Zombie* horde = new Zombie[N];

	for ( int i = 0; i < N; i++ ) {
		horde[i].setName(name);
		horde[i].setIndex(i);
	}

	return horde;

}
