#include "PopupForm.h"
#include <Windows.h>
#include <sqlext.h>
#include <string>
#include <sqltypes.h>
#include <sql.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Popup(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//the name is the system  is the basic enrty app
	MASSystemGUI::PopupForm pop;
	Application::Run(%pop);
}