#include "Login.h"
#include"Sinup.h"


using namespace System;
using namespace System::Windows::Forms;

int main(array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Instantiate and run the Sinup form
	guiFunds::Login^ loginForm = gcnew guiFunds::Login();
	Application::Run(loginForm);


	return 0;
}
