/*
 * InitCommand.cpp
 *
 *  Created on: Jan 14, 2017
 *      Author: suzart
 */

#include "InitCommand.h"
#include "CleanCommand.h"

namespace paulosuzart {

InitCommand::InitCommand(boost::multi_array<char, 2> *matriz, unsigned int x,
		unsigned int y) :
		Command(matriz), x(x), y(y) {
}

bool InitCommand::run() {
	matriz->resize(boost::extents[x][y]);
	return CleanCommand(matriz).run();
}

InitCommand::~InitCommand() {

}

} /* namespace paulosuzart */
