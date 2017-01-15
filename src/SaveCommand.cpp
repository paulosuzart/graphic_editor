/*
 * SaveCommand.cpp
 *
 *  Created on: Jan 14, 2017
 *      Author: suzart
 */

#include "SaveCommand.h"


namespace paulosuzart {

} /* namespace paulosuzart */

paulosuzart::SaveCommand::SaveCommand(boost::multi_array<char, 2>* matriz,
		string fileName) :
		Command(matriz), fileName(fileName) {
}

paulosuzart::SaveCommand::~SaveCommand() {
}

bool paulosuzart::SaveCommand::run() {
	std::cout << fileName << std::endl;
	for (size_t x = 0; x < matriz->shape()[0]; x++) {
		for (size_t y = 0; y < matriz->shape()[1]; y++) {
			std::cout << (*matriz)[x][y] << " ";
		}
		cout << endl;
	}

	return true;
}
