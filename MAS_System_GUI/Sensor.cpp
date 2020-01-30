#include "Sensor.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void SensorForm(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//the name is the system  is the basic enrty app
	//this is a test edit 
	//this is a test edit 
	MASSystemGUI::Sensor sensor;
	Application::Run(%sensor);
}

void closefunction()
{
	MASSystemGUI::Sensor sensor;
	sensor.Hide();
	sensor.Close();
}

void MASSystemGUI::Sensor::DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e)
{
	throw gcnew System::NotImplementedException();
}

void MASSystemGUI::Sensor::RunWorkerCompleted(System::Object^ sender, System::ComponentModel::RunWorkerCompletedEventArgs^ e)
{
	throw gcnew System::NotImplementedException();
}
