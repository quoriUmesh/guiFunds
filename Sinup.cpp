#include "Sinup.h"
#include"Login.h"
#include <msclr/marshal_cppstd.h> // Include for string conversion

using namespace guiFunds;




System::Void Sinup::sinupButton_Click(System::Object^ sender, System::EventArgs^ e){


	// Display a message box to confirm exit
	System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to exit?", "Exit Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

	// Check the user's response
	if (result == System::Windows::Forms::DialogResult::Yes) {
		// Exit the application
		Application::Exit();
	}

			
		
			std::string username = msclr::interop::marshal_as<std::string>(this->usernameTextBox->Text);
		    Registration registers;
			registers.setUsername(username);

			std::string password = msclr::interop::marshal_as<std::string>(this->passwordTextBox->Text);
			registers.setPassword(password);


}


System::Void guiFunds::Sinup::sinupLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	// Close the current form
	this->Close();

	// Create an instance of the LoginForm
	guiFunds::Login^ loginForm = gcnew guiFunds::Login();

	// Show the LoginForm
	loginForm->Show();
}

