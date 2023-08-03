#pragma once

#include "stdReg.h"

namespace studentRegistration {

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ std_reg;
	private: System::Windows::Forms::Button^ mjr_reg;
	private: System::Windows::Forms::Button^ button1;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->std_reg = (gcnew System::Windows::Forms::Button());
			this->mjr_reg = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(91, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(490, 57);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Student Registration System";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// std_reg
			// 
			this->std_reg->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->std_reg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->std_reg->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->std_reg->Location = System::Drawing::Point(201, 207);
			this->std_reg->Name = L"std_reg";
			this->std_reg->Size = System::Drawing::Size(250, 50);
			this->std_reg->TabIndex = 1;
			this->std_reg->Text = L"Register a new student";
			this->std_reg->UseVisualStyleBackColor = false;
			this->std_reg->Click += gcnew System::EventHandler(this, &MyForm::std_reg_Click);
			// 
			// mjr_reg
			// 
			this->mjr_reg->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->mjr_reg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mjr_reg->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->mjr_reg->Location = System::Drawing::Point(201, 277);
			this->mjr_reg->Name = L"mjr_reg";
			this->mjr_reg->Size = System::Drawing::Size(250, 50);
			this->mjr_reg->TabIndex = 2;
			this->mjr_reg->Text = L"Register a new major";
			this->mjr_reg->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(201, 347);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(250, 50);
			this->button1->TabIndex = 3;
			this->button1->Text = L"List of students";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(664, 534);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->mjr_reg);
			this->Controls->Add(this->std_reg);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Student Registration";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void std_reg_Click(System::Object^ sender, System::EventArgs^ e) {

		    this->Hide();
			stdReg^ form2 = gcnew stdReg();
			form2->ShowDialog();

		}
    };
}
