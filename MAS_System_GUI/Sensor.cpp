#include "Sensor.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void SensorForm(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//the name is the system  is the basic enrty app
	MASSystemGUI::SensorForm sensor;
	Application::Run(%sensor);
}