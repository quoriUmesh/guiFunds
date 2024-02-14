#include "Sinup.h"
#include"Login.h"
#include <msclr/marshal_cppstd.h> // Include for string conversion

using namespace guiFunds;






System::Void Sinup::sinupButton_Click(System::Object^ sender, System::EventArgs^ e) {
    Registration registers;

    try {
        std::string name = msclr::interop::marshal_as<std::string>(this->nameTextbox->Text);
        registers.set_name(name);

        std::string username = msclr::interop::marshal_as<std::string>(this->usernameTextBox->Text);
        registers.setUsername(username);

        std::string password = msclr::interop::marshal_as<std::string>(this->passwordTextBox->Text);
        registers.setPassword(password);

        std::string email = msclr::interop::marshal_as<std::string>(this->emailTextbox->Text);
        registers.set_email(email);

        std::string phone = msclr::interop::marshal_as<std::string>(this->phoneTextbox->Text);
        registers.set_phone(phone);

        std::string address = msclr::interop::marshal_as<std::string>(this->addressTextbox->Text);
        registers.set_address(address);

        std::string dob = msclr::interop::marshal_as<std::string>(this->dobTextbox->Text);
        registers.set_dob(dob);

        // Convert the text from mpinTextbox to a managed string, then marshal it to a native string
        std::string mpinStr = msclr::interop::marshal_as<std::string>(this->mpinTextbox->Text);

        // Convert the native string to an integer using std::stoi
        int mpin = std::stoi(mpinStr);

        // Pass the integer to the setMpin function
        registers.setMpin(mpin);

        // Call the confirm_registration function
        int result = registers.confirm_registration();

        // Check the result of registration
        if (result == 0) {
            // Registration successful
            MessageBox::Show("Registration successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }
        else {
            // Registration failed, display error message
            MessageBox::Show("Registration failed!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
    catch (System::Exception^ ex) {
        // Handle any managed exceptions
        MessageBox::Show("An error occurred during registration: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    catch (const std::exception& ex) {
        // Handle any standard C++ exceptions
        System::String^ errorMsg = gcnew System::String(ex.what());
        MessageBox::Show("An error occurred during registration: " + errorMsg, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    catch (...) {
        // Handle any other unanticipated exceptions
        MessageBox::Show("An unknown error occurred during registration.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}




System::Void guiFunds::Sinup::sinupLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	// Close the current form
	this->Close();

	// Create an instance of the LoginForm
	guiFunds::Login^ loginForm = gcnew guiFunds::Login();

	// Show the LoginForm
	loginForm->Show();
}

