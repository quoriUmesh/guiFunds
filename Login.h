#pragma once
#include"Sinup.h"

namespace guiFunds {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	ref class Sinup;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ usernameTextBox;
	private: System::Windows::Forms::TextBox^ passwordTextBox;
	private: System::Windows::Forms::Button^ LoginButton;
	private: System::Windows::Forms::Button^ exitButton;
	private: System::Windows::Forms::CheckBox^ termscheckBox;





	private: System::Windows::Forms::Label^ termsLabel;
	private: System::Windows::Forms::CheckBox^ robotcheckBox;


	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ sinupLabel;
	private: System::Windows::Forms::Label^ fogotPasswordlabel;


	private: System::Windows::Forms::Panel^ panel3;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::Panel^ panel1;
			System::Windows::Forms::Panel^ panel2;
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->usernameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->passwordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->LoginButton = (gcnew System::Windows::Forms::Button());
			this->exitButton = (gcnew System::Windows::Forms::Button());
			this->termscheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->termsLabel = (gcnew System::Windows::Forms::Label());
			this->robotcheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->sinupLabel = (gcnew System::Windows::Forms::Label());
			this->fogotPasswordlabel = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			panel1 = (gcnew System::Windows::Forms::Panel());
			panel2 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			panel1->BackColor = System::Drawing::Color::DarkSlateGray;
			panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			panel1->ForeColor = System::Drawing::Color::Gray;
			panel1->Location = System::Drawing::Point(144, 251);
			panel1->Name = L"panel1";
			panel1->Size = System::Drawing::Size(280, 2);
			panel1->TabIndex = 4;
			// 
			// panel2
			// 
			panel2->BackColor = System::Drawing::Color::DarkSlateGray;
			panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			panel2->ForeColor = System::Drawing::Color::Gray;
			panel2->Location = System::Drawing::Point(146, 157);
			panel2->Name = L"panel2";
			panel2->Size = System::Drawing::Size(280, 2);
			panel2->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Javanese Text", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(53, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 47);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sign in  ";
			this->label1->Click += gcnew System::EventHandler(this, &Login::sinupLabel_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Javanese Text", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(56, 136);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Username  ";
			//this->label2->Click += gcnew System::EventHandler(this, &Login::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Javanese Text", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(55, 221);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 29);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password";
			// 
			// usernameTextBox
			// 
			this->usernameTextBox->BackColor = System::Drawing::Color::Black;
			this->usernameTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->usernameTextBox->ForeColor = System::Drawing::Color::White;
			this->usernameTextBox->Location = System::Drawing::Point(149, 129);
			this->usernameTextBox->Name = L"usernameTextBox";
			this->usernameTextBox->Size = System::Drawing::Size(280, 30);
			this->usernameTextBox->TabIndex = 3;
			// 
			// passwordTextBox
			// 
			this->passwordTextBox->BackColor = System::Drawing::Color::Black;
			this->passwordTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->passwordTextBox->ForeColor = System::Drawing::Color::White;
			this->passwordTextBox->Location = System::Drawing::Point(143, 220);
			this->passwordTextBox->Name = L"passwordTextBox";
			this->passwordTextBox->PasswordChar = '*';
			this->passwordTextBox->Size = System::Drawing::Size(280, 30);
			this->passwordTextBox->TabIndex = 5;
			// 
			// LoginButton
			// 
			this->LoginButton->BackColor = System::Drawing::Color::Navy;
			this->LoginButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LoginButton->Font = (gcnew System::Drawing::Font(L"Javanese Text", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginButton->ForeColor = System::Drawing::Color::Transparent;
			this->LoginButton->Location = System::Drawing::Point(44, 416);
			this->LoginButton->Name = L"LoginButton";
			this->LoginButton->Size = System::Drawing::Size(119, 51);
			this->LoginButton->TabIndex = 6;
			this->LoginButton->Text = L"Log in";
			this->LoginButton->UseVisualStyleBackColor = false;
			// 
			// exitButton
			// 
			this->exitButton->BackColor = System::Drawing::Color::Black;
			this->exitButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exitButton->Font = (gcnew System::Drawing::Font(L"Javanese Text", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exitButton->ForeColor = System::Drawing::Color::Navy;
			this->exitButton->Location = System::Drawing::Point(239, 416);
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(119, 51);
			this->exitButton->TabIndex = 7;
			this->exitButton->Text = L"Exit";
			this->exitButton->UseVisualStyleBackColor = false;
			this->exitButton->Click += gcnew System::EventHandler(this, &Login::exitbutton_click);
			// 
			// termscheckBox
			// 
			this->termscheckBox->AutoSize = true;
			this->termscheckBox->Location = System::Drawing::Point(45, 285);
			this->termscheckBox->Name = L"termscheckBox";
			this->termscheckBox->Size = System::Drawing::Size(84, 33);
			this->termscheckBox->TabIndex = 8;
			this->termscheckBox->Tag = L"";
			this->termscheckBox->Text = L"I agree to";
			this->termscheckBox->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->termscheckBox->UseVisualStyleBackColor = true;
			// 
			// termsLabel
			// 
			this->termsLabel->AutoSize = true;
			this->termsLabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->termsLabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->termsLabel->Font = (gcnew System::Drawing::Font(L"Javanese Text", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->termsLabel->ForeColor = System::Drawing::Color::Navy;
			this->termsLabel->Location = System::Drawing::Point(120, 286);
			this->termsLabel->Name = L"termsLabel";
			this->termsLabel->Size = System::Drawing::Size(142, 29);
			this->termsLabel->TabIndex = 9;
			this->termsLabel->Text = L"Terms and Conditions  ";
			this->termsLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->termsLabel->Click += gcnew System::EventHandler(this, &Login::termsLabel_click);
			// 
			// robotcheckBox
			// 
			this->robotcheckBox->AutoSize = true;
			this->robotcheckBox->Location = System::Drawing::Point(37, 324);
			this->robotcheckBox->Margin = System::Windows::Forms::Padding(1);
			this->robotcheckBox->Name = L"robotcheckBox";
			this->robotcheckBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->robotcheckBox->Size = System::Drawing::Size(126, 33);
			this->robotcheckBox->TabIndex = 10;
			this->robotcheckBox->Tag = L"";
			this->robotcheckBox->Text = L"I am not a robot.";
			this->robotcheckBox->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->ImageLocation = L"";
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(510, 35);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(193, 159);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// sinupLabel
			// 
			this->sinupLabel->AutoSize = true;
			this->sinupLabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->sinupLabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->sinupLabel->Font = (gcnew System::Drawing::Font(L"Javanese Text", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sinupLabel->ForeColor = System::Drawing::Color::Navy;
			this->sinupLabel->Location = System::Drawing::Point(79, 358);
			this->sinupLabel->Name = L"sinupLabel";
			this->sinupLabel->Size = System::Drawing::Size(57, 29);
			this->sinupLabel->TabIndex = 12;
			this->sinupLabel->Text = L"Sin Up  ";
			this->sinupLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->sinupLabel->Click += gcnew System::EventHandler(this, &Login::sinupLabel_Click);
			// 
			// fogotPasswordlabel
			// 
			this->fogotPasswordlabel->AutoSize = true;
			this->fogotPasswordlabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->fogotPasswordlabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->fogotPasswordlabel->Font = (gcnew System::Drawing::Font(L"Javanese Text", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fogotPasswordlabel->ForeColor = System::Drawing::Color::Navy;
			this->fogotPasswordlabel->Location = System::Drawing::Point(142, 358);
			this->fogotPasswordlabel->Name = L"fogotPasswordlabel";
			this->fogotPasswordlabel->Size = System::Drawing::Size(106, 29);
			this->fogotPasswordlabel->TabIndex = 13;
			this->fogotPasswordlabel->Text = L"Forgot Password";
			this->fogotPasswordlabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->fogotPasswordlabel->Click += gcnew System::EventHandler(this, &Login::forgotPasswordlabel_click);
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Location = System::Drawing::Point(136, 352);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1, 35);
			this->panel3->TabIndex = 14;
			// 
			// Login
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(752, 507);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->fogotPasswordlabel);
			this->Controls->Add(this->sinupLabel);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->robotcheckBox);
			this->Controls->Add(this->termsLabel);
			this->Controls->Add(this->termscheckBox);
			this->Controls->Add(this->exitButton);
			this->Controls->Add(this->LoginButton);
			this->Controls->Add(panel2);
			this->Controls->Add(this->passwordTextBox);
			this->Controls->Add(panel1);
			this->Controls->Add(this->usernameTextBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Javanese Text", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 7, 4, 7);
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

private: System::Void exitbutton_click(System::Object^ sender, System::EventArgs^ e) {

	this->Close();
}
private: System::Void sinupLabel_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Hide();
	guiFunds::Sinup^ signupForm = gcnew guiFunds::Sinup();
	// Show the Sinup form
	signupForm->Show();
}
private: System::Void forgotPasswordlabel_click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void termsLabel_click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
