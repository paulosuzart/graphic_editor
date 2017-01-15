/*
 * FillCommand.cpp
 *
 *  Created on: Jan 14, 2017
 *      Author: suzart
 */

#include "FillCommand.h"
#include <boost/multi_array.hpp>
#include <iostream>

using namespace std;
namespace paulosuzart {

FillCommand::FillCommand(boost::multi_array<char, 2> *matriz, unsigned int x, unsigned int y,
		char color) :
		x(x -1 ), y(y -1 ), color(color), Command(matriz) {
}

void FillCommand::changeColor(unsigned int n_x, unsigned int n_y, char originColor) {
	if (!isValidCoordinate(n_x, n_y))
		return;

	if ((*matriz)[n_x][n_y] == originColor) {
		(*matriz)[n_x][n_y] = color;
		changeColor(n_x + 1, n_y, originColor);
		changeColor(n_x - 1, n_y, originColor);
		changeColor(n_x, n_y + 1, originColor);
		changeColor(n_x, n_y - 1, originColor);
	}
}

bool FillCommand::run() {
	changeColor(x, y, (*matriz)[x][y]);
	return true;
}

FillCommand::~FillCommand() {

}
} /* namespace paulosuzart */
