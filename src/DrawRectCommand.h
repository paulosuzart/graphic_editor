/*
 * DrawRectCommand.h
 *
 *  Created on: Jan 14, 2017
 *      Author: suzart
 */

#ifndef DRAWRECTCOMMAND_H_
#define DRAWRECTCOMMAND_H_

#include <boost/multi_array.hpp>
#include <boost/lexical_cast.hpp>

#include "Command.h"

using namespace std;

namespace paulosuzart {

class DrawRectCommand: public Command {
public:
	~DrawRectCommand();
	DrawRectCommand(GraphEditor *editor, string command);

protected:
	bool doRun() override;
	bool parseCommand(vector<string> params) override;

private:
	unsigned int line1 = 0 , col1 = 0 , line2 = 0 , col2 = 0;
	char color = DEFAULT_COLOR;
};

} /* namespace paulosuzart */

#endif /* DRAWRECTCOMMAND_H_ */
