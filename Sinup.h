#pragma once
#include"Login.h"

namespace guiFunds {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	ref class Login;

	/// <summary>
	/// Summary for Sinup
	/// </summary>
	public ref class Sinup : public System::Windows::Forms::Form
	{
	public:
		Sinup(void)
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
		~Sinup()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ signinLabel;



	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ sinupButton;




	private: System::Windows::Forms::TextBox^ passwordTextBox;
	private: System::Windows::Forms::TextBox^ usernameTextBox;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ passConfirmBox;



	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ emailTextbox;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ nameTextbox;
	private: System::Windows::Forms::TextBox^ addressTextbox;






	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ phoneTextbox;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ dobTextbox;


	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ mpinTextbox;


	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ confirmMpinbox;


	private: System::Windows::Forms::Label^ confirmMpinLabel;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Label^ dateFormat;



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
			System::Windows::Forms::Panel^ panel2;
			System::Windows::Forms::Panel^ panel1;
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Sinup::typeid));
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->signinLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->sinupButton = (gcnew System::Windows::Forms::Button());
			this->passwordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->usernameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->passConfirmBox = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->emailTextbox = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->nameTextbox = (gcnew System::Windows::Forms::TextBox());
			this->addressTextbox = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->phoneTextbox = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->dobTextbox = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->mpinTextbox = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->confirmMpinbox = (gcnew System::Windows::Forms::TextBox());
			this->confirmMpinLabel = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->dateFormat = (gcnew System::Windows::Forms::Label());
			panel2 = (gcnew System::Windows::Forms::Panel());
			panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel2
			// 
			panel2->BackColor = System::Drawing::Color::DarkSlateGray;
			panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			panel2->ForeColor = System::Drawing::Color::Gray;
			panel2->Location = System::Drawing::Point(566, 286);
			panel2->Name = L"panel2";
			panel2->Size = System::Drawing::Size(200, 2);
			panel2->TabIndex = 20;
			// 
			// panel1
			// 
			panel1->BackColor = System::Drawing::Color::DarkSlateGray;
			panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			panel1->ForeColor = System::Drawing::Color::Gray;
			panel1->Location = System::Drawing::Point(126, 358);
			panel1->Name = L"panel1";
			panel1->Size = System::Drawing::Size(200, 2);
			panel1->TabIndex = 19;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->ForeColor = System::Drawing::Color::Gray;
			this->panel3->Location = System::Drawing::Point(567, 358);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(200, 2);
			this->panel3->TabIndex = 31;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel5->ForeColor = System::Drawing::Color::Gray;
			this->panel5->Location = System::Drawing::Point(126, 298);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(250, 2);
			this->panel5->TabIndex = 39;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->ForeColor = System::Drawing::Color::Gray;
			this->panel4->Location = System::Drawing::Point(131, 103);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(250, 2);
			this->panel4->TabIndex = 36;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel6->ForeColor = System::Drawing::Color::Gray;
			this->panel6->Location = System::Drawing::Point(129, 148);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(250, 2);
			this->panel6->TabIndex = 42;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel7->ForeColor = System::Drawing::Color::Gray;
			this->panel7->Location = System::Drawing::Point(126, 246);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(250, 2);
			this->panel7->TabIndex = 45;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel8->ForeColor = System::Drawing::Color::Gray;
			this->panel8->Location = System::Drawing::Point(128, 195);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(250, 2);
			this->panel8->TabIndex = 48;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel9->ForeColor = System::Drawing::Color::Gray;
			this->panel9->Location = System::Drawing::Point(126, 413);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(200, 2);
			this->panel9->TabIndex = 53;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel10->ForeColor = System::Drawing::Color::Gray;
			this->panel10->Location = System::Drawing::Point(567, 419);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(200, 2);
			this->panel10->TabIndex = 55;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Javanese Text", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Navy;
			this->label5->Location = System::Drawing::Point(-6, 283);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 29);
			this->label5->TabIndex = 13;
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// signinLabel
			// 
			this->signinLabel->AutoSize = true;
			this->signinLabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->signinLabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->signinLabel->Font = (gcnew System::Drawing::Font(L"Javanese Text", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signinLabel->ForeColor = System::Drawing::Color::Navy;
			this->signinLabel->Location = System::Drawing::Point(359, 499);
			this->signinLabel->Name = L"signinLabel";
			this->signinLabel->Size = System::Drawing::Size(45, 29);
			this->signinLabel->TabIndex = 28;
			this->signinLabel->Text = L"Sin in";
			this->signinLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->signinLabel->Click += gcnew System::EventHandler(this, &Sinup::sinupLabel_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->ImageLocation = L"";
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(554, 9);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(193, 159);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 27;
			this->pictureBox1->TabStop = false;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(136, 462);
			this->checkBox2->Margin = System::Windows::Forms::Padding(1);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->checkBox2->Size = System::Drawing::Size(126, 33);
			this->checkBox2->TabIndex = 26;
			this->checkBox2->Tag = L"";
			this->checkBox2->Text = L"I am not a robot.";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Javanese Text", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Navy;
			this->label4->Location = System::Drawing::Point(211, 428);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(142, 29);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Terms and Conditions  ";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(138, 427);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(84, 33);
			this->checkBox1->TabIndex = 24;
			this->checkBox1->Tag = L"";
			this->checkBox1->Text = L"I agree to";
			this->checkBox1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Javanese Text", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Navy;
			this->button2->Location = System::Drawing::Point(378, 541);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(119, 51);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Sinup::button2_Click);
			// 
			// sinupButton
			// 
			this->sinupButton->BackColor = System::Drawing::Color::Navy;
			this->sinupButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->sinupButton->Font = (gcnew System::Drawing::Font(L"Javanese Text", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sinupButton->ForeColor = System::Drawing::Color::Transparent;
			this->sinupButton->Location = System::Drawing::Point(162, 541);
			this->sinupButton->Name = L"sinupButton";
			this->sinupButton->Size = System::Drawing::Size(119, 51);
			this->sinupButton->TabIndex = 22;
			this->sinupButton->Text = L"Sign up";
			this->sinupButton->UseVisualStyleBackColor = false;
			this->sinupButton->Click += gcnew System::EventHandler(this, &Sinup::sinupButton_Click);
			// 
			// passwordTextBox
			// 
			this->passwordTextBox->BackColor = System::Drawing::Color::Black;
			this->passwordTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->passwordTextBox->ForeColor = System::Drawing::Color::White;
			this->passwordTextBox->Location = System::Drawing::Point(126, 321);
			this->passwordTextBox->Name = L"passwordTextBox";
			this->passwordTextBox->PasswordChar = '*';
			this->passwordTextBox->Size = System::Drawing::Size(200, 37);
			this->passwordTextBox->TabIndex = 21;
			this->passwordTextBox->TextChanged += gcnew System::EventHandler(this, &Sinup::passwordTextbox_TextChanged);
			// 
			// usernameTextBox
			// 
			this->usernameTextBox->BackColor = System::Drawing::Color::Black;
			this->usernameTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->usernameTextBox->ForeColor = System::Drawing::Color::White;
			this->usernameTextBox->Location = System::Drawing::Point(566, 251);
			this->usernameTextBox->Name = L"usernameTextBox";
			this->usernameTextBox->Size = System::Drawing::Size(200, 37);
			this->usernameTextBox->TabIndex = 18;
			this->usernameTextBox->TextChanged += gcnew System::EventHandler(this, &Sinup::usernameTextBox_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Javanese Text", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(7, 321);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 29);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Javanese Text", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(447, 261);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 29);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Username  ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Javanese Text", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(39, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 47);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Sign up";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label6->Font = (gcnew System::Drawing::Font(L"Javanese Text", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(217, 499);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(147, 29);
			this->label6->TabIndex = 29;
			this->label6->Text = L"Already have an account";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label7->Font = (gcnew System::Drawing::Font(L"Javanese Text", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(445, 334);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(116, 29);
			this->label7->TabIndex = 30;
			this->label7->Text = L"Confirm Password";
			// 
			// passConfirmBox
			// 
			this->passConfirmBox->BackColor = System::Drawing::Color::Black;
			this->passConfirmBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->passConfirmBox->ForeColor = System::Drawing::Color::White;
			this->passConfirmBox->Location = System::Drawing::Point(567, 321);
			this->passConfirmBox->Name = L"passConfirmBox";
			this->passConfirmBox->PasswordChar = '*';
			this->passConfirmBox->Size = System::Drawing::Size(200, 37);
			this->passConfirmBox->TabIndex = 33;
			this->passConfirmBox->TextChanged += gcnew System::EventHandler(this, &Sinup::passConfirmBox_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label8->Font = (gcnew System::Drawing::Font(L"Javanese Text", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label8->Location = System::Drawing::Point(12, 78);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(71, 29);
			this->label8->TabIndex = 34;
			this->label8->Text = L"Full Name";
			// 
			// emailTextbox
			// 
			this->emailTextbox->BackColor = System::Drawing::Color::Black;
			this->emailTextbox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->emailTextbox->ForeColor = System::Drawing::Color::White;
			this->emailTextbox->Location = System::Drawing::Point(126, 261);
			this->emailTextbox->Name = L"emailTextbox";
			this->emailTextbox->Size = System::Drawing::Size(250, 37);
			this->emailTextbox->TabIndex = 38;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label9->Font = (gcnew System::Drawing::Font(L"Javanese Text", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label9->Location = System::Drawing::Point(7, 273);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(52, 29);
			this->label9->TabIndex = 37;
			this->label9->Text = L"E-mail";
			this->label9->Click += gcnew System::EventHandler(this, &Sinup::label9_Click);
			// 
			// nameTextbox
			// 
			this->nameTextbox->BackColor = System::Drawing::Color::Black;
			this->nameTextbox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->nameTextbox->ForeColor = System::Drawing::Color::White;
			this->nameTextbox->Location = System::Drawing::Point(131, 66);
			this->nameTextbox->Name = L"nameTextbox";
			this->nameTextbox->Size = System::Drawing::Size(250, 37);
			this->nameTextbox->TabIndex = 35;
			// 
			// addressTextbox
			// 
			this->addressTextbox->BackColor = System::Drawing::Color::Black;
			this->addressTextbox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->addressTextbox->ForeColor = System::Drawing::Color::White;
			this->addressTextbox->Location = System::Drawing::Point(129, 111);
			this->addressTextbox->Name = L"addressTextbox";
			this->addressTextbox->Size = System::Drawing::Size(250, 37);
			this->addressTextbox->TabIndex = 41;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label10->Font = (gcnew System::Drawing::Font(L"Javanese Text", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label10->Location = System::Drawing::Point(10, 123);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(57, 29);
			this->label10->TabIndex = 40;
			this->label10->Text = L"Address";
			// 
			// phoneTextbox
			// 
			this->phoneTextbox->BackColor = System::Drawing::Color::Black;
			this->phoneTextbox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->phoneTextbox->ForeColor = System::Drawing::Color::White;
			this->phoneTextbox->Location = System::Drawing::Point(126, 209);
			this->phoneTextbox->Name = L"phoneTextbox";
			this->phoneTextbox->Size = System::Drawing::Size(250, 37);
			this->phoneTextbox->TabIndex = 44;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label11->Font = (gcnew System::Drawing::Font(L"Javanese Text", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label11->Location = System::Drawing::Point(7, 221);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(48, 29);
			this->label11->TabIndex = 43;
			this->label11->Text = L"Phone";
			// 
			// dobTextbox
			// 
			this->dobTextbox->BackColor = System::Drawing::Color::Black;
			this->dobTextbox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->dobTextbox->ForeColor = System::Drawing::Color::White;
			this->dobTextbox->Location = System::Drawing::Point(128, 158);
			this->dobTextbox->Name = L"dobTextbox";
			this->dobTextbox->Size = System::Drawing::Size(250, 37);
			this->dobTextbox->TabIndex = 47;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label12->Font = (gcnew System::Drawing::Font(L"Javanese Text", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label12->Location = System::Drawing::Point(9, 170);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(90, 29);
			this->label12->TabIndex = 46;
			this->label12->Text = L"Date Of Birth";
			// 
			// mpinTextbox
			// 
			this->mpinTextbox->BackColor = System::Drawing::Color::Black;
			this->mpinTextbox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->mpinTextbox->ForeColor = System::Drawing::Color::White;
			this->mpinTextbox->Location = System::Drawing::Point(126, 376);
			this->mpinTextbox->Name = L"mpinTextbox";
			this->mpinTextbox->PasswordChar = '*';
			this->mpinTextbox->Size = System::Drawing::Size(200, 37);
			this->mpinTextbox->TabIndex = 54;
			this->mpinTextbox->TextChanged += gcnew System::EventHandler(this, &Sinup::mpinTextbox_TextChanged);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label14->Font = (gcnew System::Drawing::Font(L"Javanese Text", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(9, 384);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(43, 29);
			this->label14->TabIndex = 49;
			this->label14->Text = L"Mpin";
			// 
			// confirmMpinbox
			// 
			this->confirmMpinbox->BackColor = System::Drawing::Color::Black;
			this->confirmMpinbox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->confirmMpinbox->ForeColor = System::Drawing::Color::White;
			this->confirmMpinbox->Location = System::Drawing::Point(567, 382);
			this->confirmMpinbox->Name = L"confirmMpinbox";
			this->confirmMpinbox->PasswordChar = '*';
			this->confirmMpinbox->Size = System::Drawing::Size(200, 37);
			this->confirmMpinbox->TabIndex = 56;
			this->confirmMpinbox->TextChanged += gcnew System::EventHandler(this, &Sinup::passConfirmBox_TextChanged);
			// 
			// confirmMpinLabel
			// 
			this->confirmMpinLabel->AutoSize = true;
			this->confirmMpinLabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->confirmMpinLabel->Font = (gcnew System::Drawing::Font(L"Javanese Text", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirmMpinLabel->Location = System::Drawing::Point(445, 397);
			this->confirmMpinLabel->Name = L"confirmMpinLabel";
			this->confirmMpinLabel->Size = System::Drawing::Size(93, 29);
			this->confirmMpinLabel->TabIndex = 51;
			this->confirmMpinLabel->Text = L"Confirm Mpin";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label13->Font = (gcnew System::Drawing::Font(L"Javanese Text", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(438, 425);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(321, 25);
			this->label13->TabIndex = 57;
			this->label13->Text = L"*Mpin is necessary for transactions and must be 4 digits numeric.";
			// 
			// dateFormat
			// 
			this->dateFormat->AutoSize = true;
			this->dateFormat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->dateFormat->Font = (gcnew System::Drawing::Font(L"Javanese Text", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateFormat->Location = System::Drawing::Point(378, 176);
			this->dateFormat->Name = L"dateFormat";
			this->dateFormat->Size = System::Drawing::Size(98, 25);
			this->dateFormat->TabIndex = 58;
			this->dateFormat->Text = L"***YYYY-MM-DD";
			// 
			// Sinup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(878, 612);
			this->Controls->Add(this->dateFormat);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->confirmMpinbox);
			this->Controls->Add(this->panel10);
			this->Controls->Add(this->mpinTextbox);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->confirmMpinLabel);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->dobTextbox);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->phoneTextbox);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->addressTextbox);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->emailTextbox);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->nameTextbox);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->passConfirmBox);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->signinLabel);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->sinupButton);
			this->Controls->Add(panel2);
			this->Controls->Add(this->passwordTextBox);
			this->Controls->Add(panel1);
			this->Controls->Add(this->usernameTextBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label5);
			this->Font = (gcnew System::Drawing::Font(L"Javanese Text", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 7, 4, 7);
			this->Name = L"Sinup";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sinup";
			this->Load += gcnew System::EventHandler(this, &Sinup::Sinup_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Sinup_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private:System::Void sinupLabel_Click(System::Object^ sender, System::EventArgs^ e);
	



private:System::Void sinupButton_Click(System::Object^ sender, System::EventArgs^ e);






private: System::Void passwordTextbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (passwordTextBox->Text == passConfirmBox->Text) {
		sinupButton->Enabled = true; // Enable the button if contents match
	}
	else {
		sinupButton->Enabled = false; // Disable the button if contents do not match
	}
}

private: System::Void mpinTextbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (mpinTextbox->Text == confirmMpinbox->Text && System::Text::RegularExpressions::Regex::IsMatch(mpinTextbox->Text, "\\b\\d{4}\\b")) {
		sinupButton->Enabled = true; // Enable the button if contents match
	}
	else {
		sinupButton->Enabled = false; // Disable the button if contents do not match
	}
}

private: System::Void passConfirmBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (confirmMpinbox->Text == mpinTextbox->Text  && System::Text::RegularExpressions::Regex::IsMatch(confirmMpinbox->Text, "\\b\\d{4}\\b")) {
		sinupButton->Enabled = true; // Enable the button if contents match
	}
	else {
		sinupButton->Enabled = false; // Disable the button if contents do not match
	}
}

/*private: System::Void passConfirmBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (passConfirmBox->Text == passwordTextBox->Text) {
		sinupButton->Enabled = true; // Enable the button if contents match
	}
	else {
		sinupButton->Enabled = false; // Disable the button if contents do not match
	}
}*/

private: System::Void usernameTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (!String::IsNullOrEmpty(usernameTextBox->Text)) {
		sinupButton->Enabled = true; // Enable the button if contents match
	}
	else {
		sinupButton->Enabled = false; // Disable the button if contents do not match
	}
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	 // Display a message box to confirm exit
	 System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to exit?", "Exit Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

	// Check the user's response
	if (result == System::Windows::Forms::DialogResult::Yes) {
	  // Exit the application
	   Application::Exit();
	}
}

};
}
