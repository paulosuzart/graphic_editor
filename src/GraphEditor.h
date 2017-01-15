/*
 * GraphEditor.h
 *
 *  Created on: Jan 14, 2017
 *      Author: suzart
 */

#ifndef GRAPHEDITOR_H_
#define GRAPHEDITOR_H_

#include <iostream>
#include <boost/multi_array.hpp>

#include "CommandFactory.h"

using namespace boost::algorithm;
using namespace std;

namespace paulosuzart {
typedef boost::multi_array<char, 2> matrix;

class GraphEditor {
private:
	matrix a;
	CommandFactory factory;

public:
	void takeCommand(string input);
	void display();
	GraphEditor();
	virtual ~GraphEditor();
	void run();

};

} /* namespace paulosuzart */

#endif /* GRAPHEDITOR_H_ */
