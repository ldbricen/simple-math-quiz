#pragma once

namespace test2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for config
	/// </summary>
	public ref class config : public System::Windows::Forms::Form
	{
	public:
		config(Int32^  max_add, Int32^  max_mult)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			maximum_add = max_add;
			maximum_multiply = max_mult;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~config()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  add_max;
	private: System::Windows::Forms::Label^  mult_max;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button1;
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
			this->add_max = (gcnew System::Windows::Forms::Label());
			this->mult_max = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// add_max
			// 
			this->add_max->AutoSize = true;
			this->add_max->Location = System::Drawing::Point(33, 25);
			this->add_max->Name = L"add_max";
			this->add_max->Size = System::Drawing::Size(92, 13);
			this->add_max->TabIndex = 0;
			this->add_max->Text = L"Addition Maximum";
			this->add_max->Click += gcnew System::EventHandler(this, &config::label1_Click);
			// 
			// mult_max
			// 
			this->mult_max->AutoSize = true;
			this->mult_max->Location = System::Drawing::Point(33, 55);
			this->mult_max->Name = L"mult_max";
			this->mult_max->Size = System::Drawing::Size(157, 13);
			this->mult_max->TabIndex = 1;
			this->mult_max->Text = L"Multiplication/Division Maximum";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(198, 18);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &config::textBox1_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(198, 52);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 4;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &config::textBox3_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(71, 129);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"apply";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &config::button1_Click);
			// 
			// config
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(320, 161);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->mult_max);
			this->Controls->Add(this->add_max);
			this->Name = L"config";
			this->Text = L"config";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 maximum_add  = Convert::ToInt32(textBox1->Text);
			 }
	private: Int32^ maximum_add;
	private: Int32^ maximum_multiply;
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				maximum_multiply  = Convert::ToInt32(textBox3->Text);
			 }
//public:  System::Void load_show(Int32^ max_Add, Int32^ max_Mult){
			// textBox1->Text = Convert::ToString(max_Add);
			// textBox3->Text = Convert::ToString(max_Mult);
			// Show();
//		};
public: Int32^ get_max_add(){
				return maximum_add;
		 }
public: Int32^ get_max_mult(){
				return maximum_add;
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Hide();
		 }
};
}
