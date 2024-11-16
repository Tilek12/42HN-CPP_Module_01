/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:54:42 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/16 14:09:59 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class	Harl {

private:

	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );

public:

	void	complain( std::string level );

};

#endif
