/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:54:27 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/12 16:11:16 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main( void ) {

	int		N = 10;
	Zombie*	horde = zombieHorde( N, "Zombie Z" );

	for ( int i = 0; i < N; i++ ) {
		horde[i].announce();
	}

	std::cout << std::endl;

	delete[] horde;

	return 0;

}
