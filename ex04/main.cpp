/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 21:32:16 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/15 20:23:01 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colors.hpp"
#include <iostream>
#include <fstream>

void	printError( std::string message, const std::string& var ) {

	std::cerr << RED << message;

	if ( !var.empty() ) {
		std::cerr << var;
	}

	std::cerr << RESET << std::endl << std::endl;

}

void	replace( const std::string& fileName, const std::string& s1, std::string& s2 ) {
	// Open the input file
	std::ifstream inputFile( fileName );
	if (!inputFile.is_open()) {
		printError( "ERROR: Couldn't open ", fileName );
		return;
	}

	// Read the entire content of the file into a string
	std::string content( (std::istreambuf_iterator<char>(inputFile)),
						std::istreambuf_iterator<char>() );
	inputFile.close();

	// Perform the string replacement without using std::string::replace
	size_t pos = 0;
	while ( (pos = content.find(s1, pos)) != std::string::npos ) {
		content.erase( pos, s1.length() );
		content.insert( pos, s2 );
		pos += s2.length();
	}

	// Create the output file
	std::string outputFileName = fileName + ".replace";
	std::ofstream outputFile( outputFileName );
	if ( !outputFile.is_open() ) {
		printError( "ERROR: Couldn't create ", outputFileName);
		return;
	}

	// Write the modified content to the output file
	outputFile << content;
	outputFile.close();

	std::cout << YELLOW
			<< "Replacement completed.\nThe modified content was written to "
			<< outputFileName
			<< RESET << std::endl << std::endl;

}

int	main( int argc, char **argv ) {

	if ( argc != 4 ) {
		printError( "Usage: ./replace <fileName> <s1> <s2>", "" );
		return 1;
	}

	std::string fileName = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if ( fileName.empty() || s1.empty() || s2.empty() ) {
		printError( "ERROR: Arguments mustn't be empty", "" );
		return 1;
	}

	replace( fileName, s1, s2 );

	return 0;

}
