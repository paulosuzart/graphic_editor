/*
 * DoColor.cpp
 *
 *  Created on: Jan 14, 2017
 *      Author: suzart
 */

#include "DoColorCommand.h"

using namespace std;

namespace paulosuzart {

DoColorCommand::DoColorCommand(boost::multi_array<char, 2>* matriz, unsigned  int x,
		unsigned  int y, char color) :
		Command(matriz) {
	this->x = x - 1;
	this->y = y - 1;
	this->color = color;
}

bool DoColorCommand::run() {
	if (!isValidCoordinate(x, y))
		return false;

	(*matriz)[x][y] = color;
	return true;
}

DoColorCommand::~DoColorCommand() {

}

} /* namespace paulosuzart */
