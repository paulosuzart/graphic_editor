
#include <iostream>
#include "GraphEditor.h"
#include "Application.h"

using namespace std;
using namespace paulosuzart;

int main() {
	GraphEditor *editor = new GraphEditor();
	std::unique_ptr<Application> app_ptr (new Application(editor) );
	app_ptr->run();
	delete editor;
}
