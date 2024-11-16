/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 20:20:27 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/11/16 11:32:30 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string	readContent( const std::string& fileName ) {

	std::ifstream	inputFile( fileName );
	if ( !inputFile.is_open() ) {
		printError( "\tERROR: Couldn't open ", fileName );
		return "";
	}

	std::string content( (std::istreambuf_iterator<char>(inputFile)),
						std::istreambuf_iterator<char>() );
	inputFile.close();
	return content;

}

std::string	makeReplacement( const std::string& content,
							const std::string& s1,
							const std::string& s2 ) {

	if ( s1.empty() ) {
		printError( "\tERROR: The search string (s1) mustn't be empty" );
		return "";
	}

	std::string newContent = content;
	size_t	pos = 0;

	while ( (pos = newContent.find( s1, pos )) != std::string::npos ) {
		newContent.erase( pos, s1.length() );
		newContent.insert( pos, s2 );
		pos += s2.length();
	}

	return newContent;

}

bool	writeContent( const std::string& fileName,
					const std::string& content ) {

	std::ofstream	outputFile( fileName );
	if ( !outputFile.is_open() ) {
		printError( "\tERROR: Couldn't create ", fileName );
		return false;
	}

	outputFile << content;
	outputFile.close();
	return true;

}

void	replace( const std::string& fileName,
				const std::string& s1,
				const std::string& s2 ) {

	std::string	content = readContent( fileName );
	if ( content.empty() ) {
		return;
	}

	std::string	newContent = makeReplacement( content, s1, s2 );
	if ( newContent.empty() && !s1.empty() ) {
		return;
	}

	std::string	outputFileName = fileName + ".replace";
	if ( writeContent( outputFileName, newContent ) ) {
		print( "Replacement completed" );
		print( "The modified content was written to " , outputFileName );
	}

}
