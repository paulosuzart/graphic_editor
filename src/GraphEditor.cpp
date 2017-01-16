/*
 * GraphEditor.cpp
 *
 *  Created on: Jan 14, 2017
 *      Author: suzart
 */

#include "GraphEditor.h"

namespace paulosuzart {

GraphEditor::GraphEditor() {

}

GraphEditor::~GraphEditor() {

}

void GraphEditor::display() {
	for (size_t x = 0; x < a.shape()[0]; x++) {
		for (size_t y = 0; y < a.shape()[1]; y++) {
			std::cout << a[x][y];
		}
		cout << endl;
	}
}

void GraphEditor::setSize(unsigned int lines, unsigned int cols) {
	a.resize(boost::extents[lines][cols]);
}

void GraphEditor::setColor(unsigned int line, unsigned int col, char color) {
	drawRect(line, col, line, col, color);
}

void paulosuzart::GraphEditor::drawRect(unsigned int x1, unsigned int y1,
		unsigned int x2, unsigned int y2, char color) {

//	if (x1 == x2 && y1 == y2) {
//
//		a[x1][y1] = color;
//
//	} else {

		for (auto i = x1; i <= x2; i++) {
			for (auto j = y1; j <= y2; j++) {

				a[i][j] = color;
			}
		}
//	}
}
void GraphEditor::reset() {
	drawRect(0, 0, a.shape()[0] - 1, a.shape()[1] - 1, DEFAULT_COLOR);
}

char GraphEditor::getColor(unsigned int line, unsigned int col) {
	return a[line][col];
}

bool GraphEditor::isValidCoordinate(unsigned int line, unsigned int col) {
	if (line >= a.shape()[0] || col >= a.shape()[1])
		return false;
	return true;
}

}

