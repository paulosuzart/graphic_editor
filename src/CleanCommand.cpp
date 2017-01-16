/*
 * CleanCommand.cpp
 *
 *  Created on: Jan 14, 2017
 *      Author: suzart
 */

#include "CleanCommand.h"

namespace paulosuzart {


CleanCommand::CleanCommand(GraphEditor *editor, string command) : Command(editor, command) {
}

CleanCommand::~CleanCommand() {

}

bool CleanCommand::doRun() {
	editor->reset();
	return true;
}

} /* namespace paulosuzart */
