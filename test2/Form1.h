#pragma once
#include <stdlib.h>
#include <string>
#include <iostream>
#include <sstream>
#include "config.h"
#include <time.h>

using namespace std;

int const ADDITION = 0;
int const SUBTRACTION = 1;
int const MULTIPLICATION = 2;
int const SIMPLE_ALGEBRA = 4;
int const DIVISION = 3; // we're going to use the same call for division and multiplication
int const DEFAULT_MAX = 100;
int const MULTIPLICATION_MAX = 10;
int const TIME_DEFAULT = 100;
int const MAX_QUESTIONS = 10;

bool const TRUE = 1;
bool const FALSE = 0;

namespace test2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			manualInit();

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lbl1;

	private: System::Windows::Forms::Button^  exitbtn;


	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  modeSelect;
	private: System::Windows::Forms::ToolStripMenuItem^  addToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  subtractToolStripMenuItem;
	private: System::Windows::Forms::Label^  num1;


	private: System::Windows::Forms::Button^  newquest;

	private: System::Windows::Forms::Label^  avg_text;
	private: System::Windows::Forms::Label^  average;
	private: System::Windows::Forms::TextBox^  answer_box;
	private: System::Windows::Forms::Label^  checker;
	private: System::Windows::Forms::ToolStripMenuItem^  multiplyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  divideToolStripMenuItem;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::ToolStripMenuItem^  configurationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  maximumsToolStripMenuItem;
	private: System::ComponentModel::IContainer^  components;
	private: System::Windows::Forms::Label^  time_keep;
	private: System::Windows::Forms::ToolStripMenuItem^  simpleAlegebraToolStripMenuItem;

	private: System::Windows::Forms::Label^  algebra_x;
	private: System::Windows::Forms::Label^  operand;
	private: System::Windows::Forms::Label^  num2;
	private: System::Windows::Forms::Label^  algebra_equals;


	private: config^ Form2; //= gcnew config( max_value_add, max_value_mult);



	protected: 

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

