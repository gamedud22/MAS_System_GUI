#include "MyForm.h"
#include <iostream>


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//the name is the system  is the basic enrty app
	MASSystemGUI::MyForm form;
	Application::Run(%form);
}


