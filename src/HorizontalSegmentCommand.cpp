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
		x1(x1 - 1), x2(x2 - 1), y(y - 1), color(color), Command(matriz) {
}

bool HorizontalSegmentCommand::run() {
	std::cout << "tebtar escrever entre as colunas " << x1 << " e " << x2
			<< " linhas " << y << std::endl;
	if (!isValidCoordinate(y, x1) || !isValidCoordinate(y, x2))
		return false;
	std::cout << "FOI " << x1 << " e " << x2 << std::endl;
	for (auto i = x1; i <= x2; i++) {
		(*matriz)[y][i] = color;
	}
	return true;
}
HorizontalSegmentCommand::~HorizontalSegmentCommand() {

}

}
/* namespace paulosuzart */
