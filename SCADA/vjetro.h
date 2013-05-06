#pragma once

#include "Elektrana.h"
#include "Vjetroelektrana.h"
#include "parametriVE.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace SCADA {

	/// <summary>
	/// Summary for vjetro
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class vjetro : public System::Windows::Forms::Form
	{
	public:
		ArrayList ^vjetroe;
		vjetro(void)
		{
			vjetroe=gcnew ArrayList();
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~vjetro()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button2;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label6;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(vjetro::typeid));
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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::MediumAquamarine;
			this->button2->Location = System::Drawing::Point(458, 74);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(162, 23);
			this->button2->TabIndex = 50;
			this->button2->Text = L"Briši VE";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &vjetro::button2_Click);
			// 
			// textBox16
			// 
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox16->Location = System::Drawing::Point(284, 176);
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->Size = System::Drawing::Size(60, 21);
			this->textBox16->TabIndex = 49;
			// 
			// textBox17
			// 
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox17->Location = System::Drawing::Point(284, 142);
			this->textBox17->Name = L"textBox17";
			this->textBox17->ReadOnly = true;
			this->textBox17->Size = System::Drawing::Size(60, 21);
			this->textBox17->TabIndex = 48;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(262, 179);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(16, 13);
			this->label16->TabIndex = 47;
			this->label16->Text = L"Q";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(264, 150);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(14, 13);
			this->label17->TabIndex = 46;
			this->label17->Text = L"P";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(560, 312);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(60, 21);
			this->textBox4->TabIndex = 45;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(560, 285);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(60, 21);
			this->textBox5->TabIndex = 44;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(481, 320);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 13);
			this->label4->TabIndex = 43;
			this->label4->Text = L"Frekvencija";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(511, 293);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 13);
			this->label5->TabIndex = 42;
			this->label5->Text = L"Napon";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(352, 344);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(60, 21);
			this->textBox3->TabIndex = 41;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(220, 347);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 13);
			this->label3->TabIndex = 40;
			this->label3->Text = L"Napunjenost baterije";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(198, 92);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(60, 21);
			this->textBox2->TabIndex = 39;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(198, 62);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(60, 21);
			this->textBox1->TabIndex = 38;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(111, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 13);
			this->label2->TabIndex = 37;
			this->label2->Text = L"Smjer vjetra";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(111, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 13);
			this->label1->TabIndex = 36;
			this->label1->Text = L"Brzina vjetra";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MediumAquamarine;
			this->button1->Location = System::Drawing::Point(458, 45);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(162, 23);
			this->button1->TabIndex = 35;
			this->button1->Text = L"Parametri";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &vjetro::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(500, 215);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(20, 19);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 34;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(392, 215);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(20, 19);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox2->TabIndex = 33;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(444, 259);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(20, 19);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox6->TabIndex = 32;
			this->pictureBox6->TabStop = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::MediumAquamarine;
			this->button3->Location = System::Drawing::Point(458, 103);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(162, 23);
			this->button3->TabIndex = 51;
			this->button3->Text = L"Dodaj VE";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &vjetro::button3_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(114, 35);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(144, 21);
			this->comboBox1->TabIndex = 52;
			this->comboBox1->Text = L"Izaberite vjetroelektranu";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &vjetro::comboBox1_SelectedIndexChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(111, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(102, 13);
			this->label6->TabIndex = 53;
			this->label6->Text = L"Lista vjetroelektrana";
			// 
			// vjetro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(632, 430);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox6);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"vjetro";
			this->Text = L"VE";
			this->Load += gcnew System::EventHandler(this, &vjetro::vjetro_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void vjetro_Load(System::Object^  sender, System::EventArgs^  e) {
				 FileStream^ fstrm1 = gcnew FileStream("vjetroelektrane.txt", FileMode::Open,FileAccess::Read);
				BinaryReader^ binw1 = gcnew BinaryReader(fstrm1);
				binw1->BaseStream->Seek(0,SeekOrigin::Begin);
				while(binw1->PeekChar()!=-1)
				 {
					 Vjetroelektrana ^v;
					 v=gcnew Vjetroelektrana();
					 v->ReadVE(binw1);
					 vjetroe->Add(v);
				}
				binw1->Close();
				fstrm1->Close();
				 for(int i=0; i<vjetroe->Count; i++)
				 {
					 Vjetroelektrana ^v;
					 v=gcnew Vjetroelektrana();
					 v=(Vjetroelektrana ^)(vjetroe[i]);
					 comboBox1->Items->Add(v->getIme());
				 }
			 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 String ^ime=comboBox1->SelectedItem->ToString();
			 for(int i=0; i<vjetroe->Count; i++)
			 {
				 Vjetroelektrana ^v=gcnew Vjetroelektrana();
				 v=(Vjetroelektrana^)(vjetroe[i]);
				 if(v->getIme()==ime)
				 {
					 textBox1->Text=Convert::ToString(v->getBrzinaVjetra());
					 textBox2->Text=v->getSmjerVjetra();
					 textBox17->Text=Convert::ToString(v->getP());
					 textBox16->Text=Convert::ToString(v->getQ());
					 textBox5->Text=Convert::ToString(v->getU());
					 textBox4->Text=Convert::ToString(v->getF());
					 textBox3->Text=Convert::ToString(v->getNapBat());
					 if(v->getUkljucena()==false)
					 {
						 pictureBox1->Visible=true;
						 pictureBox2->Visible=true;
						 pictureBox6->Visible=true;

					 }
					 else if(v->getPunjnje()==true)
					 {
						 pictureBox1->Visible=true;
						 pictureBox2->Visible=false;
						 pictureBox6->Visible=false;
					 }
					 else if(v->getPraznjenje()==true)
					 {
						 pictureBox1->Visible=false;
						 pictureBox2->Visible=true;
						 pictureBox6->Visible=false;

					 }
				 }
			 }
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(vjetroe->Count>2)
				 MessageBox::Show("Prekoraèen broj vjetroelektrana!","Greška",MessageBoxButtons::OK,MessageBoxIcon::Error);
			 else
			 {
				 String ^ime;
				 int v1,v2,v3;
				 v1=0;v2=0;v3=0;
				 for(int i=0; i<vjetroe->Count; i++)
				 {
					 Vjetroelektrana ^v;
					v=gcnew Vjetroelektrana();
					v=(Vjetroelektrana ^)(vjetroe[i]);
					 if(v->getIme()=="VE1")
						 v1++;
					 if(v->getIme()=="VE2")
						 v2++;
					 if(v->getIme()=="VE3")
						 v3++;

				 }
				 if(v1==0)
					 ime="VE1";
				 else if(v2==0)
					 ime="VE2";
				 else if(v3==0)
					 ime="VE3";
				 Vjetroelektrana ^v;
				 v=gcnew Vjetroelektrana(ime);
				 vjetroe->Add(v);
				 comboBox1->Items->Add(ime);
				 MessageBox::Show("Uspješno dodano!","Informacija",MessageBoxButtons::OK,MessageBoxIcon::Information);
				 //PISANJE U DATOTEKU


					 FileStream^ fstrm = gcnew FileStream("vjetroelektrane.txt", FileMode::Create,FileAccess::Write);
					BinaryWriter^ binw = gcnew BinaryWriter(fstrm);
					for(int i =0; i<vjetroe->Count; i++)
					{
						Vjetroelektrana ^v;
						v=gcnew Vjetroelektrana();
						v=(Vjetroelektrana ^)(vjetroe[i]);
						v->WriteVE(binw);
					}
					fstrm->Flush();
					fstrm->Close();
			 }
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(comboBox1->Text=="" || comboBox1->Text=="Izaberite vjetroelektranu")
					 MessageBox::Show("Niste izabrali vjetroelektranu!","Greška",MessageBoxButtons::OK,MessageBoxIcon::Error);
			 else
			 {
				 System::Windows::Forms::DialogResult r;
				 r=MessageBox::Show("Da li stvarno želite izbirisati vjetroelektranu?","Pitanje",MessageBoxButtons::YesNo,MessageBoxIcon::Question);
				 if(r==System::Windows::Forms::DialogResult::Yes)
				 {
					 
					 
					 String ^ime=comboBox1->SelectedItem->ToString();
						 for(int i=0; i<vjetroe->Count; i++)
						 {
							 Vjetroelektrana ^v;
							 v=gcnew Vjetroelektrana();
							 v=(Vjetroelektrana ^)(vjetroe[i]);
							 if(v->getIme()==ime)
							 {
								 vjetroe->RemoveAt(i);
								 comboBox1->Items->Remove(comboBox1->SelectedItem);
								 comboBox1->Text="";
							 }
						 }
						 textBox1->Text="";
						textBox2->Text="";
						textBox17->Text="";
						textBox16->Text="";
						textBox5->Text="";
						textBox4->Text="";
						textBox3->Text="";
						MessageBox::Show("Uspješno izbrisano!","Informacija",MessageBoxButtons::OK,MessageBoxIcon::Information);
						 //PISANJE U DATOTEKU


						 FileStream^ fstrm = gcnew FileStream("vjetroelektrane.txt", FileMode::Create,FileAccess::Write);
						BinaryWriter^ binw = gcnew BinaryWriter(fstrm);
						for(int i =0; i<vjetroe->Count; i++)
						{
							Vjetroelektrana ^v;
							 v=gcnew Vjetroelektrana();
							 v=(Vjetroelektrana ^)(vjetroe[i]);
							v->WriteVE(binw);
						}
						fstrm->Flush();
						fstrm->Close();
					 
				 }
			 }
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(comboBox1->Text=="" || comboBox1->Text=="Izaberite vjetroelektranu")
				 MessageBox::Show("Niste izabrali vjetroelektranu!","Greška",MessageBoxButtons::OK,MessageBoxIcon::Error);
			 else
			 {
				 String ^ime=comboBox1->SelectedItem->ToString();
				 for(int i=0; i<vjetroe->Count; i++)
				 {
					 Vjetroelektrana ^v;
					 v=gcnew Vjetroelektrana();
					 v=(Vjetroelektrana ^)(vjetroe[i]);
					if(v->getIme()==ime)
					{
						parametriVE ^p=gcnew parametriVE(vjetroe,ime);
						p->Show();

					}

				 }
			 }
		 }
};
}
