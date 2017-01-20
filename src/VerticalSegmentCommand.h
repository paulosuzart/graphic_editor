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
	VerticalSegmentCommand(GraphEditor *editor, string command);
	~VerticalSegmentCommand();

protected:
	bool doRun() override;
	bool parseCommand(vector<string>& params) override;

private:
	unsigned int col = 0;
	unsigned int line1 = 0;
	unsigned int line2 = 0;
	char color = DEFAULT_COLOR;
};

} /* namespace paulosuzart */

#endif /* VERTICALSEGMENTCOMMAND_H_ */

