#include "alarmLog.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void alarmLog(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//the name is the system  is the basic enrty app
	MASSystemGUI::alarmLog Logs;
	Application::Run(% Logs);
}
