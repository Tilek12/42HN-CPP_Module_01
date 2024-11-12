/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:54:27 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/12 15:08:39 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main( void ) {

	int		N = 10;
	Zombie*	horde = zombieHorde(N, "Zombie Z");

	for ( int i = 0; i < N; i++ ) {
		std::cout << i << " ";
		horde[i].announce();
	}

	delete[] horde;

	return 0;

}
