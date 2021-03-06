#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace SCADA {

	/// <summary>
	/// Summary for VE
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class VE : public System::Windows::Forms::Form
	{
	public:
		VE(void)
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
		~VE()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected: 
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::StatusStrip^  statusStrip2;
	private: System::Windows::Forms::StatusStrip^  statusStrip3;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(VE::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->statusStrip2 = (gcnew System::Windows::Forms::StatusStrip());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->statusStrip3 = (gcnew System::Windows::Forms::StatusStrip());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(12, 27);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(656, 497);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage1.BackgroundImage")));
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->textBox16);
			this->tabPage1->Controls->Add(this->textBox17);
			this->tabPage1->Controls->Add(this->label16);
			this->tabPage1->Controls->Add(this->label17);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->statusStrip1);
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Controls->Add(this->pictureBox2);
			this->tabPage1->Controls->Add(this->pictureBox6);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(648, 468);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"VE1";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &VE::tabPage1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::MediumAquamarine;
			this->button2->Location = System::Drawing::Point(469, 54);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(162, 23);
			this->button2->TabIndex = 31;
			this->button2->Text = L"Alarmi i zaštita";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// textBox16
			// 
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox16->Location = System::Drawing::Point(249, 162);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(60, 21);
			this->textBox16->TabIndex = 30;
			// 
			// textBox17
			// 
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox17->Location = System::Drawing::Point(249, 135);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(60, 21);
			this->textBox17->TabIndex = 29;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(229, 168);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(16, 13);
			this->label16->TabIndex = 28;
			this->label16->Text = L"Q";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(229, 138);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(14, 13);
			this->label17->TabIndex = 27;
			this->label17->Text = L"P";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(571, 295);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(60, 21);
			this->textBox4->TabIndex = 26;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(571, 268);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(60, 21);
			this->textBox5->TabIndex = 25;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(481, 301);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 13);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Frekvencija";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(481, 271);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 13);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Napon";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(361, 298);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(60, 21);
			this->textBox3->TabIndex = 22;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(229, 301);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 13);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Napunjenost baterije";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(193, 48);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(60, 21);
			this->textBox2->TabIndex = 20;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(193, 21);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(60, 21);
			this->textBox1->TabIndex = 19;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(103, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 13);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Smjer vjetra";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(103, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 13);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Brzina vjetra";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MediumAquamarine;
			this->button1->Location = System::Drawing::Point(469, 19);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(162, 23);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Parametri";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// statusStrip1
			// 
			this->statusStrip1->BackColor = System::Drawing::Color::LightGreen;
			this->statusStrip1->Location = System::Drawing::Point(3, 443);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(642, 22);
			this->statusStrip1->TabIndex = 14;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(510, 233);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(20, 19);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(401, 233);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(20, 19);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox2->TabIndex = 12;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(455, 284);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(20, 19);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox6->TabIndex = 11;
			this->pictureBox6->TabStop = false;
			// 
			// tabPage2
			// 
			this->tabPage2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage2.BackgroundImage")));
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->textBox18);
			this->tabPage2->Controls->Add(this->textBox19);
			this->tabPage2->Controls->Add(this->label18);
			this->tabPage2->Controls->Add(this->label19);
			this->tabPage2->Controls->Add(this->textBox14);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->textBox10);
			this->tabPage2->Controls->Add(this->textBox11);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->textBox6);
			this->tabPage2->Controls->Add(this->textBox7);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->statusStrip2);
			this->tabPage2->Controls->Add(this->pictureBox5);
			this->tabPage2->Controls->Add(this->pictureBox3);
			this->tabPage2->Controls->Add(this->pictureBox4);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(648, 468);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"VE2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::MediumAquamarine;
			this->button4->Location = System::Drawing::Point(463, 98);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(162, 42);
			this->button4->TabIndex = 39;
			this->button4->Text = L"Mreža s potrošačima";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::MediumAquamarine;
			this->button5->Location = System::Drawing::Point(463, 59);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(162, 23);
			this->button5->TabIndex = 38;
			this->button5->Text = L"Alarmi i zaštita";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::MediumAquamarine;
			this->button6->Location = System::Drawing::Point(463, 24);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(162, 23);
			this->button6->TabIndex = 37;
			this->button6->Text = L"Parametri";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// textBox18
			// 
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox18->Location = System::Drawing::Point(262, 168);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(60, 21);
			this->textBox18->TabIndex = 36;
			// 
			// textBox19
			// 
			this->textBox19->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox19->Location = System::Drawing::Point(262, 141);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(60, 21);
			this->textBox19->TabIndex = 35;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(242, 174);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(16, 13);
			this->label18->TabIndex = 34;
			this->label18->Text = L"Q";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(242, 144);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(14, 13);
			this->label19->TabIndex = 33;
			this->label19->Text = L"P";
			// 
			// textBox14
			// 
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox14->Location = System::Drawing::Point(360, 305);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(60, 21);
			this->textBox14->TabIndex = 32;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(228, 308);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(126, 13);
			this->label14->TabIndex = 31;
			this->label14->Text = L"Napunjenost baterije";
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(576, 308);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(60, 21);
			this->textBox10->TabIndex = 30;
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox11->Location = System::Drawing::Point(576, 281);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(60, 21);
			this->textBox11->TabIndex = 29;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(486, 314);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(73, 13);
			this->label10->TabIndex = 28;
			this->label10->Text = L"Frekvencija";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(486, 284);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(43, 13);
			this->label11->TabIndex = 27;
			this->label11->Text = L"Napon";
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(201, 67);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(60, 21);
			this->textBox6->TabIndex = 24;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(201, 40);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(60, 21);
			this->textBox7->TabIndex = 23;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(111, 73);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(80, 13);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Smjer vjetra";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(111, 43);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(81, 13);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Brzina vjetra";
			// 
			// statusStrip2
			// 
			this->statusStrip2->BackColor = System::Drawing::Color::LightGreen;
			this->statusStrip2->Location = System::Drawing::Point(3, 443);
			this->statusStrip2->Name = L"statusStrip2";
			this->statusStrip2->Size = System::Drawing::Size(642, 22);
			this->statusStrip2->TabIndex = 11;
			this->statusStrip2->Text = L"statusStrip2";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(509, 233);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(20, 19);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox5->TabIndex = 10;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(400, 233);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(20, 19);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox3->TabIndex = 9;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(454, 284);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(20, 19);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox4->TabIndex = 8;
			this->pictureBox4->TabStop = false;
			// 
			// tabPage3
			// 
			this->tabPage3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage3.BackgroundImage")));
			this->tabPage3->Controls->Add(this->button7);
			this->tabPage3->Controls->Add(this->button8);
			this->tabPage3->Controls->Add(this->button9);
			this->tabPage3->Controls->Add(this->textBox20);
			this->tabPage3->Controls->Add(this->textBox21);
			this->tabPage3->Controls->Add(this->label20);
			this->tabPage3->Controls->Add(this->label21);
			this->tabPage3->Controls->Add(this->textBox15);
			this->tabPage3->Controls->Add(this->label15);
			this->tabPage3->Controls->Add(this->textBox12);
			this->tabPage3->Controls->Add(this->textBox13);
			this->tabPage3->Controls->Add(this->label12);
			this->tabPage3->Controls->Add(this->label13);
			this->tabPage3->Controls->Add(this->textBox8);
			this->tabPage3->Controls->Add(this->textBox9);
			this->tabPage3->Controls->Add(this->label8);
			this->tabPage3->Controls->Add(this->label9);
			this->tabPage3->Controls->Add(this->statusStrip3);
			this->tabPage3->Controls->Add(this->pictureBox7);
			this->tabPage3->Controls->Add(this->pictureBox8);
			this->tabPage3->Controls->Add(this->pictureBox9);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(648, 468);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"VE3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::MediumAquamarine;
			this->button7->Location = System::Drawing::Point(461, 104);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(162, 42);
			this->button7->TabIndex = 39;
			this->button7->Text = L"Mreža s potrošačima";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::MediumAquamarine;
			this->button8->Location = System::Drawing::Point(461, 65);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(162, 23);
			this->button8->TabIndex = 38;
			this->button8->Text = L"Alarmi i zaštita";
			this->button8->UseVisualStyleBackColor = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::MediumAquamarine;
			this->button9->Location = System::Drawing::Point(461, 30);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(162, 23);
			this->button9->TabIndex = 37;
			this->button9->Text = L"Parametri";
			this->button9->UseVisualStyleBackColor = false;
			// 
			// textBox20
			// 
			this->textBox20->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox20->Location = System::Drawing::Point(264, 167);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(60, 21);
			this->textBox20->TabIndex = 36;
			// 
			// textBox21
			// 
			this->textBox21->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox21->Location = System::Drawing::Point(264, 140);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(60, 21);
			this->textBox21->TabIndex = 35;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(244, 173);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(16, 13);
			this->label20->TabIndex = 34;
			this->label20->Text = L"Q";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(244, 143);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(14, 13);
			this->label21->TabIndex = 33;
			this->label21->Text = L"P";
			// 
			// textBox15
			// 
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox15->Location = System::Drawing::Point(361, 304);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(60, 21);
			this->textBox15->TabIndex = 32;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(229, 307);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(126, 13);
			this->label15->TabIndex = 31;
			this->label15->Text = L"Napunjenost baterije";
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox12->Location = System::Drawing::Point(574, 304);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(60, 21);
			this->textBox12->TabIndex = 30;
			// 
			// textBox13
			// 
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox13->Location = System::Drawing::Point(574, 277);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(60, 21);
			this->textBox13->TabIndex = 29;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(484, 310);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(73, 13);
			this->label12->TabIndex = 28;
			this->label12->Text = L"Frekvencija";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(484, 280);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(43, 13);
			this->label13->TabIndex = 27;
			this->label13->Text = L"Napon";
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(198, 57);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(60, 21);
			this->textBox8->TabIndex = 24;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(198, 30);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(60, 21);
			this->textBox9->TabIndex = 23;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(108, 63);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(80, 13);
			this->label8->TabIndex = 22;
			this->label8->Text = L"Smjer vjetra";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(108, 33);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(81, 13);
			this->label9->TabIndex = 21;
			this->label9->Text = L"Brzina vjetra";
			// 
			// statusStrip3
			// 
			this->statusStrip3->BackColor = System::Drawing::Color::LightGreen;
			this->statusStrip3->Location = System::Drawing::Point(0, 446);
			this->statusStrip3->Name = L"statusStrip3";
			this->statusStrip3->Size = System::Drawing::Size(648, 22);
			this->statusStrip3->TabIndex = 14;
			this->statusStrip3->Text = L"statusStrip3";
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(507, 230);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(20, 19);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox7->TabIndex = 13;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(398, 230);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(20, 19);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox8->TabIndex = 12;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(452, 280);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(20, 19);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox9->TabIndex = 11;
			this->pictureBox9->TabStop = false;
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(648, 468);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Opcije";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Plum;
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(6, 1, 0, 1);
			this->menuStrip1->Size = System::Drawing::Size(678, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// VE
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(678, 531);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"VE";
			this->Text = L"VE";
			this->Load += gcnew System::EventHandler(this, &VE::VE_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void VE_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
