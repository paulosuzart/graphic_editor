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
	HorizontalSegmentCommand(GraphEditor *editor, string command);
	~HorizontalSegmentCommand();

protected:
	bool doRun() override;
	bool parseCommand(vector<string> params) override;

private:
	unsigned int col1 = 0, col2 = 0 , line = 0;
	char color = DEFAULT_COLOR;
};

} /* namespace paulosuzart */

#endif /* HORIZONTALSEGMENTCOMMAND_H_ */
