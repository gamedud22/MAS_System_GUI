#include "sensor.h"
#include "sensorLog.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void sensorForm(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//the name is the system  is the basic enrty app
	MASSystemGUI::sensorForm sensLog;
	Application::Run(% sensLog);
}
