/*
 * GraphEditor.cpp
 *
 *  Created on: Jan 14, 2017
 *      Author: suzart
 */

#include "GraphEditor.h"

namespace paulosuzart {

GraphEditor::GraphEditor() {
	// TODO Auto-generated constructor stub

}

GraphEditor::~GraphEditor() {

}

void GraphEditor::display() {
	cout << "Displaying multi array" << endl;
	for (size_t x = 0; x < a.shape()[0]; x++) {
		for (size_t y = 0; y < a.shape()[1]; y++) {
			std::cout << a[x][y] << " ";
		}
		cout << endl;
	}
}

void GraphEditor::takeCommand(string input) {
	matrix* a_p = &a;
	Command* command = factory.getCommand(input, a_p);
	if (!command->run())
		std::cout << "Failed to run: " << input
				<< " pelase check provided matriz indexes" << std::endl;
	delete command;
}

void GraphEditor::run() {
	string command;
	while (std::getline(std::cin, command)) {
		// handles special case for X
		if (command == "X") {
			exit(0);
		}
		takeCommand(command);
	}
}

} /* namespace paulosuzart */
