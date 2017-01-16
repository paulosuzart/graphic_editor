/*
 * VerticalSegmentCommand.cpp
 *
 *  Created on: Jan 14, 2017
 *      Author: suzart
 */

#include "VerticalSegmentCommand.h"

namespace paulosuzart {

VerticalSegmentCommand::VerticalSegmentCommand(GraphEditor* editor,
		string command) :
		Command(editor, command) {
}

VerticalSegmentCommand::~VerticalSegmentCommand() {
}

bool VerticalSegmentCommand::doRun() {
	editor->drawRect(line1, col, line2, col, color);
	return true;
}

bool VerticalSegmentCommand::parseCommand(vector<string> params) {
	if (params.size() != 5)
		return false;
	col = boost::lexical_cast<unsigned int>(params[1]) - 1;
	line1 = boost::lexical_cast<unsigned int>(params[2]) - 1;
	line2 = boost::lexical_cast<unsigned int>(params[3]) - 1;
	color = boost::lexical_cast<char>(params[4]);
	return true;
}

} /* namespace paulosuzart */
