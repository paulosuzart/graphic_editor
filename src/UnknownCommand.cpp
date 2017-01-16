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
		Command(NULL, command) {
}

UnknownCommand::~UnknownCommand() {

}
} /* namespace paulosuzart */
