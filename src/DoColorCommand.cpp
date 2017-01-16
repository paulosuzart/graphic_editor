/*
 * DoColor.cpp
 *
 *  Created on: Jan 14, 2017
 *      Author: suzart
 */

#include "DoColorCommand.h"

using namespace std;

namespace paulosuzart {

DoColorCommand::DoColorCommand(GraphEditor* editor, string command) :
		Command(editor, command) {
}

DoColorCommand::~DoColorCommand() {

}

bool DoColorCommand::doRun() {
	editor->setColor(line, col, color);
	return true;
}

bool DoColorCommand::parseCommand(vector<string> params) {

	if (params.size() != 4)
		return false;

	col = boost::lexical_cast<unsigned int>(params[1]) - 1;
	line = boost::lexical_cast<unsigned int>(params[2]) - 1;
	color = boost::lexical_cast<char>(params[3]);
	return true;
}

} /* namespace paulosuzart */
