#pragma once

namespace tambola {

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
		
			static int i=0;

	public: 
		static int k=0;
			
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^  result;
	private: System::Windows::Forms::Button^  press;
	protected: 


	private: System::Windows::Forms::Label^  Tambola;
	private: System::Windows::Forms::TextBox^  display;
	private: System::Windows::Forms::Label^  time;

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
			this->result = (gcnew System::Windows::Forms::TextBox());
			this->press = (gcnew System::Windows::Forms::Button());
			this->Tambola = (gcnew System::Windows::Forms::Label());
			this->display = (gcnew System::Windows::Forms::TextBox());
			this->time = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// result
			// 
			this->result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 45, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->result->ForeColor = System::Drawing::Color::Red;
			this->result->Location = System::Drawing::Point(385, 418);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(115, 75);
			this->result->TabIndex = 1;
			this->result->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// press
			// 
			this->press->BackColor = System::Drawing::Color::Black;
			this->press->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->press->FlatAppearance->BorderSize = 0;
			this->press->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->press->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->press->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->press->ForeColor = System::Drawing::Color::White;
			this->press->Location = System::Drawing::Point(213, 418);
			this->press->Name = L"press";
			this->press->Size = System::Drawing::Size(136, 75);
			this->press->TabIndex = 2;
			this->press->Text = L"Press";
			this->press->UseVisualStyleBackColor = false;
			this->press->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Tambola
			// 
			this->Tambola->AutoSize = true;
			this->Tambola->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Tambola->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Tambola->Location = System::Drawing::Point(307, 3);
			this->Tambola->Name = L"Tambola";
			this->Tambola->Size = System::Drawing::Size(150, 39);
			this->Tambola->TabIndex = 3;
			this->Tambola->Text = L"Tambola";
			// 
			// display
			// 
			this->display->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->display->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->display->Location = System::Drawing::Point(15, 43);
			this->display->Multiline = true;
			this->display->Name = L"display";
			this->display->Size = System::Drawing::Size(845, 369);
			this->display->TabIndex = 4;
			// 
			// time
			// 
			this->time->AutoSize = true;
			this->time->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->time->ForeColor = System::Drawing::Color::Green;
			this->time->Location = System::Drawing::Point(764, 18);
			this->time->Name = L"time";
			this->time->Size = System::Drawing::Size(21, 22);
			this->time->TabIndex = 5;
			this->time->Text = L"0";
			this->time->Click += gcnew System::EventHandler(this, &Form1::time_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ClientSize = System::Drawing::Size(872, 525);
			this->Controls->Add(this->time);
			this->Controls->Add(this->display);
			this->Controls->Add(this->Tambola);
			this->Controls->Add(this->press);
			this->Controls->Add(this->result);
			this->Name = L"Form1";
			this->Text = L"Tambola";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 static int a[90];
                  if(k==90)
				  {
					  this->time->Text="End of the Game";
				  }
				 x:Random ^ rnd = gcnew Random;
				  int x=rnd->Next(1,91);
				  if(a[x]==1)
				  {
					  goto x;
				  }
				  else
				  {
					  k++;
				  a[x]=1;
				  this->result->Text =" "+x;
				  this->display->Text+=" "+x+",";
				  this->time->Text=""+k;
				  }


				

			 }
private: System::Void time_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 this->display->Text="";
		 }
};
}

