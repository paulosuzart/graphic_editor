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
	DrawRectCommand(boost::multi_array<char, 2> *matriz, unsigned int x1,
			unsigned int y1, unsigned int x2, unsigned int y2, char color);
	bool run();

private:
	unsigned int x1, y1, x2, y2;
	char color;
};

} /* namespace paulosuzart */

#endif /* DRAWRECTCOMMAND_H_ */
