/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:00:46 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/13 14:07:31 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA {

private:

	std::string	name;
	Weapon&		weapon;

public:

	HumanA( std::string& name, Weapon& weapon );

	void	attack( void ) const;

};

#endif
