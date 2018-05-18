#pragma once
#include <string>
#include "Class_part.h"
#include "Glob.h"
#include "Redag_Detale.h"


namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	namespace
	{
		//Detales A;
	};

	/// <summary>
	/// Summary for Detales
	/// </summary>
	public ref class Detales : public System::Windows::Forms::Form
	{

	private: System::Windows::Forms::DataGridView^  dataGridView1;







	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Kodas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Kiekis;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Ilgis;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Plotis;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Aukstis;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Pagaminti;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Apibūdinimas;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::ComboBox^  comboBox1;

	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::TextBox^  textBox8;


	private: System::Windows::Forms::TextBox^  textBox4;


	public:
		Detales(void)
		{
			InitializeComponent();
			detales();
			DetalSar();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Detales()
		{
			if (components)
			{
				delete components;
			}
		}






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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Kodas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Kiekis = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Ilgis = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Plotis = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Aukstis = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Pagaminti = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Apibūdinimas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel4 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->flowLayoutPanel1->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			this->flowLayoutPanel3->SuspendLayout();
			this->flowLayoutPanel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlLight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {this->Kodas, 
				this->Kiekis, this->Ilgis, this->Plotis, this->Aukstis, this->Pagaminti, this->Apibūdinimas});
			this->dataGridView1->Location = System::Drawing::Point(12, 299);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1160, 411);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Detales::dataGridView1_CellContentClick);
			// 
			// Kodas
			// 
			this->Kodas->FillWeight = 225;
			this->Kodas->HeaderText = L"Kodas";
			this->Kodas->Name = L"Kodas";
			this->Kodas->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Kodas->Width = 225;
			// 
			// Kiekis
			// 
			this->Kiekis->FillWeight = 80;
			this->Kiekis->HeaderText = L"Kiekis";
			this->Kiekis->Name = L"Kiekis";
			this->Kiekis->Width = 80;
			// 
			// Ilgis
			// 
			this->Ilgis->FillWeight = 120;
			this->Ilgis->HeaderText = L"Ilgis";
			this->Ilgis->Name = L"Ilgis";
			this->Ilgis->Width = 120;
			// 
			// Plotis
			// 
			this->Plotis->FillWeight = 120;
			this->Plotis->HeaderText = L"Plotis";
			this->Plotis->Name = L"Plotis";
			this->Plotis->Width = 120;
			// 
			// Aukstis
			// 
			this->Aukstis->FillWeight = 120;
			this->Aukstis->HeaderText = L"Aukstis";
			this->Aukstis->Name = L"Aukstis";
			this->Aukstis->Width = 120;
			// 
			// Pagaminti
			// 
			this->Pagaminti->FillWeight = 80;
			this->Pagaminti->HeaderText = L"Pagaminti";
			this->Pagaminti->Name = L"Pagaminti";
			this->Pagaminti->Width = 80;
			// 
			// Apibūdinimas
			// 
			this->Apibūdinimas->FillWeight = 372;
			this->Apibūdinimas->HeaderText = L"Apibūdinimas";
			this->Apibūdinimas->Name = L"Apibūdinimas";
			this->Apibūdinimas->Width = 372;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(10, 10);
			this->label1->Margin = System::Windows::Forms::Padding(10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Kodas";
			this->label1->Click += gcnew System::EventHandler(this, &Detales::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(10, 55);
			this->label2->Margin = System::Windows::Forms::Padding(10);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Kiekis";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(10, 100);
			this->label3->Margin = System::Windows::Forms::Padding(10);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Ilgis";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(10, 145);
			this->label4->Margin = System::Windows::Forms::Padding(10);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 25);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Plotis";
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
			this->flowLayoutPanel1->Size = System::Drawing::Size(100, 186);
			this->flowLayoutPanel1->TabIndex = 5;
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->flowLayoutPanel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->flowLayoutPanel2->Controls->Add(this->textBox1);
			this->flowLayoutPanel2->Controls->Add(this->textBox2);
			this->flowLayoutPanel2->Controls->Add(this->textBox3);
			this->flowLayoutPanel2->Controls->Add(this->textBox4);
			this->flowLayoutPanel2->Location = System::Drawing::Point(118, 12);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(394, 186);
			this->flowLayoutPanel2->TabIndex = 6;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(13, 13);
			this->textBox1->Margin = System::Windows::Forms::Padding(13);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(346, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(13, 59);
			this->textBox2->Margin = System::Windows::Forms::Padding(13);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(346, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(13, 105);
			this->textBox3->Margin = System::Windows::Forms::Padding(13);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(346, 20);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(13, 151);
			this->textBox4->Margin = System::Windows::Forms::Padding(13);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(346, 20);
			this->textBox4->TabIndex = 3;
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->flowLayoutPanel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->flowLayoutPanel3->Controls->Add(this->label5);
			this->flowLayoutPanel3->Controls->Add(this->label6);
			this->flowLayoutPanel3->Controls->Add(this->label7);
			this->flowLayoutPanel3->Location = System::Drawing::Point(574, 12);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Size = System::Drawing::Size(169, 186);
			this->flowLayoutPanel3->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(10, 10);
			this->label5->Margin = System::Windows::Forms::Padding(10);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 25);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Aukstis";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(10, 55);
			this->label6->Margin = System::Windows::Forms::Padding(10);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(98, 25);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Pagaminti";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(10, 100);
			this->label7->Margin = System::Windows::Forms::Padding(10);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(130, 25);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Apibūdinimas";
			// 
			// flowLayoutPanel4
			// 
			this->flowLayoutPanel4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->flowLayoutPanel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->flowLayoutPanel4->Controls->Add(this->textBox5);
			this->flowLayoutPanel4->Controls->Add(this->textBox6);
			this->flowLayoutPanel4->Controls->Add(this->textBox7);
			this->flowLayoutPanel4->Location = System::Drawing::Point(749, 12);
			this->flowLayoutPanel4->Name = L"flowLayoutPanel4";
			this->flowLayoutPanel4->Size = System::Drawing::Size(394, 186);
			this->flowLayoutPanel4->TabIndex = 8;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(13, 13);
			this->textBox5->Margin = System::Windows::Forms::Padding(13);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(346, 20);
			this->textBox5->TabIndex = 0;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Detales::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(13, 59);
			this->textBox6->Margin = System::Windows::Forms::Padding(13);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(346, 20);
			this->textBox6->TabIndex = 1;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(13, 105);
			this->textBox7->Margin = System::Windows::Forms::Padding(13);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(346, 20);
			this->textBox7->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->BorderSize = 3;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(252, 216);
			this->button1->Margin = System::Windows::Forms::Padding(15);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(260, 65);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Ivesti";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Detales::button1_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button2->FlatAppearance->BorderSize = 3;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(574, 216);
			this->button2->Margin = System::Windows::Forms::Padding(15);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(260, 65);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Redagavimas";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Detales::button2_Click);
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
			this->button3->TabIndex = 11;
			this->button3->Text = L"Atnaujinti";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Detales::button3_Click);
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
			this->button4->TabIndex = 12;
			this->button4->Text = L"Pašalinti";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Detales::button4_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"Kodas", L"Ilgis", L"Plotis", L"Aukstis", L"Pagaminti", 
				L"Kiekis"});
			this->comboBox1->Location = System::Drawing::Point(29, 716);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(319, 21);
			this->comboBox1->TabIndex = 13;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button6->FlatAppearance->BorderSize = 3;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(638, 716);
			this->button6->Margin = System::Windows::Forms::Padding(15);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(166, 36);
			this->button6->TabIndex = 16;
			this->button6->Text = L"Ieškoti";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Detales::button6_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(364, 716);
			this->textBox8->Margin = System::Windows::Forms::Padding(13);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(246, 20);
			this->textBox8->TabIndex = 17;
			// 
			// Detales
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1184, 761);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->comboBox1);
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
			this->Name = L"Detales";
			this->Text = L"Detalės";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->flowLayoutPanel2->ResumeLayout(false);
			this->flowLayoutPanel2->PerformLayout();
			this->flowLayoutPanel3->ResumeLayout(false);
			this->flowLayoutPanel3->PerformLayout();
			this->flowLayoutPanel4->ResumeLayout(false);
			this->flowLayoutPanel4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

