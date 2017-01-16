/*
 * Command.cpp
 *
 *  Created on: Jan 14, 2017
 *      Author: suzart
 */

#include "Command.h"
#include <iostream>

using namespace std;

namespace paulosuzart {

Command::Command(GraphEditor* editor, string command) :
		editor(editor), command(command) {
}

bool Command::run() {
	try {

		vector<string> v;
		split(v, command, is_space());
		return parseCommand(v) && doRun();

	} catch (const boost::bad_lexical_cast &e) {
		std::cerr << "Ignoring command '" << command
				<< "' due to invalid input type" << std::endl;
		return true;
	}
}

bool Command::doRun() {
	return true;
}

bool Command::parseCommand(vector<string> params) {
	return true;
}

Command::~Command() {
}

} /* namespace paulosuzart */