void manualInit(void)	{
	this->Form2 = (gcnew config(DEFAULT_MAX,MULTIPLICATION_MAX));
	operator_int = ADDITION;
	time_counter = 0;
	timer1->Tick += gcnew EventHandler( this, &Form1::TimerEventProcessor );

};

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->exitbtn = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->modeSelect = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->subtractToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->multiplyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->divideToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->simpleAlegebraToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->configurationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->maximumsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->num1 = (gcnew System::Windows::Forms::Label());
			this->newquest = (gcnew System::Windows::Forms::Button());
			this->avg_text = (gcnew System::Windows::Forms::Label());
			this->average = (gcnew System::Windows::Forms::Label());
			this->answer_box = (gcnew System::Windows::Forms::TextBox());
			this->checker = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->time_keep = (gcnew System::Windows::Forms::Label());
			this->algebra_x = (gcnew System::Windows::Forms::Label());
			this->operand = (gcnew System::Windows::Forms::Label());
			this->num2 = (gcnew System::Windows::Forms::Label());
			this->algebra_equals = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl1->Location = System::Drawing::Point(25, 48);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(373, 25);
			this->lbl1->TabIndex = 0;
			this->lbl1->Text = L"Welcome to Mackenzie\'s Math Challenge";
			// 
			// exitbtn
			// 
			this->exitbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->exitbtn->Location = System::Drawing::Point(265, 183);
			this->exitbtn->Name = L"exitbtn";
			this->exitbtn->Size = System::Drawing::Size(88, 40);
			this->exitbtn->TabIndex = 2;
			this->exitbtn->Text = L"E&xit";
			this->exitbtn->UseVisualStyleBackColor = true;
			this->exitbtn->Click += gcnew System::EventHandler(this, &Form1::exitbtn_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->modeSelect, this->configurationToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(478, 24);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// modeSelect
			// 
			this->modeSelect->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->addToolStripMenuItem,
					this->subtractToolStripMenuItem, this->multiplyToolStripMenuItem, this->divideToolStripMenuItem, this->simpleAlegebraToolStripMenuItem
			});
			this->modeSelect->Name = L"modeSelect";
			this->modeSelect->Size = System::Drawing::Size(108, 20);
			this->modeSelect->Text = L"Math Quiz Select";
			// 
			// addToolStripMenuItem
			// 
			this->addToolStripMenuItem->Name = L"addToolStripMenuItem";
			this->addToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->addToolStripMenuItem->Text = L"Add";
			this->addToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::addToolStripMenuItem_Click);
			// 
			// subtractToolStripMenuItem
			// 
			this->subtractToolStripMenuItem->Name = L"subtractToolStripMenuItem";
			this->subtractToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->subtractToolStripMenuItem->Text = L"Subtract";
			this->subtractToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::subtractToolStripMenuItem_Click);
			// 
			// multiplyToolStripMenuItem
			// 
			this->multiplyToolStripMenuItem->Name = L"multiplyToolStripMenuItem";
			this->multiplyToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->multiplyToolStripMenuItem->Text = L"Multiply";
			this->multiplyToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::multiplyToolStripMenuItem_Click);
			// 
			// divideToolStripMenuItem
			// 
			this->divideToolStripMenuItem->Name = L"divideToolStripMenuItem";
			this->divideToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->divideToolStripMenuItem->Text = L"Divide";
			this->divideToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::divideToolStripMenuItem_Click);
			// 
			// simpleAlegebraToolStripMenuItem
			// 
			this->simpleAlegebraToolStripMenuItem->Name = L"simpleAlegebraToolStripMenuItem";
			this->simpleAlegebraToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->simpleAlegebraToolStripMenuItem->Text = L"Simple Alegebra";
			this->simpleAlegebraToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::algebraToolStripMenuItem_Click);
			// 
			// configurationToolStripMenuItem
			// 
			this->configurationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->maximumsToolStripMenuItem });
			this->configurationToolStripMenuItem->Name = L"configurationToolStripMenuItem";
			this->configurationToolStripMenuItem->Size = System::Drawing::Size(93, 20);
			this->configurationToolStripMenuItem->Text = L"Configuration";
			this->configurationToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::configurationToolStripMenuItem_Click);
			// 
			// maximumsToolStripMenuItem
			// 
			this->maximumsToolStripMenuItem->Name = L"maximumsToolStripMenuItem";
			this->maximumsToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->maximumsToolStripMenuItem->Text = L"Values";
			this->maximumsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::maximumsToolStripMenuItem_Click);
			// 
			// num1
			// 
			this->num1->AutoSize = true;
			this->num1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num1->Location = System::Drawing::Point(18, 101);
			this->num1->Name = L"num1";
			this->num1->Size = System::Drawing::Size(0, 26);
			this->num1->TabIndex = 6;
			// 
			// newquest
			// 
			this->newquest->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->newquest->Location = System::Drawing::Point(23, 183);
			this->newquest->Name = L"newquest";
			this->newquest->Size = System::Drawing::Size(178, 40);
			this->newquest->TabIndex = 9;
			this->newquest->Text = L"Start";
			this->newquest->UseVisualStyleBackColor = true;
			this->newquest->Click += gcnew System::EventHandler(this, &Form1::newquest_Click);
			// 
			// avg_text
			// 
			this->avg_text->AutoSize = true;
			this->avg_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->avg_text->Location = System::Drawing::Point(18, 235);
			this->avg_text->Name = L"avg_text";
			this->avg_text->Size = System::Drawing::Size(99, 26);
			this->avg_text->TabIndex = 10;
			this->avg_text->Text = L"Average:";
			// 
			// average
			// 
			this->average->AutoSize = true;
			this->average->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->average->Location = System::Drawing::Point(129, 235);
			this->average->Name = L"average";
			this->average->Size = System::Drawing::Size(48, 26);
			this->average->TabIndex = 11;
			this->average->Text = L"100";
			// 
			// answer_box
			// 
			this->answer_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->answer_box->Location = System::Drawing::Point(357, 95);
			this->answer_box->Name = L"answer_box";
			this->answer_box->Size = System::Drawing::Size(100, 32);
			this->answer_box->TabIndex = 12;
			this->answer_box->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::answer_box_KeyPress);
			// 
			// checker
			// 
			this->checker->AutoSize = true;
			this->checker->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->checker->Location = System::Drawing::Point(28, 133);
			this->checker->Name = L"checker";
			this->checker->Size = System::Drawing::Size(0, 26);
			this->checker->TabIndex = 13;
			// 
			// time_keep
			// 
			this->time_keep->AutoSize = true;
			this->time_keep->Location = System::Drawing::Point(20, 270);
			this->time_keep->Name = L"time_keep";
			this->time_keep->Size = System::Drawing::Size(36, 13);
			this->time_keep->TabIndex = 14;
			this->time_keep->Text = L"Timer:";
			// 
			// algebra_x
			// 
			this->algebra_x->AutoSize = true;
			this->algebra_x->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->algebra_x->Location = System::Drawing::Point(312, 101);
			this->algebra_x->Name = L"algebra_x";
			this->algebra_x->Size = System::Drawing::Size(0, 25);
			this->algebra_x->TabIndex = 16;
			// 
			// operand
			// 
			this->operand->AutoSize = true;
			this->operand->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->operand->Location = System::Drawing::Point(117, 102);
			this->operand->Name = L"operand";
			this->operand->Size = System::Drawing::Size(0, 26);
			this->operand->TabIndex = 7;
			// 
			// num2
			// 
			this->num2->AutoSize = true;
			this->num2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num2->Location = System::Drawing::Point(148, 101);
			this->num2->Name = L"num2";
			this->num2->Size = System::Drawing::Size(0, 26);
			this->num2->TabIndex = 8;
			// 
			// algebra_equals
			// 
			this->algebra_equals->AutoSize = true;
			this->algebra_equals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->algebra_equals->Location = System::Drawing::Point(246, 101);
			this->algebra_equals->Name = L"algebra_equals";
			this->algebra_equals->Size = System::Drawing::Size(0, 25);
			this->algebra_equals->TabIndex = 15;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(478, 292);
			this->Controls->Add(this->algebra_x);
			this->Controls->Add(this->algebra_equals);
			this->Controls->Add(this->time_keep);
			this->Controls->Add(this->checker);
			this->Controls->Add(this->answer_box);
			this->Controls->Add(this->average);
			this->Controls->Add(this->avg_text);
			this->Controls->Add(this->newquest);
			this->Controls->Add(this->num2);
			this->Controls->Add(this->operand);
			this->Controls->Add(this->num1);
			this->Controls->Add(this->exitbtn);
			this->Controls->Add(this->lbl1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"Form1";
			this->Text = L"Mackenzie Math Quiz";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void changebtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 lbl1->Text = "Hello World";
			 }
	private: System::Void exitbtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Exit();
			 }
	private: System::Void textBox1_Click(System::Object^  sender, System::EventArgs^  e) {
				 lbl1->Text = "Modifying Text Box";
			 }
