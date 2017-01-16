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
	CleanCommand(GraphEditor *editor, string command);
	~CleanCommand();

protected:
	bool doRun() override;
};


} /* namespace paulosuzart */

#endif /* CLEANCOMMAND_H_ */
