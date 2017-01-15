/*
 * HorizontalSegmentCommand.h
 *
 *  Created on: Jan 14, 2017
 *      Author: suzart
 */

#ifndef HORIZONTALSEGMENTCOMMAND_H_
#define HORIZONTALSEGMENTCOMMAND_H_

#include <boost/multi_array.hpp>
#include <boost/lexical_cast.hpp>
#include "Command.h"

using namespace std;

namespace paulosuzart {

class HorizontalSegmentCommand: public Command {
public:
	HorizontalSegmentCommand(boost::multi_array<char, 2> *matriz,
			unsigned int x1, unsigned int x2, unsigned int y, char color);
	~HorizontalSegmentCommand();
	bool run();

private:
	unsigned int x1, x2, y;
	char color;
};

} /* namespace paulosuzart */

#endif /* HORIZONTALSEGMENTCOMMAND_H_ */
