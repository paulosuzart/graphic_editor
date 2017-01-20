/*
 * InitCommand.h
 *
 *  Created on: Jan 14, 2017
 *      Author: suzart
 */

#ifndef INITCOMMAND_H_
#define INITCOMMAND_H_

#include <iostream>
#include <boost/multi_array.hpp>
#include "Command.h"

using namespace std;

namespace paulosuzart {

class InitCommand: public Command {
public:
	InitCommand(GraphEditor *editor, string command);
	~InitCommand();

protected:
	bool parseCommand(vector<string>& params) override;
	bool doRun() override;

private:
	unsigned int lines;
	unsigned int cols;
};

} /* namespace paulosuzart */

#endif /* INITCOMMAND_H_ */
