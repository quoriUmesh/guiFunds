#include "Sinup.h"
#include"Login.h"

System::Void guiFunds::Sinup::sinupLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	// Close the current form
	this->Close();

	// Create an instance of the LoginForm
	guiFunds::Login^ loginForm = gcnew guiFunds::Login();

	// Show the LoginForm
	loginForm->Show();
}

