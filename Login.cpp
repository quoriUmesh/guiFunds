#include "Login.h"
#include"Sinup.h"


using namespace System;
using namespace System::Windows::Forms;

System::Void guiFunds::Login::sinupLabel_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Hide();
	guiFunds::Sinup^ signupForm = gcnew guiFunds::Sinup();
	// Show the Sinup form
	signupForm->Show();
}
