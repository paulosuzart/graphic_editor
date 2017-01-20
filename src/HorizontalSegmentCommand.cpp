/*
 * HorizontalSegmentCommand.cpp
 *
 *  Created on: Jan 14, 2017
 *      Author: suzart
 */

#include "HorizontalSegmentCommand.h"
#include <iostream>

namespace paulosuzart {

HorizontalSegmentCommand::~HorizontalSegmentCommand() {

}

HorizontalSegmentCommand::HorizontalSegmentCommand(GraphEditor* editor,
		string command) :
		Command(editor, command) {
}

bool HorizontalSegmentCommand::doRun() {
	editor->drawRect(line, col1, line, col2, color);
	return true;
}

bool HorizontalSegmentCommand::parseCommand(vector<string>& params) {
	if (params.size() != 5)
		return false;

	col1 = boost::lexical_cast<unsigned int>(params[1]) - 1;
	col2 = boost::lexical_cast<unsigned int>(params[2]) - 1;
	line = boost::lexical_cast<unsigned int>(params[3]) - 1;
	color = boost::lexical_cast<char>(params[4]);
	return true;
}

}

/* namespace paulosuzart */
