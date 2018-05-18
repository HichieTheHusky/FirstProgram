#pragma once

#include "Class_part.h"
#include "Glob.h"


namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Redag_Detale
	/// </summary>
	public ref class Redag_Detale : public System::Windows::Forms::Form
	{
	public:
		Redag_Detale(void)
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
		~Redag_Detale()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox5;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel3;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel4;
	private: System::Windows::Forms::Button^  button1;

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
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel4 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel2->SuspendLayout();
			this->flowLayoutPanel3->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->flowLayoutPanel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(13, 13);
			this->textBox5->Margin = System::Windows::Forms::Padding(13);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(346, 20);
			this->textBox5->TabIndex = 0;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(13, 105);
			this->textBox7->Margin = System::Windows::Forms::Padding(13);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(346, 20);
			this->textBox7->TabIndex = 2;
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
			this->label7->Text = L"Apibûdinimas";
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
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Redag_Detale::textBox2_TextChanged);
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
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(13, 59);
			this->textBox6->Margin = System::Windows::Forms::Padding(13);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(346, 20);
			this->textBox6->TabIndex = 1;
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
			this->flowLayoutPanel3->TabIndex = 11;
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
			this->flowLayoutPanel1->TabIndex = 9;
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
			this->flowLayoutPanel4->TabIndex = 12;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->BorderSize = 3;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(413, 213);
			this->button1->Margin = System::Windows::Forms::Padding(15);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(260, 65);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Ivesti";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Redag_Detale::button1_Click);
			// 
			// Redag_Detale
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1184, 291);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->flowLayoutPanel2);
			this->Controls->Add(this->flowLayoutPanel3);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->flowLayoutPanel4);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"Redag_Detale";
			this->Text = L"Redag_Detale";
			this->Load += gcnew System::EventHandler(this, &Redag_Detale::Redag_Detale_Load);
			this->flowLayoutPanel2->ResumeLayout(false);
			this->flowLayoutPanel2->PerformLayout();
			this->flowLayoutPanel3->ResumeLayout(false);
			this->flowLayoutPanel3->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->flowLayoutPanel4->ResumeLayout(false);
			this->flowLayoutPanel4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		private: System::Void Redag_Detale_Load(System::Object^  sender, System::EventArgs^  e) {
              String ^ temp;
			 temp = gcnew String(glob::A.FabDetales[glob::eilute].D_ID.c_str());
			 textBox1->Text = temp;
			 textBox2->Text = glob::A.FabDetales[glob::eilute].D_Kiekis.ToString();
			 textBox3->Text = glob::A.FabDetales[glob::eilute].D_Ilgis.ToString();
			 textBox4->Text = glob::A.FabDetales[glob::eilute].D_Plotis.ToString();
			 textBox5->Text = glob::A.FabDetales[glob::eilute].D_Aukstis.ToString();
			 textBox6->Text = glob::A.FabDetales[glob::eilute].D_Pagam.ToString();
			 temp = gcnew String(glob::A.FabDetales[glob::eilute].D_Koment.c_str());
			 textBox7->Text = temp;
			 }







	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 
				String ^ ID, ^ Koment;
			 	
			
				 ID = textBox1->Text;
				 Koment = textBox7->Text;

				 glob::A.FabDetales[glob::eilute].D_ID =glob::A.convert(ID);
				 glob::A.FabDetales[glob::eilute].D_Kiekis = int::Parse(textBox2->Text);
				 glob::A.FabDetales[glob::eilute].D_Ilgis = int::Parse(textBox3->Text);
				 glob::A.FabDetales[glob::eilute].D_Plotis = int::Parse(textBox4->Text);
				 glob::A.FabDetales[glob::eilute].D_Aukstis = int::Parse(textBox5->Text);
				 glob::A.FabDetales[glob::eilute].D_Pagam = int::Parse(textBox6->Text);
				 glob::A.FabDetales[glob::eilute].D_Koment = glob::A.convert(Koment);

				 glob::A.duomenufailas();

				 textBox1->Text = "";
				 textBox2->Text = "";
				 textBox3->Text = "";
				 textBox4->Text = "";
				 textBox5->Text = "";
				 textBox6->Text = "";
				 textBox7->Text = "";


				 this->Close();

			 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
