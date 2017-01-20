/*
 * FillCommand.cpp
 *
 *  Created on: Jan 14, 2017
 *      Author: suzart
 */

#include "FillCommand.h"
#include <boost/multi_array.hpp>
#include <iostream>

using namespace std;
namespace paulosuzart {

void FillCommand::changeColor(unsigned int c_line, unsigned int c_col,
		char originColor) {

	if(!editor->isValidCoordinate(c_line, c_col))
		return;

	if (editor->getColor(c_line, c_col) == originColor) {
		editor->setColor(c_line, c_col, color);
		changeColor(c_line + 1, c_col, originColor);
		changeColor(c_line - 1, c_col, originColor);
		changeColor(c_line, c_col + 1, originColor);
		changeColor(c_line, c_col - 1, originColor);
	}
}

bool FillCommand::doRun() {
	changeColor(line, col, editor->getColor(line, col));
	return true;
}

FillCommand::FillCommand(GraphEditor* editor, string command) :
		Command(editor, command) {
}

FillCommand::~FillCommand() {

}

bool FillCommand::parseCommand(vector<string>& params) {
	if (params.size() != 4)
		return false;

	col = boost::lexical_cast<unsigned int>(params[1]) - 1;
	line = boost::lexical_cast<unsigned int>(params[2]) - 1;
	color = boost::lexical_cast<char>(params[3]);
	return true;
}

} /* namespace paulosuzart */
