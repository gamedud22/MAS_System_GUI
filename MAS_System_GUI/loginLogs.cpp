#include "loginLogs.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void loginLogs(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//the name is the system  is the basic enrty app
	MASSystemGUI::loginLogs loginLogs;
	Application::Run(% loginLogs);
}
