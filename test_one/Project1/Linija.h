#pragma once
#include <string>
#include <fstream>
#include "Class_LINE.h"
#include "Glob.h"
#include "Redag_LINE.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Linija
	/// </summary>
	public ref class Linija : public System::Windows::Forms::Form
	{
	public:
		Linija(void)
		{
			InitializeComponent();
			detales();
			operatoriai();
			combo();
			LinSar();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Linija()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected: 






	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel2;

	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel4;

	private: System::Windows::Forms::TextBox^  textBox6;

	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  VardasIrPavardė;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Detalė;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Kiekis;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  MasinosNR;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Komentaras;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Linija::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->VardasIrPavardė = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Detalė = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Kiekis = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->MasinosNR = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Komentaras = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel5 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->flowLayoutPanel4 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->flowLayoutPanel1->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			this->flowLayoutPanel4->SuspendLayout();
			this->flowLayoutPanel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlLight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {this->VardasIrPavardė, 
				this->Detalė, this->Kiekis, this->MasinosNR, this->Komentaras});
			this->dataGridView1->Location = System::Drawing::Point(12, 299);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1160, 450);
			this->dataGridView1->TabIndex = 0;
			// 
			// VardasIrPavardė
			// 
			this->VardasIrPavardė->FillWeight = 440;
			this->VardasIrPavardė->HeaderText = L"VardasIrPavardė";
			this->VardasIrPavardė->Name = L"VardasIrPavardė";
			this->VardasIrPavardė->Width = 440;
			// 
			// Detalė
			// 
			this->Detalė->FillWeight = 220;
			this->Detalė->HeaderText = L"Detalė";
			this->Detalė->Name = L"Detalė";
			this->Detalė->Width = 220;
			// 
			// Kiekis
			// 
			this->Kiekis->HeaderText = L"Kiekis";
			this->Kiekis->Name = L"Kiekis";
			// 
			// MasinosNR
			// 
			this->MasinosNR->HeaderText = L"MasinosNR";
			this->MasinosNR->Name = L"MasinosNR";
			// 
			// Komentaras
			// 
			this->Komentaras->FillWeight = 257;
			this->Komentaras->HeaderText = L"Komentaras";
			this->Komentaras->Name = L"Komentaras";
			this->Komentaras->Width = 257;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->flowLayoutPanel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->flowLayoutPanel1->Controls->Add(this->label1);
			this->flowLayoutPanel1->Controls->Add(this->label2);
			this->flowLayoutPanel1->Controls->Add(this->label3);
			this->flowLayoutPanel1->Controls->Add(this->label4);
			this->flowLayoutPanel1->Location = System::Drawing::Point(12, 12);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(110, 186);
			this->flowLayoutPanel1->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(10, 10);
			this->label1->Margin = System::Windows::Forms::Padding(10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Vardas";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(10, 55);
			this->label2->Margin = System::Windows::Forms::Padding(10);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Pavardė";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(10, 100);
			this->label3->Margin = System::Windows::Forms::Padding(10);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Detalė";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(10, 145);
			this->label4->Margin = System::Windows::Forms::Padding(10);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 25);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Kiekis";
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->flowLayoutPanel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->flowLayoutPanel2->Controls->Add(this->flowLayoutPanel5);
			this->flowLayoutPanel2->Controls->Add(this->comboBox2);
			this->flowLayoutPanel2->Controls->Add(this->comboBox3);
			this->flowLayoutPanel2->Controls->Add(this->textBox1);
			this->flowLayoutPanel2->Location = System::Drawing::Point(128, 12);
			this->flowLayoutPanel2->Margin = System::Windows::Forms::Padding(13);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(384, 186);
			this->flowLayoutPanel2->TabIndex = 8;
			// 
			// flowLayoutPanel5
			// 
			this->flowLayoutPanel5->Location = System::Drawing::Point(3, 3);
			this->flowLayoutPanel5->Name = L"flowLayoutPanel5";
			this->flowLayoutPanel5->Size = System::Drawing::Size(200, 32);
			this->flowLayoutPanel5->TabIndex = 4;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(13, 51);
			this->comboBox2->Margin = System::Windows::Forms::Padding(13);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(346, 21);
			this->comboBox2->TabIndex = 1;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Linija::comboBox2_SelectedIndexChanged);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(13, 98);
			this->comboBox3->Margin = System::Windows::Forms::Padding(13);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(346, 21);
			this->comboBox3->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(13, 145);
			this->textBox1->Margin = System::Windows::Forms::Padding(13);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(346, 20);
			this->textBox1->TabIndex = 3;
			// 
			// flowLayoutPanel4
			// 
			this->flowLayoutPanel4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->flowLayoutPanel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->flowLayoutPanel4->Controls->Add(this->comboBox4);
			this->flowLayoutPanel4->Controls->Add(this->textBox6);
			this->flowLayoutPanel4->Location = System::Drawing::Point(749, 12);
			this->flowLayoutPanel4->Name = L"flowLayoutPanel4";
			this->flowLayoutPanel4->Size = System::Drawing::Size(394, 186);
			this->flowLayoutPanel4->TabIndex = 10;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"PB134", L"PB124", L"PB234", L"PB324", L"PB534", 
				L"PB024"});
			this->comboBox4->Location = System::Drawing::Point(13, 13);
			this->comboBox4->Margin = System::Windows::Forms::Padding(13);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(346, 21);
			this->comboBox4->TabIndex = 3;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(13, 60);
			this->textBox6->Margin = System::Windows::Forms::Padding(13);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(346, 20);
			this->textBox6->TabIndex = 1;
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->flowLayoutPanel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->flowLayoutPanel3->Controls->Add(this->label5);
			this->flowLayoutPanel3->Controls->Add(this->label6);
			this->flowLayoutPanel3->Location = System::Drawing::Point(574, 12);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Size = System::Drawing::Size(169, 186);
			this->flowLayoutPanel3->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(10, 10);
			this->label5->Margin = System::Windows::Forms::Padding(10);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(113, 25);
			this->label5->TabIndex = 1;
			this->label5->Text = L"MasinosNR";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(10, 55);
			this->label6->Margin = System::Windows::Forms::Padding(10);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(118, 25);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Komentaras";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button2->FlatAppearance->BorderSize = 3;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(591, 216);
			this->button2->Margin = System::Windows::Forms::Padding(15);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(260, 65);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Redagavimas";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Linija::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->BorderSize = 3;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(238, 216);
			this->button1->Margin = System::Windows::Forms::Padding(15);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(260, 65);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Ivesti";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Linija::button1_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button4->FlatAppearance->BorderSize = 3;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(12, 216);
			this->button4->Margin = System::Windows::Forms::Padding(15);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(210, 65);
			this->button4->TabIndex = 14;
			this->button4->Text = L"Pašalinti";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Linija::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button3->FlatAppearance->BorderSize = 3;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(883, 216);
			this->button3->Margin = System::Windows::Forms::Padding(15);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(260, 65);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Atnaujinti";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Linija::button3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(516, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(57, 82);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Linija::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(516, 112);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(57, 82);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 16;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Linija::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(516, 211);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(57, 82);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 17;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Linija::pictureBox3_Click);
			// 
			// Linija
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1184, 761);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->flowLayoutPanel4);
			this->Controls->Add(this->flowLayoutPanel3);
			this->Controls->Add(this->flowLayoutPanel2);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->dataGridView1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Linija";
			this->Text = L"Linija";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->flowLayoutPanel2->ResumeLayout(false);
			this->flowLayoutPanel2->PerformLayout();
			this->flowLayoutPanel4->ResumeLayout(false);
			this->flowLayoutPanel4->PerformLayout();
			this->flowLayoutPanel3->ResumeLayout(false);
			this->flowLayoutPanel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	
	void combo ()
	{
		String ^ tmp;
		for(int i = 0; i < glob::B.n; i++) {
			tmp = gcnew String((glob::B.FabOper[i].O_Vard +"  "+ glob::B.FabOper[i].O_Pav).c_str());
			this->comboBox2->Items->Add(tmp);
		}

		for(int i = 0; i < glob::A.n; i++)
		{
			//tmp = gcnew String(glob::A.FabDetales[i].D_ID.c_str());
			tmp = gcnew String((glob::A.FabDetales[i].D_ID+"  "+glob::A.FabDetales[i].D_Koment).c_str());
			this->comboBox3->Items->Add(tmp);
		}
	}
	void LinSar()
	{
		
		String^ spausd;

		for (int i=0; i<glob::C.n; i++)
		{
			dataGridView1->Rows->Add();
			dataGridView1->Rows[ i ]->Height = 30;
			spausd = gcnew String(glob::C.FabLin[i].L_VP.c_str());  
			dataGridView1[0, i]->Value = spausd;
			spausd = gcnew String(glob::C.FabLin[i].L_detal.c_str());  
			dataGridView1[1, i]->Value = spausd;
			spausd = gcnew String(glob::C.FabLin[i].L_detal.c_str());  
			dataGridView1[2, i]->Value = glob::C.FabLin[i].L_kiekis;
			spausd = gcnew String(glob::C.FabLin[i].L_nr.c_str());  
			dataGridView1[3, i]->Value =  spausd;
			spausd = gcnew String(glob::C.FabLin[i].L_koment.c_str()); 
			dataGridView1[4, i]->Value = spausd;
		}
	} 
	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 String ^ VP, ^ Detal, ^ Nr, ^ Koment;
			 std::string vp, detal, nr, koment;
			 int kiekis;

			 kiekis = int::Parse(textBox1->Text);
			 VP = comboBox2->Text;
			 Detal = comboBox3->Text;
			 Nr = comboBox4->Text;
			 Koment = textBox6->Text;

			 vp = glob::A.convert(VP);
			 detal = glob::A.convert(Detal);
			 nr = glob::A.convert(Nr);
			 koment = glob::A.convert(Koment);

			 glob::C.NaujasLinij(vp,detal,kiekis,nr,koment);

			textBox1->Text = "";
			textBox6->Text = "";

			dataGridView1->Rows->Clear();
			LinSar();
			glob::C.duomenufailas();
			
		 }

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 int k = 0;
			 String ^ confirmResult =  Convert::ToString(MessageBox::Show("Ar tikrai norite panaikinti pasirinkta elementa?", "Patvirtinimas",  MessageBoxButtons::YesNo, MessageBoxIcon::Question));
			 if (confirmResult == "Yes")
			 {
				 int id;
				 id = dataGridView1->CurrentRow->Index;
				 glob::eilute=id;
				 glob::C.pasalinti(glob::eilute);
				 glob::C.duomenufailas();
			 }
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 glob::C.is_failo();
			dataGridView1->Rows->Clear();
			LinSar();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			int id;
			id = dataGridView1->CurrentRow->Index;
			glob::eilute=id;
			Redag_LINE^ frm = gcnew Redag_LINE();
			frm->ShowDialog();
		 }
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
			 int k = 0;
			 String ^ confirmResult =  Convert::ToString(MessageBox::Show("Ar tikrai norite panaikinti visus elementus?", "Patvirtinimas",  MessageBoxButtons::YesNo, MessageBoxIcon::Question));
			 if (confirmResult == "Yes")
			 {
				 glob::C.naikinti(0);
				 glob::C.duomenufailas();
			 }
		 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^ confirmResult =  Convert::ToString(MessageBox::Show("Pazpaudzius Yes bus sukurata ataskaita, ja galite rasti savo darbalaukyje", "Patvirtinimas",  MessageBoxButtons::YesNo, MessageBoxIcon::Question));
			 if (confirmResult == "Yes")
			 {
			 	String^ currentDesktop = System::Environment::GetEnvironmentVariable("USERPROFILE") + "\\Desktop";
				std::string dekstop = glob::C.convert(currentDesktop);
				glob::C.ataskaita(dekstop);
			 }
		 }
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 String ^ confirmResult =  Convert::ToString(MessageBox::Show("Ar tikrai jusu pasirinkta gamybos uzduotis buvo atlikta?", "Patvirtinimas",  MessageBoxButtons::YesNo, MessageBoxIcon::Question));
			 if (confirmResult == "Yes")
			 {
				int id;
				id = dataGridView1->CurrentRow->Index;
				glob::eilute=id;
				std::string  test_detal = glob::C.FabLin[glob::eilute].L_detal,
					test_kodas;
				int test_kiek = glob::C.FabLin[glob::eilute].L_kiekis;
			
				std::ofstream fr("temp.dat");
				fr << test_detal<< '\n';
				fr.close();
				std::ifstream fd("temp.dat");
				fd >> test_kodas;
				for (int i = 0; i < glob::A.n; i++)
				{
					if(glob::A.FabDetales[i].D_ID==test_kodas)
					{
						glob::A.FabDetales[i].D_Kiekis+=test_kiek;
						glob::A.FabDetales[i].D_Pagam-=test_kiek;
						if(glob::A.FabDetales[i].D_Pagam < 0 ) glob::A.FabDetales[i].D_Pagam =0;
						glob::A.duomenufailas();
					}
				}
			}
		 }

};


}
