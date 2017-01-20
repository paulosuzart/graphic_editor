/*
 * InitCommand.cpp
 *
 *  Created on: Jan 14, 2017
 *      Author: suzart
 */

#include "InitCommand.h"
#include "CleanCommand.h"

namespace paulosuzart {

InitCommand::InitCommand(GraphEditor *editor, string command) :
		Command(editor, command), lines(0), cols(0) {
}

InitCommand::~InitCommand() {
}

bool InitCommand::doRun() {
	editor->setSize(lines, cols);
	editor->reset();
	return true;
}

bool InitCommand::parseCommand(vector<string>& params) {
	if (params.size() != 3)
		return false;

	cols = boost::lexical_cast<unsigned int>(params[1]);
	lines = boost::lexical_cast<unsigned int>(params[2]);
	return true;

}

} /* namespace paulosuzart */

