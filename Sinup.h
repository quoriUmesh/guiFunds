#pragma once
//#include"Login.h"

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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ passwordTextBox;
	private: System::Windows::Forms::TextBox^ usernameTextBox;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label9;


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ confirmMpinLabel;
	private: System::Windows::Forms::Label^ label13;





	protected:

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
			System::Windows::Forms::Panel^ panel2;
			System::Windows::Forms::Panel^ panel1;
			System::Windows::Forms::Panel^ panel3;
			System::Windows::Forms::Panel^ panel5;
			System::Windows::Forms::Panel^ panel4;
			System::Windows::Forms::Panel^ panel6;
			System::Windows::Forms::Panel^ panel7;
			System::Windows::Forms::Panel^ panel8;
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Sinup::typeid));
			System::Windows::Forms::Panel^ panel9;
			System::Windows::Forms::Panel^ panel10;
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->signinLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->passwordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->usernameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->confirmMpinLabel = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			panel2 = (gcnew System::Windows::Forms::Panel());
			panel1 = (gcnew System::Windows::Forms::Panel());
			panel3 = (gcnew System::Windows::Forms::Panel());
			panel5 = (gcnew System::Windows::Forms::Panel());
			panel4 = (gcnew System::Windows::Forms::Panel());
			panel6 = (gcnew System::Windows::Forms::Panel());
			panel7 = (gcnew System::Windows::Forms::Panel());
			panel8 = (gcnew System::Windows::Forms::Panel());
			panel9 = (gcnew System::Windows::Forms::Panel());
			panel10 = (gcnew System::Windows::Forms::Panel());
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
			panel3->BackColor = System::Drawing::Color::DarkSlateGray;
			panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			panel3->ForeColor = System::Drawing::Color::Gray;
			panel3->Location = System::Drawing::Point(567, 358);
			panel3->Name = L"panel3";
			panel3->Size = System::Drawing::Size(200, 2);
			panel3->TabIndex = 31;
			// 
			// panel5
			// 
			panel5->BackColor = System::Drawing::Color::DarkSlateGray;
			panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			panel5->ForeColor = System::Drawing::Color::Gray;
			panel5->Location = System::Drawing::Point(126, 298);
			panel5->Name = L"panel5";
			panel5->Size = System::Drawing::Size(250, 2);
			panel5->TabIndex = 39;
			// 
			// panel4
			// 
			panel4->BackColor = System::Drawing::Color::DarkSlateGray;
			panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			panel4->ForeColor = System::Drawing::Color::Gray;
			panel4->Location = System::Drawing::Point(131, 103);
			panel4->Name = L"panel4";
			panel4->Size = System::Drawing::Size(250, 2);
			panel4->TabIndex = 36;
			// 
			// panel6
			// 
			panel6->BackColor = System::Drawing::Color::DarkSlateGray;
			panel6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			panel6->ForeColor = System::Drawing::Color::Gray;
			panel6->Location = System::Drawing::Point(129, 148);
			panel6->Name = L"panel6";
			panel6->Size = System::Drawing::Size(250, 2);
			panel6->TabIndex = 42;
			// 
			// panel7
			// 
			panel7->BackColor = System::Drawing::Color::DarkSlateGray;
			panel7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			panel7->ForeColor = System::Drawing::Color::Gray;
			panel7->Location = System::Drawing::Point(126, 246);
			panel7->Name = L"panel7";
			panel7->Size = System::Drawing::Size(250, 2);
			panel7->TabIndex = 45;
			// 
			// panel8
			// 
			panel8->BackColor = System::Drawing::Color::DarkSlateGray;
			panel8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			panel8->ForeColor = System::Drawing::Color::Gray;
			panel8->Location = System::Drawing::Point(128, 195);
			panel8->Name = L"panel8";
			panel8->Size = System::Drawing::Size(250, 2);
			panel8->TabIndex = 48;
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
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Navy;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Javanese Text", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(162, 541);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 51);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Sin up";
			this->button1->UseVisualStyleBackColor = false;
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
			this->passwordTextBox->TextChanged += gcnew System::EventHandler(this, &Sinup::passwordTextBox_TextChanged);
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
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Javanese Text", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(15, 321);
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
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Black;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(567, 321);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(200, 37);
			this->textBox2->TabIndex = 33;
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
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Black;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->ForeColor = System::Drawing::Color::White;
			this->textBox3->Location = System::Drawing::Point(126, 261);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(250, 37);
			this->textBox3->TabIndex = 38;
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
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Black;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(131, 66);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(250, 37);
			this->textBox1->TabIndex = 35;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::Black;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->ForeColor = System::Drawing::Color::White;
			this->textBox4->Location = System::Drawing::Point(129, 111);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(250, 37);
			this->textBox4->TabIndex = 41;
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
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::Black;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox5->ForeColor = System::Drawing::Color::White;
			this->textBox5->Location = System::Drawing::Point(126, 209);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(250, 37);
			this->textBox5->TabIndex = 44;
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
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::Black;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox6->ForeColor = System::Drawing::Color::White;
			this->textBox6->Location = System::Drawing::Point(128, 158);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(250, 37);
			this->textBox6->TabIndex = 47;
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
			// panel9
			// 
			panel9->BackColor = System::Drawing::Color::DarkSlateGray;
			panel9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			panel9->ForeColor = System::Drawing::Color::Gray;
			panel9->Location = System::Drawing::Point(126, 413);
			panel9->Name = L"panel9";
			panel9->Size = System::Drawing::Size(200, 2);
			panel9->TabIndex = 53;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::Black;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox8->ForeColor = System::Drawing::Color::White;
			this->textBox8->Location = System::Drawing::Point(126, 376);
			this->textBox8->Name = L"textBox8";
			this->textBox8->PasswordChar = '*';
			this->textBox8->Size = System::Drawing::Size(200, 37);
			this->textBox8->TabIndex = 54;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label14->Font = (gcnew System::Drawing::Font(L"Javanese Text", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(15, 384);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(43, 29);
			this->label14->TabIndex = 49;
			this->label14->Text = L"Mpin";
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::Black;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox7->ForeColor = System::Drawing::Color::White;
			this->textBox7->Location = System::Drawing::Point(567, 382);
			this->textBox7->Name = L"textBox7";
			this->textBox7->PasswordChar = '*';
			this->textBox7->Size = System::Drawing::Size(200, 37);
			this->textBox7->TabIndex = 56;
			// 
			// panel10
			// 
			panel10->BackColor = System::Drawing::Color::DarkSlateGray;
			panel10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			panel10->ForeColor = System::Drawing::Color::Gray;
			panel10->Location = System::Drawing::Point(567, 419);
			panel10->Name = L"panel10";
			panel10->Size = System::Drawing::Size(200, 2);
			panel10->TabIndex = 55;
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
			// Sinup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(878, 612);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(panel10);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(panel9);
			this->Controls->Add(this->confirmMpinLabel);
			this->Controls->Add(this->label14);
			this->Controls->Add(panel8);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label12);
			this->Controls->Add(panel7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label11);
			this->Controls->Add(panel6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label10);
			this->Controls->Add(panel5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label9);
			this->Controls->Add(panel4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(panel3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->signinLabel);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
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
private: System::Void passwordTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private:System::Void sinupLabel_Click(System::Object^ sender, System::EventArgs^ e) {
		// Close the current form
		this->Close();

		// Create an instance of the LoginForm
		//guiFunds::Login^ loginForm = gcnew guiFunds::Login();

		// Show the LoginForm
		//loginForm->Show();
	}
	

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
