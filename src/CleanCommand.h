/*
 * CleanCommand.h
 *
 *  Created on: Jan 14, 2017
 *      Author: suzart
 */

#ifndef CLEANCOMMAND_H_
#define CLEANCOMMAND_H_

#include <boost/multi_array.hpp>
#include "Command.h"

namespace paulosuzart {

class CleanCommand : public Command {
public:
	CleanCommand(boost::multi_array<char, 2> *matriz);
	~CleanCommand();
	bool run();
};


} /* namespace paulosuzart */

#endif /* CLEANCOMMAND_H_ */
