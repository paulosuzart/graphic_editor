/*
 * VerticalSegmentCommand.h
 *
 *  Created on: Jan 14, 2017
 *      Author: suzart
 */

#ifndef VERTICALSEGMENTCOMMAND_H_
#define VERTICALSEGMENTCOMMAND_H_

#include <boost/multi_array.hpp>
#include <boost/lexical_cast.hpp>
#include "Command.h"

using namespace std;

namespace paulosuzart {

class VerticalSegmentCommand: public Command {
public:
	VerticalSegmentCommand(boost::multi_array<char, 2>* matriz, unsigned int x,
			unsigned int y1, unsigned int y2, char color);
	~VerticalSegmentCommand();
	bool run();

private:
	unsigned int x;
	unsigned int y1;
	unsigned int y2;
	char color;

};

} /* namespace paulosuzart */

#endif /* VERTICALSEGMENTCOMMAND_H_ */
