/*
 * VerticalSegmentCommand.cpp
 *
 *  Created on: Jan 14, 2017
 *      Author: suzart
 */

#include "VerticalSegmentCommand.h"

namespace paulosuzart {

VerticalSegmentCommand::VerticalSegmentCommand(
		boost::multi_array<char, 2>* matriz, unsigned int x, unsigned int y1, unsigned int y2, char color) :
		x(x - 1), y1(y1 - 1), y2(y2 - 1), color(color), Command(matriz) {
}

bool VerticalSegmentCommand::run() {
	if (!isValidCoordinate(y1, x) || !isValidCoordinate(y2, x))
		return false;

	for (auto i = y1; i <= y2; i++) {
		(*matriz)[i][x] = color;
	}
	return true;
}

VerticalSegmentCommand::~VerticalSegmentCommand() {

}

} /* namespace paulosuzart */
