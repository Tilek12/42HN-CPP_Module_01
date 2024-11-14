/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:18:23 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/14 21:20:29 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

/*---------------------------*/
/*  HumanB Class definition  */
/*---------------------------*/
class	HumanB {

private:

	std::string	name;
	Weapon*		weapon;

public:

	HumanB( const std::string& name );
	void	setWeapon( Weapon& weapon );
	void	attack( void ) const;

};


#endif
