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

	FillCommand(GraphEditor *editor, string command);
	~FillCommand();

protected:
	bool parseCommand(vector<string>& params) override;
	bool doRun() override;

private:
	unsigned int line = 0;
	unsigned int col = 0;
	char color = DEFAULT_COLOR;
	void changeColor(unsigned int c_line, unsigned int c_col, char originColor);
};

} /* namespace paulosuzart */

#endif /* FILLCOMMAND_H_ */
