/*
 * CommandFactory.cpp
 *
 *  Created on: Jan 14, 2017
 *      Author: suzart
 */

#include "CommandFactory.h"
#include "InitCommand.h"
#include "CleanCommand.h"
#include "DoColorCommand.h"
#include "VerticalSegmentCommand.h"
#include "HorizontalSegmentCommand.h"
#include "DrawRectCommand.h"
#include "FillCommand.h"
#include "UnknownCommand.h"
#include "SaveCommand.h"

namespace paulosuzart {

Command* CommandFactory::getCommand(char* command, GraphEditor *editor) {
	//vector<string> v; //TODO: Use lighter structure instead of vector
	//split(v, command, is_space());

	if (command[0] == 'I') {

		return new InitCommand(editor, command);
	}

	if (command[0] == 'C') {
		return new CleanCommand(editor, command);
	}

	if (command[0] == 'L') {
		return new DoColorCommand(editor, command);
	}

	if (command[0] == 'V') {

		return new VerticalSegmentCommand(editor, command);
	}

	if (command[0] == 'H') {
		return new HorizontalSegmentCommand(editor, command);
	}

	if (command[0] == 'K') {
		return new DrawRectCommand(editor, command);
	}

	if (command[0] == 'F') {
		return new FillCommand(editor, command);
	}

	if (command[0] == 'S') {
		return new SaveCommand(editor, command);
	}
	return new UnknownCommand(command);
}

} /* namespace paulosuzart */
