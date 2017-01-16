/*
 * Application.h
 *
 *  Created on: Jan 16, 2017
 *      Author: suzart
 */

#ifndef APPLICATION_H_
#define APPLICATION_H_

#include "GraphEditor.h"
#include "Command.h"
#include "InitCommand.h"
#include "CleanCommand.h"
#include "DoColorCommand.h"
#include "DrawRectCommand.h"
#include "FillCommand.h"
#include "HorizontalSegmentCommand.h"
#include "VerticalSegmentCommand.h"
#include "UnknownCommand.h"
#include "SaveCommand.h"

namespace paulosuzart {

class Application {
public:
	Application(GraphEditor* editor);
	void run();
	Command* getCommand(std::string command);
	void runCommand(std::string command);
private:
	GraphEditor* editor;

};

} /* namespace paulosuzart */

#endif /* APPLICATION_H_ */
