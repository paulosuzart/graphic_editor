/*
 * GraphEditor.h
 *
 *  Created on: Jan 14, 2017
 *      Author: suzart
 */

#ifndef GRAPHEDITOR_H_
#define GRAPHEDITOR_H_

#include <iostream>
#include <vector>
#include <boost/multi_array.hpp>
#include <boost/algorithm/string.hpp>
#include <boost/lexical_cast.hpp>

#include "InitCommand.h"
#include "CleanCommand.h"
#include "DoColorCommand.h"
#include "VerticalSegmentCommand.h"
#include "HorizontalSegmentCommand.h"
#include "DrawRectCommand.h"
#include "FillCommand.h"
#include "CommandFactory.h"

using namespace boost::algorithm;
using namespace std;

namespace paulosuzart {
typedef boost::multi_array<char, 2> matrix;

class GraphEditor {
private:
	matrix a;
	CommandFactory factory;

public:
	void takeCommand(string input);
	void display();
	GraphEditor();
	virtual ~GraphEditor();
	void run();

};

} /* namespace paulosuzart */

#endif /* GRAPHEDITOR_H_ */
