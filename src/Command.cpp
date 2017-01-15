/*
 * Command.cpp
 *
 *  Created on: Jan 14, 2017
 *      Author: suzart
 */

#include "Command.h"
#include <iostream>

namespace paulosuzart {

Command::Command(boost::multi_array<char, 2> *matriz) :
		matriz(matriz) {
}

bool Command::isValidCoordinate(unsigned int x, unsigned int y) {
	if (x < 0 || x >= matriz->shape()[0] || y < 0
			|| y >= matriz->shape()[1] )
		return false;

	return true;
}

Command::~Command() {

}
} /* namespace paulosuzart */
