#pragma once

#include "Elektrana.h"
#include "Hidroelektrana.h"
#include "Form1.h"




namespace SCADA {
	using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

	/// <summary>
	/// Summary for HE1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class HE1 : public System::Windows::Forms::Form
	{
	public:
		ArrayList ^hidro;
		HE1(ArrayList ^he)
		{
			hidro=gcnew ArrayList();
			hidro=he;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~HE1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button2;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox26;
	private: System::Windows::Forms::TextBox^  textBox25;
	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::TextBox^  textBox24;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(HE1::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::MediumAquamarine;
			this->button2->Location = System::Drawing::Point(895, 70);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(162, 29);
			this->button2->TabIndex = 74;
			this->button2->Text = L"Alarmi i zaštita";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MediumAquamarine;
			this->button1->Location = System::Drawing::Point(895, 35);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(162, 29);
			this->button1->TabIndex = 73;
			this->button1->Text = L"Parametri";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// textBox26
			// 
			this->textBox26->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox26->Location = System::Drawing::Point(531, 309);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(36, 21);
			this->textBox26->TabIndex = 72;
			// 
			// textBox25
			// 
			this->textBox25->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox25->Location = System::Drawing::Point(109, 217);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(36, 21);
			this->textBox25->TabIndex = 71;
			// 
			// textBox23
			// 
			this->textBox23->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox23->Location = System::Drawing::Point(365, 198);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(36, 21);
			this->textBox23->TabIndex = 70;
			// 
			// textBox24
			// 
			this->textBox24->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox24->Location = System::Drawing::Point(365, 137);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(36, 21);
			this->textBox24->TabIndex = 69;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(531, 161);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(60, 21);
			this->textBox9->TabIndex = 68;
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(531, 134);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(60, 21);
			this->textBox10->TabIndex = 67;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(509, 169);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(16, 13);
			this->label9->TabIndex = 66;
			this->label9->Text = L"Q";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(511, 137);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(14, 13);
			this->label10->TabIndex = 65;
			this->label10->Text = L"P";
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox11->Location = System::Drawing::Point(835, 353);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(60, 21);
			this->textBox11->TabIndex = 64;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(703, 356);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(126, 13);
			this->label11->TabIndex = 63;
			this->label11->Text = L"Napunjenost baterije";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(842, 200);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(60, 21);
			this->textBox5->TabIndex = 62;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(842, 173);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(60, 21);
			this->textBox6->TabIndex = 61;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(752, 206);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(73, 13);
			this->label5->TabIndex = 60;
			this->label5->Text = L"Frekvencija";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(752, 176);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 13);
			this->label6->TabIndex = 59;
			this->label6->Text = L"Napon";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(967, 292);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(19, 19);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox3->TabIndex = 58;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1002, 258);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(19, 19);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 57;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(931, 258);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(19, 19);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox2->TabIndex = 56;
			this->pictureBox2->TabStop = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::MediumAquamarine;
			this->button3->Location = System::Drawing::Point(895, 105);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(162, 29);
			this->button3->TabIndex = 75;
			this->button3->Text = L"Dodaj HE";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &HE1::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(565, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 13);
			this->label1->TabIndex = 76;
			this->label1->Text = L"Lista hidroelektrana";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(568, 30);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(140, 21);
			this->comboBox1->TabIndex = 77;
			this->comboBox1->Text = L"Izaberite hidroelektranu";
			// 
			// HE1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1073, 417);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox26);
			this->Controls->Add(this->textBox25);
			this->Controls->Add(this->textBox23);
			this->Controls->Add(this->textBox24);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->DoubleBuffered = true;
			this->Name = L"HE1";
			this->Text = L"HE1";
			this->Load += gcnew System::EventHandler(this, &HE1::HE1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void HE1_Load(System::Object^  sender, System::EventArgs^  e) {
				 for(int i=0; i<hidro->Count; i++)
				 {
					 Hidroelektrana ^h1=gcnew Hidroelektrana();
					 h1=(Hidroelektrana ^)(hidro[i]);
					 comboBox1->Items->Add(h1->getIme());
				 }
			 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 String ^ime=comboBox1->SelectedItem->ToString();
			 for(int i=0; i<hidro->Count; i++)
			 {
				 Hidroelektrana ^h1=gcnew Hidroelektrana();
				 h1=(Hidroelektrana ^)(hidro[i]);
				 if(ime==h1->getIme())
				 {
					 textBox25->Text=Convert::ToString(h1->getRefNivo());
					 textBox24->Text=Convert::ToString(h1->getNivoGornjeg());
					 textBox23->Text=Convert::ToString(h1->getNivoDonjeg());
					 textBox26->Text=Convert::ToString(h1->getSnagaPumpe());
					 textBox11->Text=Convert::ToString(h1->getNapBat());
					 textBox10->Text=Convert::ToString(h1->getP());
					 textBox9->Text=Convert::ToString(h1->getQ());
					 textBox6->Text=Convert::ToString(h1->getU());
					 textBox5->Text=Convert::ToString(h1->getF());
				 }

			 }

		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(hidro->Count>2)
				 MessageBox::Show("Prekoraèen broj hidroelektrana!","Greška",MessageBoxButtons::OK,MessageBoxIcon::Error);
			 else
			 {
				 String ^ime;
				 int h1,h2,h3;
				 h1=0;h2=0;h3=0;
				 for(int i=0; i<hidro->Count; i++)
				 {
					 Hidroelektrana ^hid=gcnew Hidroelektrana();
					 hid=(Hidroelektrana^)(hidro[i]);
					 if(hid->getIme()=="HE1")
						 h1++;
					 if(hid->getIme()=="HE2")
						 h2++;
					 if(hid->getIme()=="HE3")
						 h3++;

				 }
				 if(h1==0)
					 ime="HE1";
				 else if(h2==0)
					 ime="HE2";
				 else if(h3==0)
					 ime="HE3";
				 Hidroelektrana ^he;
				 he=gcnew Hidroelektrana(ime);
				 hidro->Add(he);
				 MessageBox::Show("Uspješno dodano!","Informacija",MessageBoxButtons::OK,MessageBoxIcon::Information);

			 }
		 }
};


}