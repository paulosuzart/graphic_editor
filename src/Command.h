/*
 * Command.h
 *
 *  Created on: Jan 14, 2017
 *      Author: suzart
 */

#ifndef COMMAND_H_
#define COMMAND_H_

#include <boost/multi_array.hpp>
#include "GraphEditor.h"
#include <boost/algorithm/string.hpp>
#include <boost/lexical_cast.hpp>
using namespace boost::algorithm;

namespace paulosuzart {

class Command {

public:
	Command(GraphEditor *editor, string command);
	virtual ~Command();
	virtual bool run();

protected:
	virtual bool parseCommand(vector<string>& params);
	virtual bool doRun();
	GraphEditor *editor;

private:
	string command;
};

} /* namespace paulosuzart */

#endif /* COMMAND_H_ */
