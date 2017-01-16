/*
 * SaveCommand.cpp
 *
 *  Created on: Jan 14, 2017
 *      Author: suzart
 */

#include "SaveCommand.h"

namespace paulosuzart {

paulosuzart::SaveCommand::~SaveCommand() {
}

bool SaveCommand::doRun() {
	std::cout << fileName << std::endl;
	editor->display();
	return true;
}

SaveCommand::SaveCommand(GraphEditor* editor, string command) :
		Command(editor, command) {
}

bool SaveCommand::parseCommand(vector<string> params) {
	if (params.size() != 2)
		return false;
	fileName = boost::lexical_cast<string>(params[1]);
	return true;
}

}

