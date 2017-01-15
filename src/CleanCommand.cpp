/*
 * CleanCommand.cpp
 *
 *  Created on: Jan 14, 2017
 *      Author: suzart
 */

#include "CleanCommand.h"

namespace paulosuzart {

CleanCommand::CleanCommand(boost::multi_array<char, 2> *matriz) :
		Command(matriz) {
}

bool CleanCommand::run() {
	for (size_t x = 0; x < matriz->shape()[0]; x++) {
		for (size_t y = 0; y < matriz->shape()[1]; y++) {
			(*matriz)[x][y] = '0';
		}
	}
	return true;
}

CleanCommand::~CleanCommand() {

}

} /* namespace paulosuzart */
