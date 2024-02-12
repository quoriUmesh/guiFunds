#include "Login.h"
#include"Sinup.h"
#include <vcclr.h>


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	// Instantiate and run the Sinup form
	guiFunds::Login^ loginForm = gcnew guiFunds::Login();
	Application::Run(loginForm);


	return 0;
}
