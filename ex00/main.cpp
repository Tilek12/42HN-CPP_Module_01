/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:50:56 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/16 17:45:22 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*-----------------*/
/*  Main function  */
/*-----------------*/
int	main ( void ) {

	// Create a zombie on the heap
	Zombie*	heapZombie = newZombie("HeapZombie");
	heapZombie->announce();
	delete heapZombie;

	// Create a zombie on the stack
	randomChump("StackZombie");

	return 0;

}
