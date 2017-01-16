/*
 * Application.cpp
 *
 *  Created on: Jan 16, 2017
 *      Author: suzart
 */

#include "Application.h"

namespace paulosuzart {

Application::Application(GraphEditor* editor) :
		editor(editor) {

}
// TODO Auto-generated constructor stub
void Application::runCommand(std::string command) {
	std::unique_ptr<Command> cmd_ptr(getCommand(command));
	if (!cmd_ptr->run())
		std::cout << "Failed to run: "
				<< " pelase check provided matriz indexes" << std::endl;

}

Command* Application::getCommand(std::string command) {
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
void Application::run() {
	std::string command;
	while (std::getline(std::cin, command)) {
		// handles special case for X
		if (command == "X") {
			exit(0);
		}

		runCommand(command);
	}
}

} /* namespace paulosuzart */
