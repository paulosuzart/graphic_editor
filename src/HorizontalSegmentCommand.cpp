/*
 * HorizontalSegmentCommand.cpp
 *
 *  Created on: Jan 14, 2017
 *      Author: suzart
 */

#include "HorizontalSegmentCommand.h"
#include <iostream>

namespace paulosuzart {

HorizontalSegmentCommand::HorizontalSegmentCommand(
		boost::multi_array<char, 2> *matriz, unsigned int x1, unsigned int x2,
		unsigned int y, char color) :
		Command(matriz) {
	this->x1 = x1 - 1;
	this->x2 = x2 - 1;
	this->y = y - y;
	this->color = color;
}

bool HorizontalSegmentCommand::run() {
	if (!isValidCoordinate(y, x1) || !isValidCoordinate(y, x2))
		return false;

	for (auto i = x1; i <= x2; i++) {
		(*matriz)[y][i] = color;
	}
	return true;
}
HorizontalSegmentCommand::~HorizontalSegmentCommand() {

}

}
/* namespace paulosuzart */
