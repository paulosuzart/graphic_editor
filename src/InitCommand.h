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
	InitCommand(boost::multi_array<char, 2>* matriz, unsigned int x,
			unsigned int y);
	~InitCommand();
	bool run();

private:
	int x;
	int y;
};

} /* namespace paulosuzart */

#endif /* INITCOMMAND_H_ */
