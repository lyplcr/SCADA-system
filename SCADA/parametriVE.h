#pragma once

#include "Elektrana.h"
#include "Vjetroelektrana.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace SCADA {

	/// <summary>
	/// Summary for parametriVE
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class parametriVE : public System::Windows::Forms::Form
	{
	private:Vjetroelektrana ^v;
	public:
		ArrayList ^vjetro;
		
		parametriVE(ArrayList ^l,String ^ime)
		{
			vjetro=gcnew ArrayList();
			vjetro=l;
			v=gcnew Vjetroelektrana();
			for(int i=0; i<vjetro->Count; i++)
			{
				Vjetroelektrana ^a=gcnew Vjetroelektrana();
				a=(Vjetroelektrana^)(vjetro[i]);
				if(a->getIme()==ime)
					v=a;
			}
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~parametriVE()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;


	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::TextBox^  p;
	private: System::Windows::Forms::TextBox^  q;
	private: System::Windows::Forms::TextBox^  napon;
	private: System::Windows::Forms::TextBox^  freq;
	private: System::Windows::Forms::TextBox^  strujabat;
	private: System::Windows::Forms::TextBox^  naponbat;
	private: System::Windows::Forms::TextBox^  brzinavjetra;







	private: System::Windows::Forms::TextBox^  napajanje;

	private: System::Windows::Forms::TextBox^  baterija;

	private: System::Windows::Forms::TextBox^  praznjenje;

	private: System::Windows::Forms::TextBox^  punjenje;

	private: System::Windows::Forms::TextBox^  napunjenost;
	private: System::Windows::Forms::TextBox^  smjervjetra;
	private: System::Windows::Forms::TextBox^  maxvjetar;




	private: System::Windows::Forms::TextBox^  minvjetar;

	private: System::Windows::Forms::TextBox^  maxstruja;

	private: System::Windows::Forms::TextBox^  minstruja;

	private: System::Windows::Forms::TextBox^  maxf;

	private: System::Windows::Forms::TextBox^  minf;

	private: System::Windows::Forms::TextBox^  maxnapon;

	private: System::Windows::Forms::TextBox^  minnapon;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  maxsnaga;

	private: System::Windows::Forms::Label^  label17;



	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::GroupBox^  groupBox1;
private: System::Windows::Forms::TextBox^  dpid;

private: System::Windows::Forms::TextBox^  ipid;

private: System::Windows::Forms::TextBox^  ppid;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(parametriVE::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->p = (gcnew System::Windows::Forms::TextBox());
			this->q = (gcnew System::Windows::Forms::TextBox());
			this->napon = (gcnew System::Windows::Forms::TextBox());
			this->freq = (gcnew System::Windows::Forms::TextBox());
			this->strujabat = (gcnew System::Windows::Forms::TextBox());
			this->naponbat = (gcnew System::Windows::Forms::TextBox());
			this->brzinavjetra = (gcnew System::Windows::Forms::TextBox());
			this->napajanje = (gcnew System::Windows::Forms::TextBox());
			this->baterija = (gcnew System::Windows::Forms::TextBox());
			this->praznjenje = (gcnew System::Windows::Forms::TextBox());
			this->punjenje = (gcnew System::Windows::Forms::TextBox());
			this->napunjenost = (gcnew System::Windows::Forms::TextBox());
			this->smjervjetra = (gcnew System::Windows::Forms::TextBox());
			this->maxvjetar = (gcnew System::Windows::Forms::TextBox());
			this->minvjetar = (gcnew System::Windows::Forms::TextBox());
			this->maxstruja = (gcnew System::Windows::Forms::TextBox());
			this->minstruja = (gcnew System::Windows::Forms::TextBox());
			this->maxf = (gcnew System::Windows::Forms::TextBox());
			this->minf = (gcnew System::Windows::Forms::TextBox());
			this->maxnapon = (gcnew System::Windows::Forms::TextBox());
			this->minnapon = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->maxsnaga = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dpid = (gcnew System::Windows::Forms::TextBox());
			this->ipid = (gcnew System::Windows::Forms::TextBox());
			this->ppid = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 31);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"P";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 70);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Q";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 110);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Napon";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 151);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Frekvencija";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(16, 192);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(133, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Struja akumulatora";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(16, 234);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(134, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Napon akumulatora";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(16, 278);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(175, 16);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Napunjenost akumulatora";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(16, 318);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(124, 16);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Punjenje prekidač";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(443, 148);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(148, 16);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Minimalna frekvencija";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(443, 108);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(127, 16);
			this->label10->TabIndex = 14;
			this->label10->Text = L"Maksimalan napon";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(443, 69);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(116, 16);
			this->label11->TabIndex = 13;
			this->label11->Text = L"Minimalan napon";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(16, 522);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(89, 16);
			this->label12->TabIndex = 12;
			this->label12->Text = L"Smjer vjetra";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(16, 481);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(91, 16);
			this->label13->TabIndex = 11;
			this->label13->Text = L"Brzina vjetra";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(16, 439);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(73, 16);
			this->label14->TabIndex = 10;
			this->label14->Text = L"Napajanje";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(16, 399);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(118, 16);
			this->label15->TabIndex = 9;
			this->label15->Text = L"Prekidač baterije";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(16, 357);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(136, 16);
			this->label16->TabIndex = 8;
			this->label16->Text = L"Pražnjenje prekidač";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(443, 356);
			this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(170, 16);
			this->label19->TabIndex = 20;
			this->label19->Text = L"Maksimalna brzina vjetra";
			this->label19->Click += gcnew System::EventHandler(this, &parametriVE::label19_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(443, 316);
			this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(159, 16);
			this->label20->TabIndex = 19;
			this->label20->Text = L"Minimalna brzina vjetra";
			this->label20->Click += gcnew System::EventHandler(this, &parametriVE::label20_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(443, 272);
			this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(210, 16);
			this->label21->TabIndex = 18;
			this->label21->Text = L"Maksimalna struja akumulatora";
			this->label21->Click += gcnew System::EventHandler(this, &parametriVE::label21_Click);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(443, 230);
			this->label22->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(199, 16);
			this->label22->TabIndex = 17;
			this->label22->Text = L"Minimalna struja akumulatora";
			this->label22->Click += gcnew System::EventHandler(this, &parametriVE::label22_Click);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(443, 189);
			this->label23->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(159, 16);
			this->label23->TabIndex = 16;
			this->label23->Text = L"Maksimalna frekvencija";
			this->label23->Click += gcnew System::EventHandler(this, &parametriVE::label23_Click);
			// 
			// p
			// 
			this->p->Location = System::Drawing::Point(215, 27);
			this->p->Margin = System::Windows::Forms::Padding(4);
			this->p->Name = L"p";
			this->p->Size = System::Drawing::Size(132, 23);
			this->p->TabIndex = 21;
			// 
			// q
			// 
			this->q->Location = System::Drawing::Point(215, 66);
			this->q->Margin = System::Windows::Forms::Padding(4);
			this->q->Name = L"q";
			this->q->Size = System::Drawing::Size(132, 23);
			this->q->TabIndex = 23;
			// 
			// napon
			// 
			this->napon->Location = System::Drawing::Point(215, 106);
			this->napon->Margin = System::Windows::Forms::Padding(4);
			this->napon->Name = L"napon";
			this->napon->Size = System::Drawing::Size(132, 23);
			this->napon->TabIndex = 25;
			// 
			// freq
			// 
			this->freq->Location = System::Drawing::Point(215, 148);
			this->freq->Margin = System::Windows::Forms::Padding(4);
			this->freq->Name = L"freq";
			this->freq->Size = System::Drawing::Size(132, 23);
			this->freq->TabIndex = 27;
			// 
			// strujabat
			// 
			this->strujabat->Location = System::Drawing::Point(215, 188);
			this->strujabat->Margin = System::Windows::Forms::Padding(4);
			this->strujabat->Name = L"strujabat";
			this->strujabat->Size = System::Drawing::Size(132, 23);
			this->strujabat->TabIndex = 29;
			// 
			// naponbat
			// 
			this->naponbat->Location = System::Drawing::Point(215, 230);
			this->naponbat->Margin = System::Windows::Forms::Padding(4);
			this->naponbat->Name = L"naponbat";
			this->naponbat->Size = System::Drawing::Size(132, 23);
			this->naponbat->TabIndex = 31;
			// 
			// brzinavjetra
			// 
			this->brzinavjetra->Location = System::Drawing::Point(215, 478);
			this->brzinavjetra->Margin = System::Windows::Forms::Padding(4);
			this->brzinavjetra->Name = L"brzinavjetra";
			this->brzinavjetra->Size = System::Drawing::Size(132, 23);
			this->brzinavjetra->TabIndex = 37;
			// 
			// napajanje
			// 
			this->napajanje->Location = System::Drawing::Point(215, 436);
			this->napajanje->Margin = System::Windows::Forms::Padding(4);
			this->napajanje->Name = L"napajanje";
			this->napajanje->Size = System::Drawing::Size(132, 23);
			this->napajanje->TabIndex = 36;
			// 
			// baterija
			// 
			this->baterija->Location = System::Drawing::Point(215, 395);
			this->baterija->Margin = System::Windows::Forms::Padding(4);
			this->baterija->Name = L"baterija";
			this->baterija->Size = System::Drawing::Size(132, 23);
			this->baterija->TabIndex = 35;
			// 
			// praznjenje
			// 
			this->praznjenje->Location = System::Drawing::Point(215, 354);
			this->praznjenje->Margin = System::Windows::Forms::Padding(4);
			this->praznjenje->Name = L"praznjenje";
			this->praznjenje->Size = System::Drawing::Size(132, 23);
			this->praznjenje->TabIndex = 34;
			// 
			// punjenje
			// 
			this->punjenje->Location = System::Drawing::Point(215, 314);
			this->punjenje->Margin = System::Windows::Forms::Padding(4);
			this->punjenje->Name = L"punjenje";
			this->punjenje->Size = System::Drawing::Size(132, 23);
			this->punjenje->TabIndex = 33;
			// 
			// napunjenost
			// 
			this->napunjenost->Location = System::Drawing::Point(215, 274);
			this->napunjenost->Margin = System::Windows::Forms::Padding(4);
			this->napunjenost->Name = L"napunjenost";
			this->napunjenost->Size = System::Drawing::Size(132, 23);
			this->napunjenost->TabIndex = 32;
			// 
			// smjervjetra
			// 
			this->smjervjetra->Location = System::Drawing::Point(215, 519);
			this->smjervjetra->Margin = System::Windows::Forms::Padding(4);
			this->smjervjetra->Name = L"smjervjetra";
			this->smjervjetra->Size = System::Drawing::Size(132, 23);
			this->smjervjetra->TabIndex = 38;
			// 
			// maxvjetar
			// 
			this->maxvjetar->Location = System::Drawing::Point(661, 353);
			this->maxvjetar->Margin = System::Windows::Forms::Padding(4);
			this->maxvjetar->Name = L"maxvjetar";
			this->maxvjetar->Size = System::Drawing::Size(132, 23);
			this->maxvjetar->TabIndex = 46;
			// 
			// minvjetar
			// 
			this->minvjetar->Location = System::Drawing::Point(661, 313);
			this->minvjetar->Margin = System::Windows::Forms::Padding(4);
			this->minvjetar->Name = L"minvjetar";
			this->minvjetar->Size = System::Drawing::Size(132, 23);
			this->minvjetar->TabIndex = 45;
			// 
			// maxstruja
			// 
			this->maxstruja->Location = System::Drawing::Point(661, 268);
			this->maxstruja->Margin = System::Windows::Forms::Padding(4);
			this->maxstruja->Name = L"maxstruja";
			this->maxstruja->Size = System::Drawing::Size(132, 23);
			this->maxstruja->TabIndex = 44;
			// 
			// minstruja
			// 
			this->minstruja->Location = System::Drawing::Point(661, 226);
			this->minstruja->Margin = System::Windows::Forms::Padding(4);
			this->minstruja->Name = L"minstruja";
			this->minstruja->Size = System::Drawing::Size(132, 23);
			this->minstruja->TabIndex = 43;
			// 
			// maxf
			// 
			this->maxf->Location = System::Drawing::Point(661, 185);
			this->maxf->Margin = System::Windows::Forms::Padding(4);
			this->maxf->Name = L"maxf";
			this->maxf->Size = System::Drawing::Size(132, 23);
			this->maxf->TabIndex = 42;
			// 
			// minf
			// 
			this->minf->Location = System::Drawing::Point(661, 143);
			this->minf->Margin = System::Windows::Forms::Padding(4);
			this->minf->Name = L"minf";
			this->minf->Size = System::Drawing::Size(132, 23);
			this->minf->TabIndex = 41;
			// 
			// maxnapon
			// 
			this->maxnapon->Location = System::Drawing::Point(661, 103);
			this->maxnapon->Margin = System::Windows::Forms::Padding(4);
			this->maxnapon->Name = L"maxnapon";
			this->maxnapon->Size = System::Drawing::Size(132, 23);
			this->maxnapon->TabIndex = 40;
			// 
			// minnapon
			// 
			this->minnapon->Location = System::Drawing::Point(661, 65);
			this->minnapon->Margin = System::Windows::Forms::Padding(4);
			this->minnapon->Name = L"minnapon";
			this->minnapon->Size = System::Drawing::Size(132, 23);
			this->minnapon->TabIndex = 39;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gold;
			this->button1->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(446, 555);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(241, 30);
			this->button1->TabIndex = 47;
			this->button1->Text = L"Sačuvaj";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &parametriVE::button1_Click);
			// 
			// maxsnaga
			// 
			this->maxsnaga->Location = System::Drawing::Point(661, 27);
			this->maxsnaga->Margin = System::Windows::Forms::Padding(4);
			this->maxsnaga->Name = L"maxsnaga";
			this->maxsnaga->Size = System::Drawing::Size(132, 23);
			this->maxsnaga->TabIndex = 49;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(443, 31);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(126, 16);
			this->label17->TabIndex = 48;
			this->label17->Text = L"Maksimalna snaga";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(19, 103);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(17, 16);
			this->label18->TabIndex = 52;
			this->label18->Text = L"D";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(19, 58);
			this->label24->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(13, 16);
			this->label24->TabIndex = 51;
			this->label24->Text = L"I";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(19, 19);
			this->label25->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(16, 16);
			this->label25->TabIndex = 50;
			this->label25->Text = L"P";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dpid);
			this->groupBox1->Controls->Add(this->ipid);
			this->groupBox1->Controls->Add(this->ppid);
			this->groupBox1->Controls->Add(this->label25);
			this->groupBox1->Controls->Add(this->label24);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Location = System::Drawing::Point(446, 394);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(241, 122);
			this->groupBox1->TabIndex = 56;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"PID regulator";
			// 
			// dpid
			// 
			this->dpid->Location = System::Drawing::Point(96, 93);
			this->dpid->Name = L"dpid";
			this->dpid->Size = System::Drawing::Size(100, 23);
			this->dpid->TabIndex = 55;
			// 
			// ipid
			// 
			this->ipid->Location = System::Drawing::Point(96, 55);
			this->ipid->Name = L"ipid";
			this->ipid->Size = System::Drawing::Size(100, 23);
			this->ipid->TabIndex = 54;
			// 
			// ppid
			// 
			this->ppid->Location = System::Drawing::Point(96, 16);
			this->ppid->Name = L"ppid";
			this->ppid->Size = System::Drawing::Size(100, 23);
			this->ppid->TabIndex = 53;
			// 
			// parametriVE
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PaleTurquoise;
			this->ClientSize = System::Drawing::Size(915, 620);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->maxsnaga);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->maxvjetar);
			this->Controls->Add(this->minvjetar);
			this->Controls->Add(this->maxstruja);
			this->Controls->Add(this->minstruja);
			this->Controls->Add(this->maxf);
			this->Controls->Add(this->minf);
			this->Controls->Add(this->maxnapon);
			this->Controls->Add(this->minnapon);
			this->Controls->Add(this->smjervjetra);
			this->Controls->Add(this->brzinavjetra);
			this->Controls->Add(this->napajanje);
			this->Controls->Add(this->baterija);
			this->Controls->Add(this->praznjenje);
			this->Controls->Add(this->punjenje);
			this->Controls->Add(this->napunjenost);
			this->Controls->Add(this->naponbat);
			this->Controls->Add(this->strujabat);
			this->Controls->Add(this->freq);
			this->Controls->Add(this->napon);
			this->Controls->Add(this->q);
			this->Controls->Add(this->p);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"parametriVE";
			this->Text = L"parametriVE";
			this->Load += gcnew System::EventHandler(this, &parametriVE::parametriVE_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void tableLayoutPanel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
	private: System::Void label23_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label18_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label19_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label20_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label21_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label22_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label17_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void parametriVE_Load(System::Object^  sender, System::EventArgs^  e) {
				p->Text=Convert::ToString(v->getP());
				 q->Text=Convert::ToString(v->getQ());
				 napon->Text=Convert::ToString(v->getU());
				 freq->Text=Convert::ToString(v->getF());
				 strujabat->Text=Convert::ToString(v->getIbat());
				 naponbat->Text=Convert::ToString(v->getUBat());
				 napunjenost->Text=Convert::ToString(v->getNapBat());
				 punjenje->Text=Convert::ToString(v->getPunjnje());
				 praznjenje->Text=Convert::ToString(v->getPraznjenje());
				 baterija->Text=Convert::ToString(v->getBaterija());
				 napajanje->Text=Convert::ToString(v->getNapajanje());		 
				 brzinavjetra->Text=Convert::ToString(v->getBrzinaVjetra());
				 smjervjetra->Text=v->getSmjerVjetra();
				 maxsnaga->Text=Convert::ToString(v->getMaxSnaga());
				 minnapon->Text=Convert::ToString(v->getMinNapon());
				 maxnapon->Text=Convert::ToString(v->getMaxNapon());
				 minf->Text=Convert::ToString(v->getMinFreq());
				 maxf->Text=Convert::ToString(v->getMaxFreq());
				 minstruja->Text=Convert::ToString(v->getMinStruja());
				 maxstruja->Text=Convert::ToString(v->getMaxStruja());
				 maxvjetar->Text=Convert::ToString(v->getMaxVjetar());
				 minvjetar->Text=Convert::ToString(v->getMinVjetar());
				 ppid->Text=Convert::ToString(v->getPPid());
				 ipid->Text=Convert::ToString(v->getIPid());
				 dpid->Text=Convert::ToString(v->getDPid());
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 double maxs=Convert::ToDouble(maxsnaga->Text);
			 double minu=Convert::ToDouble(minnapon->Text);
			 double maxu=Convert::ToDouble(maxnapon->Text);
			 double mif=Convert::ToDouble(minf->Text);
			 double maf=Convert::ToDouble(maxf->Text);
			 double mini=Convert::ToDouble(minstruja->Text);
			 double maxi=Convert::ToDouble(maxstruja->Text);
			 double pid=Convert::ToDouble(ppid->Text);
			 double i=Convert::ToDouble(ipid->Text);
			 double d=Convert::ToDouble(dpid->Text);
			 double brzina_v=Convert::ToDouble(brzinavjetra->Text);
			 String ^smjer=smjervjetra->Text;
			 double max_v=Convert::ToDouble(maxvjetar->Text);
			 double min_v=Convert::ToDouble(minvjetar->Text);
			 if(Convert::ToDouble(napon->Text)>maxu || Convert::ToDouble(napon->Text)<minu || Convert::ToDouble(freq->Text)>maf || Convert::ToDouble(freq->Text)<mif || Convert::ToDouble(strujabat->Text)>maxi)
				 v->setUkljucena(false);
			 else
				 v->setUkljucena(true);
			 v->PostaviParametreVE(v->getIme(),brzina_v,max_v,min_v,smjer,Convert::ToDouble(p->Text),Convert::ToDouble(q->Text),Convert::ToDouble(napon->Text),Convert::ToDouble(freq->Text),Convert::ToDouble(strujabat->Text),Convert::ToDouble(naponbat->Text),Convert::ToDouble(napunjenost->Text),Convert::ToDouble(minnapon->Text),Convert::ToDouble(maxnapon->Text),Convert::ToDouble(minf->Text),Convert::ToDouble(maxf->Text),Convert::ToDouble(minstruja->Text),Convert::ToDouble(maxstruja->Text),Convert::ToDouble(ppid->Text),Convert::ToDouble(ipid->Text),Convert::ToDouble(dpid->Text),maxs);
			 v->setPPid(pid);
			 v->setIPid(i);
			 v->setDPid(d);
			 v->setMinNapon(minu);
			 v->setMaxNapon(maxu);
			 v->setMaxF(maf);
			 v->setMinF(mif);
			 v->setMaxStruja(maxi);
			 v->setMinStruja(mini);
			 v->setMaxSnaga(maxs);
			 v->setMaxVjetar(max_v);
			 v->setMinVjetar(min_v);
			 v->setBrzinaVjetra(brzina_v);
			 for(int i=0; i<vjetro->Count; i++)
			 {
				 Vjetroelektrana ^ve;
				 ve=gcnew Vjetroelektrana();
				 ve=(Vjetroelektrana ^)(vjetro[i]);
				 if(ve->getIme()==v->getIme())
				 {
					 vjetro->RemoveAt(i);
					 vjetro->Insert(i,v);
				 }
			 }
			 //PISANJE U DATOTEKU


					 FileStream^ fstrm = gcnew FileStream("vjetroelektrane.txt", FileMode::OpenOrCreate,FileAccess::Write);
					BinaryWriter^ binw = gcnew BinaryWriter(fstrm);
					for(int i =0; i<vjetro->Count; i++)
					{
						Vjetroelektrana ^ve;
						 ve=gcnew Vjetroelektrana();
						 ve=(Vjetroelektrana ^)(vjetro[i]);
						ve->WriteVE(binw);
					}
					fstrm->Flush();
					fstrm->Close();
					MessageBox::Show("Uspješno sačuvano!","Informacija",MessageBoxButtons::OK,MessageBoxIcon::Information);
		 }
};
}
