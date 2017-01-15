/*
 * FillCommand.h
 *
 *  Created on: Jan 14, 2017
 *      Author: suzart
 */

#ifndef FILLCOMMAND_H_
#define FILLCOMMAND_H_

#include "Command.h"
#include <boost/multi_array.hpp>

namespace paulosuzart {

class FillCommand: public Command {
public:

	FillCommand(boost::multi_array<char, 2> *matriz, unsigned int x,
			unsigned int y, char color);
	bool run();
	~FillCommand();

private:
	unsigned int x;
	unsigned int y;
	char color;
	void changeColor(unsigned int x, unsigned int y, char originColor);
};

} /* namespace paulosuzart */

#endif /* FILLCOMMAND_H_ */
