/*
 * UnknownCommand.cpp
 *
 *  Created on: Jan 14, 2017
 *      Author: suzart
 */

#include "UnknownCommand.h"
#include <iostream>

using namespace std;

namespace paulosuzart {
UnknownCommand::UnknownCommand(string command) :
		Command(NULL), command(command) {
}

bool UnknownCommand::run() {
	//cout << "Unknown command: " << command << endl;
	return true;
}

UnknownCommand::~UnknownCommand() {

}
} /* namespace paulosuzart */
