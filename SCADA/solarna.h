#pragma once

#include "Elektrana.h"
#include "SolarnaElektrana.h"
#include "parametriSE.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace SCADA {

	/// <summary>
	/// Summary for solarna
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class solarna : public System::Windows::Forms::Form
	{
	public:
		ArrayList ^solarne;
		solarna(void)
		{
			solarne=gcnew ArrayList();
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~solarna()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button8;
	protected: 
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;


	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(solarna::typeid));
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::MediumAquamarine;
			this->button8->Location = System::Drawing::Point(452, 84);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(162, 33);
			this->button8->TabIndex = 62;
			this->button8->Text = L"Briši SE";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &solarna::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::MediumAquamarine;
			this->button9->Location = System::Drawing::Point(452, 45);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(162, 33);
			this->button9->TabIndex = 61;
			this->button9->Text = L"Parametri";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &solarna::button9_Click);
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(179, 277);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(60, 21);
			this->textBox8->TabIndex = 60;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(179, 250);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(60, 21);
			this->textBox9->TabIndex = 59;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(157, 280);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(16, 13);
			this->label8->TabIndex = 58;
			this->label8->Text = L"Q";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(159, 258);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(14, 13);
			this->label9->TabIndex = 57;
			this->label9->Text = L"P";
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(307, 447);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(60, 21);
			this->textBox10->TabIndex = 56;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(175, 455);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(126, 13);
			this->label10->TabIndex = 55;
			this->label10->Text = L"Napunjenost baterije";
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox12->Location = System::Drawing::Point(528, 387);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(60, 21);
			this->textBox12->TabIndex = 54;
			// 
			// textBox13
			// 
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox13->Location = System::Drawing::Point(528, 360);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(60, 21);
			this->textBox13->TabIndex = 53;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(449, 395);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(73, 13);
			this->label12->TabIndex = 52;
			this->label12->Text = L"Frekvencija";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(479, 368);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(43, 13);
			this->label13->TabIndex = 51;
			this->label13->Text = L"Napon";
			// 
			// textBox16
			// 
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox16->Location = System::Drawing::Point(162, 137);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(60, 21);
			this->textBox16->TabIndex = 50;
			// 
			// textBox17
			// 
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox17->Location = System::Drawing::Point(162, 110);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(60, 21);
			this->textBox17->TabIndex = 49;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(120, 141);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(36, 13);
			this->label16->TabIndex = 48;
			this->label16->Text = L"Ugao";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(94, 118);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(62, 13);
			this->label17->TabIndex = 47;
			this->label17->Text = L"Insolacija";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MediumAquamarine;
			this->button1->Location = System::Drawing::Point(452, 123);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(162, 33);
			this->button1->TabIndex = 63;
			this->button1->Text = L"Dodaj SE";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &solarna::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(230, 45);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(152, 21);
			this->comboBox1->TabIndex = 64;
			this->comboBox1->Text = L"Izaberite solarnu elektranu";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &solarna::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(227, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 13);
			this->label1->TabIndex = 65;
			this->label1->Text = L"Lista solarnih elektrana";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(413, 368);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(23, 26);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox6->TabIndex = 66;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(473, 305);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(23, 26);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 67;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(344, 305);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(23, 26);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox2->TabIndex = 68;
			this->pictureBox2->TabStop = false;
			// 
			// solarna
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(626, 540);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"solarna";
			this->Text = L"SE";
			this->Load += gcnew System::EventHandler(this, &solarna::solarna_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void solarna_Load(System::Object^  sender, System::EventArgs^  e) {
				 FileStream^ fstrm1 = gcnew FileStream("solarneektrane.txt", FileMode::Open,FileAccess::Read);
				BinaryReader^ binw1 = gcnew BinaryReader(fstrm1);
				binw1->BaseStream->Seek(0,SeekOrigin::Begin);
				while(binw1->PeekChar()!=-1)
				 {
					 SolarnaElektrana ^s;
					 s=gcnew SolarnaElektrana();
					 s->ReadSE(binw1);
					 solarne->Add(s);
				}
				binw1->Close();
				fstrm1->Close();
				 for(int i=0; i<solarne->Count; i++)
				 {
					 SolarnaElektrana ^s;
					 s=gcnew SolarnaElektrana();
					 s=(SolarnaElektrana ^)(solarne[i]);
					 comboBox1->Items->Add(s->getIme());
				 }
			 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 String ^ime=comboBox1->SelectedItem->ToString();
			 for(int i=0; i<solarne->Count; i++)
			 {
				 SolarnaElektrana ^s;
				s=gcnew SolarnaElektrana();
				s=(SolarnaElektrana ^)(solarne[i]);
				if(s->getIme()==ime)
				{
					textBox17->Text=Convert::ToString(s->getInsolacija());
					textBox16->Text=Convert::ToString(s->getUgao());
					textBox9->Text=Convert::ToString(s->getP());
					textBox8->Text=Convert::ToString(s->getQ());
					textBox10->Text=Convert::ToString(s->getNapBat());
					textBox13->Text=Convert::ToString(s->getU());
					textBox12->Text=Convert::ToString(s->getF());
					if(s->getUkljucena()==false)
					{
						pictureBox1->Visible=true;
						pictureBox2->Visible=true;
						pictureBox6->Visible=true;
					}
					else if(s->getPunjnje()==true)
					{
						pictureBox1->Visible=true;
						pictureBox2->Visible=false;
						pictureBox6->Visible=false;
					}
					else if(s->getPraznjenje()==true)
					{
						pictureBox1->Visible=false;
						 pictureBox2->Visible=true;
						 pictureBox6->Visible=false;
					}
				}

			 }
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(solarne->Count>2)
				 MessageBox::Show("Prekoraèen broj solarnih elektrana!","Greška",MessageBoxButtons::OK,MessageBoxIcon::Error);
			 else
			 {
				 String ^ime;
				 int s1,s2,s3;
				 s1=0;s2=0;s3=0;
				 for(int i=0; i<solarne->Count; i++)
				 {
					 SolarnaElektrana ^s;
					s=gcnew SolarnaElektrana();
					s=(SolarnaElektrana ^)(solarne[i]);
					 if(s->getIme()=="SE1")
						 s1++;
					 if(s->getIme()=="SE2")
						 s2++;
					 if(s->getIme()=="SE3")
						 s3++;

				 }
				 if(s1==0)
					 ime="SE1";
				 else if(s2==0)
					 ime="SE2";
				 else if(s3==0)
					 ime="SE3";
				 SolarnaElektrana ^s;
				s=gcnew SolarnaElektrana(ime);
				 solarne->Add(s);
				 comboBox1->Items->Add(ime);
				 MessageBox::Show("Uspješno dodano!","Informacija",MessageBoxButtons::OK,MessageBoxIcon::Information);
				 //PISANJE U DATOTEKU


					 FileStream^ fstrm = gcnew FileStream("solarneektrane.txt", FileMode::Create,FileAccess::Write);
					BinaryWriter^ binw = gcnew BinaryWriter(fstrm);
					for(int i =0; i<solarne->Count; i++)
					{
						SolarnaElektrana ^s;
						s=gcnew SolarnaElektrana();
						s=(SolarnaElektrana ^)(solarne[i]);
						s->WriteSE(binw);
					}
					fstrm->Flush();
					fstrm->Close();
			 }
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(comboBox1->Text=="" || comboBox1->Text=="Izaberite solarnu elektranu")
					 MessageBox::Show("Niste izabrali solarnu elektranu!","Greška",MessageBoxButtons::OK,MessageBoxIcon::Error);
			 else
			 {
				 System::Windows::Forms::DialogResult r;
				 r=MessageBox::Show("Da li stvarno želite izbirisati solarnu elektranu?","Pitanje",MessageBoxButtons::YesNo,MessageBoxIcon::Question);
				 if(r==System::Windows::Forms::DialogResult::Yes)
				 {
					 
					 
					 String ^ime=comboBox1->SelectedItem->ToString();
						 for(int i=0; i<solarne->Count; i++)
						 {
							 SolarnaElektrana ^s;
							s=gcnew SolarnaElektrana();
							s=(SolarnaElektrana ^)(solarne[i]);
							 if(s->getIme()==ime)
							 {
								 solarne->RemoveAt(i);
								 comboBox1->Items->Remove(comboBox1->SelectedItem);
								 comboBox1->Text="";
							 }
						 }
						 textBox17->Text="";
						textBox16->Text="";
						textBox9->Text="";
						textBox8->Text="";
						textBox10->Text="";
						textBox13->Text="";
						textBox12->Text="";
						MessageBox::Show("Uspješno izbrisano!","Informacija",MessageBoxButtons::OK,MessageBoxIcon::Information);
						 //PISANJE U DATOTEKU


						 FileStream^ fstrm = gcnew FileStream("solarneektrane.txt", FileMode::Create,FileAccess::Write);
						BinaryWriter^ binw = gcnew BinaryWriter(fstrm);
						for(int i =0; i<solarne->Count; i++)
						{
							SolarnaElektrana ^s;
							s=gcnew SolarnaElektrana();
							s=(SolarnaElektrana ^)(solarne[i]);
							s->WriteSE(binw);
						}
						fstrm->Flush();
						fstrm->Close();
					 
				 }
			 }
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(comboBox1->Text=="" || comboBox1->Text=="Izaberite solarnu elektranu")
				 MessageBox::Show("Niste izabrali solarnu elektranu!","Greška",MessageBoxButtons::OK,MessageBoxIcon::Error);
			 else
			 {
				 String ^ime=comboBox1->SelectedItem->ToString();
				 for(int i=0; i<solarne->Count; i++)
				 {
					 SolarnaElektrana ^s;
					s=gcnew SolarnaElektrana();
					s=(SolarnaElektrana ^)(solarne[i]);
					if(s->getIme()==ime)
					{
						parametriSE ^p=gcnew parametriSE(solarne,ime);
						p->Show();

					}

				 }
			 }
		 }
};
}


