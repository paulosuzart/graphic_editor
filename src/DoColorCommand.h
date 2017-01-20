/*
 * DoColor.h
 *
 *  Created on: Jan 14, 2017
 *      Author: suzart
 */

#ifndef DOCOLORCOMMAND_H_
#define DOCOLORCOMMAND_H_

#include <vector>
#include <boost/multi_array.hpp>
#include <boost/lexical_cast.hpp>

#include "Command.h"

using namespace std;

namespace paulosuzart {

class DoColorCommand: public Command {
public:

	DoColorCommand(GraphEditor *editor, string command);
	~DoColorCommand();

protected:
	bool doRun() override;
	bool parseCommand(vector<string>& params) override;


private:
	unsigned int line = 0;
	unsigned int col = 0 ;
	char color = DEFAULT_COLOR;
};

} /* namespace paulosuzart */

#endif /* DOCOLORCOMMAND_H_ */
