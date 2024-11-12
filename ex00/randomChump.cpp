/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:23:22 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/12 16:27:29 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*---------------------------------------*/
/*  Create a Zombie on the stack memory  */
/*---------------------------------------*/
void	randomChump( std::string name ) {

	Zombie	zombie( name );
	zombie.announce();

}
