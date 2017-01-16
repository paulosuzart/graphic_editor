/*
 * DrawRectCommand.cpp
 *
 *  Created on: Jan 14, 2017
 *      Author: suzart
 */

#include "DrawRectCommand.h"

namespace paulosuzart {

DrawRectCommand::~DrawRectCommand() {

}

DrawRectCommand::DrawRectCommand(GraphEditor* editor, string command) :
		Command(editor, command) {
}

bool DrawRectCommand::doRun() {
	editor->drawRect(line1, col1, line2, col2, color);
	return true;
}

bool DrawRectCommand::parseCommand(vector<string> params) {
	if (params.size() != 6)
		return false;

	col1 = boost::lexical_cast<unsigned int>(params[1]) - 1;
	line1 = boost::lexical_cast<unsigned int>(params[2]) - 1;
	col2 = boost::lexical_cast<unsigned int>(params[3]) - 1;
	line2 = boost::lexical_cast<unsigned int>(params[4]) - 1;
	color = boost::lexical_cast<char>(params[5]);
	return true;

}

} /* namespace paulosuzart */
