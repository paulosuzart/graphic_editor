/*
 * UnknownCommand.h
 *
 *  Created on: Jan 14, 2017
 *      Author: suzart
 */

#ifndef UNKNOWNCOMMAND_H_
#define UNKNOWNCOMMAND_H_

#include "Command.h"
using namespace std;

namespace paulosuzart {

class UnknownCommand: public Command {
public:
	UnknownCommand(string command);
	~UnknownCommand();

private:
	string command;

};

} /* namespace paulosuzart */

#endif /* UNKNOWNCOMMAND_H_ */
