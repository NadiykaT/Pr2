#pragma once
#include <cmath>
namespace Pr2 {

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
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label4;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Cambria", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->panel1->Location = System::Drawing::Point(38, 101);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(314, 55);
			this->panel1->TabIndex = 0;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(236, 15);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(45, 27);
			this->textBox3->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(138, 15);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(48, 27);
			this->textBox2->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(41, 15);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(49, 27);
			this->textBox1->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(209, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(27, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"c=";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(110, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"b=";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(28, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"a=";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Cambria", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(72, 292);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 35);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Обчислити";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button2->Font = (gcnew System::Drawing::Font(L"Cambria", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(192, 292);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 35);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Очистити";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(72, 178);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(247, 96);
			this->richTextBox1->TabIndex = 3;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Відрізок m", L"Відрізок b", L"Відрізок h" });
			this->comboBox1->Location = System::Drawing::Point(107, 51);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(182, 25);
			this->comboBox1->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Cambria", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(148, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(108, 21);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Завдання 4";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(384, 358);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"Практична робота 2";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		float a, b, c, p, d;
		int n = comboBox1->SelectedIndex;
		switch (n)
		{
		case 0:
			a = System::Convert::ToDouble(textBox1->Text);
			b = System::Convert::ToDouble(textBox2->Text);
			c = System::Convert::ToDouble(textBox3->Text);
			d = (sqrt(2 * (pow(b, 2) + pow(c, 2) - pow(a, 2)))) / 2;
			break;
		case 1:
			a = System::Convert::ToDouble(textBox1->Text);
			b = System::Convert::ToDouble(textBox2->Text);
			c = System::Convert::ToDouble(textBox3->Text);
			d = (sqrt(b * c * (pow(b + c, 2)) - pow(a, 2))) / (b + c);
			break;
		case 2:
			a = System::Convert::ToDouble(textBox1->Text);
			b = System::Convert::ToDouble(textBox2->Text);
			c = System::Convert::ToDouble(textBox3->Text);
			p = (a + b + c) / 2;
			d = (2 * sqrt(p * (p - a) * (p - b) * (p - c))) / c;
			break;
		};
		richTextBox1->AppendText(comboBox1->Text + " d= " + Convert::ToString(d) + "\r\n");
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		int n = comboBox1->SelectedIndex;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Clear();
		textBox2->Clear();
		textBox3->Clear();
		richTextBox1->Clear();
	}
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};

}