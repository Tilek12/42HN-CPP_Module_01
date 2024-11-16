/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 21:32:16 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/16 11:32:28 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int	main( int argc, char **argv ) {

	if ( argc != 4 ) {
		printError( "\tERROR: Incorrect input" );
		print( "Usage: ./replace <fileName> <s1> <s2>" );
		print( "<fileName> - name of the file" );
		print( "<s1> - string to be replaced" );
		print( "<s2> - string to replace" );
		return 1;
	}

	std::string fileName = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if ( fileName.empty() || s1.empty() || s2.empty() ) {
		printError( "\tERROR: Arguments mustn't be empty" );
		return 1;
	}

	replace( fileName, s1, s2 );

	return 0;

}
