/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:49:36 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/12 14:12:49 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class	Zombie {

private:

	std::string	name;

public:

	Zombie( std::string name );
	~Zombie( void );

	void announce( void );

};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
