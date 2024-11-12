/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:49:36 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/12 14:42:55 by tkubanyc         ###   ########.fr       */
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

	void	setName( std::string name );
	void	announce( void );

};

Zombie*	zombieHorde( int N, std::string name );

#endif
