#include "Reset.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Reset(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//the name is the system  is the basic enrty app
	MASSystemGUI::Reset resetForm;
	Application::Run(% resetForm);
}