#pragma once

namespace studentRegistration {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for stdReg
	/// </summary>
	public ref class stdReg : public System::Windows::Forms::Form
	{
	public:
		stdReg(void)
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
		~stdReg()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label9;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(243, 117);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(252, 20);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(106, 119);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 18);
			this->label1->TabIndex = 1;
			this->label1->Text = L"First Name last name";
			this->label1->Click += gcnew System::EventHandler(this, &stdReg::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(161, 161);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Student ID";
			this->label2->Click += gcnew System::EventHandler(this, &stdReg::label2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(243, 159);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(252, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(149, 200);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 18);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Date of birth";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(243, 198);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(252, 20);
			this->dateTimePicker1->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(146, 238);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 18);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Father name";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(243, 236);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(252, 20);
			this->textBox3->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(114, 280);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(123, 18);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Birth certificate ID";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(243, 278);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(252, 20);
			this->textBox4->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(143, 322);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(94, 18);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Place of birth";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(243, 323);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(252, 20);
			this->textBox5->TabIndex = 11;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(128, 361);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(109, 18);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Date of register";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(243, 359);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(252, 20);
			this->dateTimePicker2->TabIndex = 13;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(191, 405);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(46, 18);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Major";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(243, 402);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(252, 21);
			this->comboBox1->TabIndex = 15;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button1->Location = System::Drawing::Point(204, 451);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(206, 30);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Register";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(200, 56);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(210, 24);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Information of student";
			// 
			// stdReg
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(602, 535);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"stdReg";
			this->Text = L"Student registration";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
