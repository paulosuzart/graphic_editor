/*
 * CommandFactory.h
 *
 *  Created on: Jan 14, 2017
 *      Author: suzart
 */

#ifndef COMMANDFACTORY_H_
#define COMMANDFACTORY_H_

#include "Command.h"
#include <boost/algorithm/string.hpp>
#include <boost/lexical_cast.hpp>

using namespace boost::algorithm;
using namespace std;

namespace paulosuzart {

class CommandFactory {
public:
	Command* getCommand(char* command, GraphEditor *editor);
};

} /* namespace paulosuzart */

#endif /* COMMANDFACTORY_H_ */
