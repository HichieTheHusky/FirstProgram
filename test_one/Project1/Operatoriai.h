#pragma once
#include <string>
#include "Class_OP.h"
#include "Glob.h"
#include "Redag_OP.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Operatoriai
	/// </summary>
	public ref class Operatoriai : public System::Windows::Forms::Form
	{
	
	private: System::Windows::Forms::DataGridView^  dataGridView1;






	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel4;



	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel3;
	private: System::Windows::Forms::Label^  label5;


	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;

	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Vardas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Pavardė;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  GimimoMetai;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  IsidarbinimoMetai;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	
	
	public:
		Operatoriai(void)
		{
			InitializeComponent();
			operatoriai();
			OpSar();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Operatoriai()
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
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Vardas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Pavardė = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->GimimoMetai = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->IsidarbinimoMetai = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->flowLayoutPanel4 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->flowLayoutPanel4->SuspendLayout();
			this->flowLayoutPanel3->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlLight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {this->ID, this->Vardas, 
				this->Pavardė, this->GimimoMetai, this->IsidarbinimoMetai});
			this->dataGridView1->Location = System::Drawing::Point(12, 299);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1160, 450);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Operatoriai::dataGridView1_CellContentClick);
			// 
			// ID
			// 
			this->ID->FillWeight = 280;
			this->ID->HeaderText = L"ID";
			this->ID->Name = L"ID";
			this->ID->Width = 280;
			// 
			// Vardas
			// 
			this->Vardas->FillWeight = 220;
			this->Vardas->HeaderText = L"Vardas";
			this->Vardas->Name = L"Vardas";
			this->Vardas->Width = 220;
			// 
			// Pavardė
			// 
			this->Pavardė->FillWeight = 220;
			this->Pavardė->HeaderText = L"Pavardė";
			this->Pavardė->Name = L"Pavardė";
			this->Pavardė->Width = 220;
			// 
			// GimimoMetai
			// 
			this->GimimoMetai->FillWeight = 197;
			this->GimimoMetai->HeaderText = L"GimimoMetai";
			this->GimimoMetai->Name = L"GimimoMetai";
			this->GimimoMetai->Width = 197;
			// 
			// IsidarbinimoMetai
			// 
			this->IsidarbinimoMetai->FillWeight = 200;
			this->IsidarbinimoMetai->HeaderText = L"IsidarbinimoMetai";
			this->IsidarbinimoMetai->Name = L"IsidarbinimoMetai";
			this->IsidarbinimoMetai->Width = 200;
			// 
			// flowLayoutPanel4
			// 
			this->flowLayoutPanel4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->flowLayoutPanel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->flowLayoutPanel4->Controls->Add(this->dateTimePicker1);
			this->flowLayoutPanel4->Controls->Add(this->dateTimePicker2);
			this->flowLayoutPanel4->Location = System::Drawing::Point(749, 12);
			this->flowLayoutPanel4->Name = L"flowLayoutPanel4";
			this->flowLayoutPanel4->Size = System::Drawing::Size(394, 186);
			this->flowLayoutPanel4->TabIndex = 12;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(13, 18);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(13, 18, 13, 20);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 0;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(13, 71);
			this->dateTimePicker2->Margin = System::Windows::Forms::Padding(13);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker2->TabIndex = 1;
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->flowLayoutPanel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->flowLayoutPanel3->Controls->Add(this->label4);
			this->flowLayoutPanel3->Controls->Add(this->label5);
			this->flowLayoutPanel3->Location = System::Drawing::Point(574, 12);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Size = System::Drawing::Size(169, 186);
			this->flowLayoutPanel3->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(10, 10);
			this->label4->Margin = System::Windows::Forms::Padding(10);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(130, 25);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Gimimo metai";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(10, 55);
			this->label5->Margin = System::Windows::Forms::Padding(10);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(121, 50);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Isidarbinimo metai";
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->flowLayoutPanel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->flowLayoutPanel2->Controls->Add(this->textBox1);
			this->flowLayoutPanel2->Controls->Add(this->textBox2);
			this->flowLayoutPanel2->Controls->Add(this->textBox3);
			this->flowLayoutPanel2->Location = System::Drawing::Point(130, 12);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(382, 186);
			this->flowLayoutPanel2->TabIndex = 10;
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
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->flowLayoutPanel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->flowLayoutPanel1->Controls->Add(this->label1);
			this->flowLayoutPanel1->Controls->Add(this->label2);
			this->flowLayoutPanel1->Controls->Add(this->label3);
			this->flowLayoutPanel1->Location = System::Drawing::Point(12, 12);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(112, 186);
			this->flowLayoutPanel1->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(10, 10);
			this->label1->Margin = System::Windows::Forms::Padding(10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(10, 55);
			this->label2->Margin = System::Windows::Forms::Padding(10);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Vardas";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(10, 100);
			this->label3->Margin = System::Windows::Forms::Padding(10);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Pavardė";
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
			this->button2->TabIndex = 14;
			this->button2->Text = L"Redagavimas";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Operatoriai::button2_Click);
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
			this->button1->TabIndex = 13;
			this->button1->Text = L"Ivesti";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Operatoriai::button1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button3->FlatAppearance->BorderSize = 3;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(864, 216);
			this->button3->Margin = System::Windows::Forms::Padding(15);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(260, 65);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Atnaujinti";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Operatoriai::button3_Click);
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
			this->button4->TabIndex = 16;
			this->button4->Text = L"Pašalinti";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Operatoriai::button4_Click);
			// 
			// Operatoriai
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1184, 761);
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
			this->Name = L"Operatoriai";
			this->Text = L"Operatoriai";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->flowLayoutPanel4->ResumeLayout(false);
			this->flowLayoutPanel3->ResumeLayout(false);
			this->flowLayoutPanel3->PerformLayout();
			this->flowLayoutPanel2->ResumeLayout(false);
			this->flowLayoutPanel2->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		void OpSar()
	{
		String^ spausd;

		for (int i=0; i<glob::B.n; i++)
		{
			dataGridView1->Rows->Add();
			dataGridView1->Rows[ i ]->Height = 30;
			spausd = gcnew String(glob::B.FabOper[i].O_ID.c_str());  
			dataGridView1[0, i]->Value = spausd;
			spausd = gcnew String(glob::B.FabOper[i].O_Vard.c_str());  
			dataGridView1[1, i]->Value = spausd;
			spausd = gcnew String(glob::B.FabOper[i].O_Pav.c_str());  
			dataGridView1[2, i]->Value = spausd;
			spausd = gcnew String(glob::B.FabOper[i].O_Data1.c_str());  
			dataGridView1[3, i]->Value = spausd;
			spausd = gcnew String(glob::B.FabOper[i].O_Data2.c_str());  
			dataGridView1[4, i]->Value = spausd;
		}         
	}


	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 String ^ ID, ^ Vard, ^ Pav, ^ Data1, ^ Data2;
			 std::string id, vard, pav, data1, data2;

			 ID = textBox1->Text;
			 Vard = textBox2->Text;
			 Pav = textBox3->Text;
			 Data1 = dateTimePicker1->Text;
			 Data2 = dateTimePicker2->Text;

			id = glob::A.convert(ID);
			vard = glob::A.convert(Vard);
			pav = glob::A.convert(Pav);
			data1 = glob::A.convert(Data1);
			data2 = glob::A.convert(Data2);
			
			glob::B.NaujasOper(id,vard,pav,data1,data2);

			textBox1->Text = "";
			textBox2->Text = "";
			textBox3->Text = "";

			dataGridView1->Rows->Clear();
			OpSar();
			glob::B.duomenufailas();
			 }

private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 			 int k = 0;
			 String ^ confirmResult =  Convert::ToString(MessageBox::Show("Ar tikrai norite panaikinti pasirinkta elementa?", "Patvirtinimas",  MessageBoxButtons::YesNo, MessageBoxIcon::Question));
			 if (confirmResult == "Yes")
			 {
				 int id;
				 id = dataGridView1->CurrentRow->Index;
				 glob::eilute=id;
				 glob::B.pasalinti(glob::eilute);
				 glob::B.duomenufailas();
		 }
		}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			glob::B.is_failo();
			dataGridView1->Rows->Clear();
			OpSar();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			int id;
			id = dataGridView1->CurrentRow->Index;
			glob::eilute=id;
			Redag_OP^ frm = gcnew Redag_OP();
			frm->ShowDialog();
		 }
};
}