void DetalSar()
	{
		String^ spausd;

		for (int i=0; i<glob::A.n; i++)
		{
			dataGridView1->Rows->Add();
			dataGridView1->Rows[ i ]->Height = 30;
			spausd = gcnew String(glob::A.FabDetales[i].D_ID.c_str());  
			dataGridView1[0, i]->Value = spausd;
			dataGridView1[1, i]->Value = glob::A.FabDetales[i].D_Kiekis;
			dataGridView1[2, i]->Value = glob::A.FabDetales[i].D_Ilgis;
			dataGridView1[3, i]->Value = glob::A.FabDetales[i].D_Plotis;
			dataGridView1[4, i]->Value = glob::A.FabDetales[i].D_Aukstis;
			dataGridView1[5, i]->Value = glob::A.FabDetales[i].D_Pagam;
			spausd = gcnew String(glob::A.FabDetales[i].D_Koment.c_str());  
			dataGridView1[6, i]->Value = spausd;
                          
		}         
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {

			 String ^ ID, ^ Koment;
			 std::string id, koment;
			 int kiekis, ilgis, plotis, aukstis, pagam;

			 ID = textBox1->Text;
			 kiekis = int::Parse(textBox2->Text);
			 ilgis = int::Parse(textBox3->Text);
			 plotis = int::Parse(textBox4->Text);
			 aukstis = int::Parse(textBox5->Text);
			 pagam = int::Parse(textBox6->Text);
			 Koment = textBox7->Text;

			id = glob::A.convert(ID);
			koment = glob::A.convert(Koment);
			glob::A.NaujaDetal(id,koment,kiekis,ilgis,plotis,aukstis,pagam);
			textBox1->Text = "";
			textBox2->Text = "";
			textBox3->Text = "";
			textBox4->Text = "";
			textBox5->Text = "";
			textBox6->Text = "";
			textBox7->Text = ""; 

			dataGridView1->Rows->Clear();
			DetalSar();
			glob::A.duomenufailas();
		 }
private: System::Void išeitiToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			glob::A.is_failo();
			dataGridView1->Rows->Clear();
			DetalSar();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			int id;
			id = dataGridView1->CurrentRow->Index;
			glob::eilute=id;
			Redag_Detale^ frm = gcnew Redag_Detale();
			frm->ShowDialog();
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 		
		 {
			 int k = 0;
			 String ^ confirmResult =  Convert::ToString(MessageBox::Show("Ar tikrai norite panaikinti pasirinkta elementa?", "Patvirtinimas",  MessageBoxButtons::YesNo, MessageBoxIcon::Question));
			 if (confirmResult == "Yes")
			 {
				 int id;
				 id = dataGridView1->CurrentRow->Index;
				 glob::eilute=id;
				 glob::A.pasalinti(glob::eilute);
				 glob::A.duomenufailas();
			 }
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {

		int k = 0,
			temp_s;
		String ^ temp;
		std::string text;
		dataGridView1->Rows->Clear();

		if (comboBox1->Text == "Kodas")
			 {
				 temp = textBox8->Text;
				 text = glob::A.convert(temp);
						
				 for (int i = 0; i < glob::A.n; i++)
					 if (glob::A.FabDetales[i].D_ID == text)
						 pildyt(i,k);
			 }
		if (comboBox1->Text == "Ilgis")
			 {
				 temp_s = int::Parse(textBox8->Text);
						
				 for (int i = 0; i < glob::A.n; i++)
					 if (glob::A.FabDetales[i].D_Ilgis == temp_s)
						 pildyt(i, k);
			 }
		if (comboBox1->Text == "Plotis")
			 {
				 temp_s = int::Parse(textBox8->Text);

				 for (int i = 0; i < glob::A.n; i++)
					 if (glob::A.FabDetales[i].D_Plotis == temp_s)
						 pildyt(i, k);
			 }
		if (comboBox1->Text == "Aukstis")
			 {
				 temp_s = int::Parse(textBox8->Text);
						
				 for (int i = 0; i < glob::A.n; i++)
					 if (glob::A.FabDetales[i].D_Aukstis == temp_s)
						 pildyt(i, k);
			 }
		if (comboBox1->Text == "Pagaminti")
			 {
				 temp_s = int::Parse(textBox8->Text);
						
				 for (int i = 0; i < glob::A.n; i++)
					 if (glob::A.FabDetales[i].D_Pagam == temp_s)
						 pildyt(i, k);
			 }
		if (comboBox1->Text == "Kiekis")
			 {
				 temp_s = int::Parse(textBox8->Text);
						
				 for (int i = 0; i < glob::A.n; i++)
					 if (glob::A.FabDetales[i].D_Kiekis == temp_s)
						 pildyt(i, k);
			 }
		 }
		
		 void pildyt(int i, int & k)
		{
			String^ spausd;

			dataGridView1->Rows->Add();
			dataGridView1->Rows[ k ]->Height = 30;
			spausd = gcnew String(glob::A.FabDetales[i].D_ID.c_str());  
			dataGridView1[0, k]->Value = spausd;
			dataGridView1[1, k]->Value = glob::A.FabDetales[i].D_Kiekis;
			dataGridView1[2, k]->Value = glob::A.FabDetales[i].D_Ilgis;
			dataGridView1[3, k]->Value = glob::A.FabDetales[i].D_Plotis;
			dataGridView1[4, k]->Value = glob::A.FabDetales[i].D_Aukstis;
			dataGridView1[5, k]->Value = glob::A.FabDetales[i].D_Pagam;
			spausd = gcnew String(glob::A.FabDetales[i].D_Koment.c_str());  
			dataGridView1[6, k]->Value = spausd;
			k++;
		}

};
}