private: System::Void textBox1_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
				lbl1->Text = "Mouse Hover";
		 }
private: System::Void addToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 operator_int = ADDITION;
			 maximum_value = max_value_add;
			 lbl1->Text = "Addition Quiz";
			 algebra_x->Text = "";
			 gen_numbers();
		 }
private: System::Void subtractToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 lbl1->Text = "Subtraction Quiz";
			 operator_int = SUBTRACTION;
			 maximum_value = max_value_add;
			 algebra_x->Text = "";
			 gen_numbers();
		 }
private: System::Void multiplyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 lbl1->Text = "Multiplication Quiz";
			 operator_int = MULTIPLICATION;
			 maximum_value = max_value_mult;
			 algebra_x->Text = "";
			 gen_numbers();
		 }

private: System::Void divideToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 lbl1->Text = "Divide Quiz";
			 operator_int = DIVISION;
			 maximum_value = max_value_mult;
			 gen_numbers();
			 algebra_x->Text = "";
			 rearrange_numbers();
		 }

private: System::Void algebraToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 operator_int = SIMPLE_ALGEBRA;
			 maximum_value = max_value_add;
			 lbl1->Text = "Algebra Quiz";
			 algebra_x->Text = "X=";
			 gen_numbers();
		 }
private: System::Void newquest_Click(System::Object^  sender, System::EventArgs^  e) {
	if (newquest->Text == "Start" || newquest->Text == "Start Again"){
		gen_numbers();
		newquest->Text = "Check Answer";
		time_counter = 0;
		total_correct = 0;
		total_questions = 0;
		average->Text = "";
		time_keep->Text = "";
		timer1->Start();
	}else if(newquest->Text != "Done" ){
				 if(total_questions < MAX_QUESTIONS) {
				 newquest->Text = "Check Answer";
				 answer_box_TextChanged(sender, e);
				 if (total_questions != MAX_QUESTIONS - 1){
					 gen_numbers();
				 };
				// if(operator_int == DIVISION){
				//	 rearrange_numbers();
				// };

				} else{ // if we have more that X questions
					newquest->Text = "Done";
					timer1->Stop();
					time_keep->Text = Convert::ToString((double)time_counter/ (double) 10) + " seconds";
				};
	}
	else { 
	newquest->Text = "Start Again";
	checker->Text = "";
	num1->Text = "";
	num2->Text = "";
	operand->Text = "";
	}
 }

