/*
 * CommandFactory.cpp
 *
 *  Created on: Jan 14, 2017
 *      Author: suzart
 */

#include "CommandFactory.h"
#include "InitCommand.h"
#include "CleanCommand.h"
#include "DoColorCommand.h"
#include "VerticalSegmentCommand.h"
#include "HorizontalSegmentCommand.h"
#include "DrawRectCommand.h"
#include "FillCommand.h"
#include "UnknownCommand.h"
#include "SaveCommand.h"

namespace paulosuzart {

Command* CommandFactory::getCommand(string command,
		boost::multi_array<char, 2> *matriz) {
	vector<string> v; //TODO: Use lighter structure instead of vector
	split(v, command, is_space());

	try {
		if (v[0] == "I") {

			if (v.size() == 3) {
				auto columns = boost::lexical_cast<unsigned int>(v[1]);
				auto lines = boost::lexical_cast<unsigned int>(v[2]);
				return new InitCommand(matriz, lines, columns);
			}

		}

		if (v[0] == "C") {
			return new CleanCommand(matriz);
		}

		if (v[0] == "L") {
			if (v.size() == 4) {
				auto column = boost::lexical_cast<unsigned int>(v[1]);
				auto line = boost::lexical_cast<unsigned int>(v[2]);
				auto color = boost::lexical_cast<char>(v[3]);
				return new DoColorCommand(matriz, line, column, color);
			}
		}

		if (v[0] == "V") {
			if (v.size() == 5) {
				auto x = boost::lexical_cast<unsigned int>(v[1]);
				auto y1 = boost::lexical_cast<unsigned int>(v[2]);
				auto y2 = boost::lexical_cast<unsigned int>(v[3]);
				auto color = boost::lexical_cast<char>(v[4]);

				return new VerticalSegmentCommand(matriz, x, y1, y2, color);

			}
		}

		if (v[0] == "H") {
			if (v.size() == 5) {
				auto x1 = boost::lexical_cast<unsigned int>(v[1]);
				auto x2 = boost::lexical_cast<unsigned int>(v[2]);
				auto y = boost::lexical_cast<unsigned int>(v[3]);
				auto color = boost::lexical_cast<char>(v[4]);
				return new HorizontalSegmentCommand(matriz, x1, x2, y, color);
			}
		}

		if (v[0] == "K") {
			if (v.size() == 6) {
				auto col1 = boost::lexical_cast<unsigned int>(v[1]);
				auto line1 = boost::lexical_cast<unsigned int>(v[2]);
				auto col2 = boost::lexical_cast<unsigned int>(v[3]);
				auto line2 = boost::lexical_cast<unsigned int>(v[4]);
				auto color = boost::lexical_cast<char>(v[5]);
				return new DrawRectCommand(matriz, line1, col1, line2, col2, color);
			}

		}

		if (v[0] == "F") {
			auto col = boost::lexical_cast<unsigned int>(v[1]);
			auto line = boost::lexical_cast<unsigned int>(v[2]);
			auto color = boost::lexical_cast<char>(v[3]);

			return new FillCommand ( matriz, line, col, color );
		}

		if (v[0] == "S") {
			if (v.size() == 2) {
				string fileName = boost::lexical_cast<string>(v[1]);
				return new SaveCommand(matriz, fileName);
			}

		}
	} catch (const boost::bad_lexical_cast &e) {
		std::cerr << "Ignoring command '" << command << "' due to invalid input type" << std::endl;
	}
	return new UnknownCommand(command);
}

} /* namespace paulosuzart */
