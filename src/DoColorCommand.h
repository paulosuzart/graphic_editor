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
	~DoColorCommand();
	DoColorCommand(boost::multi_array<char, 2>* matriz, unsigned  int x, unsigned  int y,
			char color);
	bool run();

private:
	unsigned int x = 0;
	unsigned int y = 0 ;
	char color = '0';
};

} /* namespace paulosuzart */

#endif /* DOCOLORCOMMAND_H_ */
