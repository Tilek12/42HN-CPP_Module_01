/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:38:01 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/13 13:50:47 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class	Weapon {

private:

	std::string	type;

public:

	Weapon ( const std::string& type );

	const std::string&	getType( void ) const;
	void				setType( const std::string& newType );

};

#endif
