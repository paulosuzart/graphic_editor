/*
 * SaveCommand.h
 *
 *  Created on: Jan 14, 2017
 *      Author: suzart
 */

#ifndef SAVECOMMAND_H_
#define SAVECOMMAND_H_

#include <iostream>

#include "Command.h"
#include <boost/multi_array.hpp>

using namespace std;

namespace paulosuzart {

class SaveCommand: public Command {
public:
	SaveCommand(boost::multi_array<char, 2>* matriz, string fileName);
	~SaveCommand();
	bool run();

private:
	string fileName;
};

} /* namespace paulosuzart */

#endif /* SAVECOMMAND_H_ */
