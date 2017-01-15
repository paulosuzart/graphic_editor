/*
 * Command.h
 *
 *  Created on: Jan 14, 2017
 *      Author: suzart
 */

#ifndef COMMAND_H_
#define COMMAND_H_

#include <boost/multi_array.hpp>

namespace paulosuzart {

class Command {
public:
	Command(boost::multi_array<char, 2> *matriz);
	virtual bool run() =0;
	virtual ~Command();
protected:
	bool isValidCoordinate(unsigned int x, unsigned int y);
	boost::multi_array<char, 2>* matriz;
};

} /* namespace paulosuzart */

#endif /* COMMAND_H_ */
