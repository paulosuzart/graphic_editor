/*
 * GraphEditor.h
 *
 *  Created on: Jan 14, 2017
 *      Author: suzart
 */

#ifndef GRAPHEDITOR_H_
#define GRAPHEDITOR_H_

#include <iostream>
#include <boost/multi_array.hpp>

//#include "CommandFactory.h"

using namespace std;

namespace paulosuzart {
const char DEFAULT_COLOR = 'O';
typedef boost::multi_array<char, 2> matrix;

class GraphEditor {

public:
	void display();
	GraphEditor();
	virtual ~GraphEditor();
	void setSize(unsigned int lines, unsigned int cols);
	void setColor(unsigned int line, unsigned int col, char color);
	char getColor(unsigned int line, unsigned int col);
	void reset();
	void drawRect(unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2, char color);
	bool isValidCoordinate(unsigned int line, unsigned int col);

private:
	matrix a;
//	CommandFactory factory;

};

} /* namespace paulosuzart */

#endif /* GRAPHEDITOR_H_ */
