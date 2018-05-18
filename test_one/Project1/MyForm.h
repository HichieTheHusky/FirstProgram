#pragma once
#include "Detales.h"
#include "Operatoriai.h"
#include "Linija.h"
#include "Class_part.h"

	namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  pagalbaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  dUKToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  uždarytiToolStripMenuItem;
	private: System::Windows::Forms::TextBox^  textBox1;









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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->pagalbaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dUKToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uždarytiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->flowLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->BorderSize = 3;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(15, 15);
			this->button1->Margin = System::Windows::Forms::Padding(15);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(242, 79);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Detalės";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button2->FlatAppearance->BorderSize = 3;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(15, 124);
			this->button2->Margin = System::Windows::Forms::Padding(15);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(242, 79);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Operatoriai";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button3->FlatAppearance->BorderSize = 3;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(15, 233);
			this->button3->Margin = System::Windows::Forms::Padding(15);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(242, 79);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Linija";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->flowLayoutPanel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->flowLayoutPanel1->Controls->Add(this->button1);
			this->flowLayoutPanel1->Controls->Add(this->button2);
			this->flowLayoutPanel1->Controls->Add(this->button3);
			this->flowLayoutPanel1->Location = System::Drawing::Point(19, 38);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(279, 360);
			this->flowLayoutPanel1->TabIndex = 3;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(304, 38);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(904, 360);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->pagalbaToolStripMenuItem, 
				this->dUKToolStripMenuItem, this->uždarytiToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1220, 24);
			this->menuStrip1->TabIndex = 7;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// pagalbaToolStripMenuItem
			// 
			this->pagalbaToolStripMenuItem->Name = L"pagalbaToolStripMenuItem";
			this->pagalbaToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->pagalbaToolStripMenuItem->Text = L"Pagalba";
			this->pagalbaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::pagalbaToolStripMenuItem_Click);
			// 
			// dUKToolStripMenuItem
			// 
			this->dUKToolStripMenuItem->Name = L"dUKToolStripMenuItem";
			this->dUKToolStripMenuItem->Size = System::Drawing::Size(40, 20);
			this->dUKToolStripMenuItem->Text = L"Info";
			this->dUKToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::dUKToolStripMenuItem_Click);
			// 
			// uždarytiToolStripMenuItem
			// 
			this->uždarytiToolStripMenuItem->Name = L"uždarytiToolStripMenuItem";
			this->uždarytiToolStripMenuItem->Size = System::Drawing::Size(62, 20);
			this->uždarytiToolStripMenuItem->Text = L"Uždaryti";
			this->uždarytiToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::uždarytiToolStripMenuItem_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(895, 421);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(313, 20);
			this->textBox1->TabIndex = 9;
			this->textBox1->Text = L"Programa sukurė: P-6/2V grupės mokinys Lukas Zumaras\r\n";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->CausesValidation = false;
			this->ClientSize = System::Drawing::Size(1220, 445);
			this->ControlBox = false;
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(1236, 484);
			this->MinimumSize = System::Drawing::Size(1236, 484);
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"SimpleManufacturingManager";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->flowLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void toolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Detales^ input = gcnew Detales();
			 input->ShowDialog();
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Operatoriai^ input = gcnew Operatoriai();
			 input->ShowDialog();
			 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 Linija^ input = gcnew Linija();
			 input->ShowDialog();
		 }
private: System::Void uždarytiToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^ confirmResult =  Convert::ToString(MessageBox::Show("Ar tikrai norite išeiti ?", "Išėjimas",  MessageBoxButtons::YesNo, MessageBoxIcon::Question));
			 if (confirmResult == "Yes")
			 {
				Application::Exit();
			 }
			 
		 }
private: System::Void dUKToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			  MessageBox::Show("Darbas atliktas:\n P-6/2V grupes mokinio Luko Zumaro\n\nKaunas, 2017","Info", MessageBoxButtons::OK);
		 }
private: System::Void pagalbaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("SimpleManufacturingManager yra paprasta programa, kuri leidzia vartotujui reguliuoti produkcija\n\nDetales:\nLeis jums irasyti gaminamas detales i sarasa, bei ju kieki sandeli\n\nOperatoriai:\nLeis jums irasyti darbuotojus, bei ju atlikta darba\n\nLinija:\nLeis jums pasirinkti kokia detale kuris darbuotas turi padaryti, bei kitus nurodymus",
				 "Pagalba",
				 MessageBoxButtons::OK);
		 }
};
}