private:  System::Void TimerEventProcessor( Object^ /*myObject*/, EventArgs^ /*myEventArgs*/ )
   {
      timer1->Stop();
	  time_counter++;
	  time_keep->Text = Convert::ToString(((double) time_counter)/( (double) 10)) + " seconds";
	  timer1->Start();
	}

private: System::Void rearrange_numbers(){
			 String^ temp;
			 temp = num1->Text;
			 num1->Text = calculate_Val;
			 calculate_Val = temp;
		 }

private: System::Void update_maximum() {
		   switch (operator_int) {
			 case SUBTRACTION: 
				 maximum_value = Form2->get_max_add();
				 break;
			 case ADDITION:
				 maximum_value = Form2->get_max_add();
				 break;
			 case MULTIPLICATION:
				  maximum_value = Form2->get_max_mult();
				  break;
			 case DIVISION:
				  maximum_value = Form2->get_max_mult();
				  break;
			 case SIMPLE_ALGEBRA:
				 maximum_value = Form2->get_max_add();
				 break;
			 }
				  }

private: System::Void gen_numbers(){
			 String^ temp2;
			 Int32 num1_int,num2_int,calculate_val_int;
			 update_maximum();
			 srand(time(NULL));
			 int temp = (int) maximum_value; 
			 num1_int = (rand()%temp) + 1;
			 num2_int = (rand()%temp) + 1;
			 temp2 = Convert::ToString(num1_int);
			 num1->Text = temp2;
			 temp2 = Convert::ToString(num2_int);
			 num2->Text = temp2;
			 switch (operator_int) {
			 case SUBTRACTION: 
				 calculate_val_int = num1_int - num2_int;
				 operand->Text = "-";
				 break;
			 case ADDITION:
				 calculate_val_int = num1_int + num2_int;
				 operand->Text = "+";
				 break;
			 case MULTIPLICATION:
				  calculate_val_int = num1_int * num2_int;
				  operand->Text = "x";
				  break;
			 case DIVISION:
				  calculate_val_int = num1_int * num2_int;
				  operand->Text = "/";
				  break;
			 case SIMPLE_ALGEBRA:
				 calculate_val_int = num1_int + num2_int;
				 operand->Text = "+";
				 algebra_equals->Text = "= " + calculate_val_int;
				 calculate_val_int = num1_int;
				 num1->Text = "X";
				 break;
			 }
			 calculate_Val = Convert::ToString(calculate_val_int);
		 }

private: System::Void answer_box_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(calculate_Val == answer_box->Text){
				correct_answer = TRUE;
				checker->Text = "TRUE answer is: " + calculate_Val;
				total_correct++;
			 }else{
				 correct_answer = FALSE;
				 checker->Text = "FALSE answer is: " + calculate_Val;
			 };
			 if (total_questions < MAX_QUESTIONS){
				 total_questions++;
			 };
			 Int32 temp1 = (total_correct/total_questions)*100;
			 average->Text = Convert::ToString( temp1 + "       " + Convert::ToString(total_correct) + "/" + Convert::ToString(total_questions) );
		 };


		 

private: String^ calculate_Val;
private: int	operator_int;
private: bool	correct_answer;
private: Double	total_questions;
private: Double	total_correct;
private: Int32^	maximum_value;
private: Int32^  max_value_add;
private: Int32^  max_value_mult;
private: Int32 time_counter;


private: System::Void answer_box_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			if(e->KeyChar == (char)13){
				newquest_Click(sender,e);
				answer_box->Text = "";
			}
		 }

private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void configurationToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void maximumsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			//Form2->load_show(max_value_add,max_value_mult);
			 Form2->Show();
		//	max_value_add = Form2->get_maximum_add();
		//	max_value_mult = Form2->get_maximum_multiply();
			//Form2->~config();
		 }



};
}

