/*
 * DrawRectCommand.cpp
 *
 *  Created on: Jan 14, 2017
 *      Author: suzart
 */

#include "DrawRectCommand.h"

namespace paulosuzart {

DrawRectCommand::DrawRectCommand(boost::multi_array<char, 2> *matriz,
		unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2,
		char color) :
		Command(matriz) {
	this->x1 = x1 - 1;
	this->x2 = x2 - 1;
	this->y1 = y1 - 1;
	this->y2 = y2 - 1;
	this->color = color;

}

bool DrawRectCommand::run() {
	if (!isValidCoordinate(x1, y1) || !isValidCoordinate(x2, y2))
		return false;

	for (auto i = x1; i <= x2; i++) {
		for (auto j = y1; j <= y2; j++) {
			(*matriz)[i][j] = color;
		}
	}
	return true;
}

DrawRectCommand::~DrawRectCommand() {

}
} /* namespace paulosuzart */
