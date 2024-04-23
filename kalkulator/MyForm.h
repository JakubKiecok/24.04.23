#pragma once
#include<math.h>
namespace kalkulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ liczba1;
	private: System::Windows::Forms::TextBox^ liczba2;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ wynik;
	private: System::Windows::Forms::Button^ button5;


	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->liczba1 = (gcnew System::Windows::Forms::TextBox());
			this->liczba2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->wynik = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// liczba1
			// 
			this->liczba1->Font = (gcnew System::Drawing::Font(L"Dutch801 XBd BT", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->liczba1->Location = System::Drawing::Point(234, 84);
			this->liczba1->Name = L"liczba1";
			this->liczba1->Size = System::Drawing::Size(100, 46);
			this->liczba1->TabIndex = 0;
			// 
			// liczba2
			// 
			this->liczba2->Font = (gcnew System::Drawing::Font(L"Dutch801 XBd BT", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->liczba2->Location = System::Drawing::Point(685, 84);
			this->liczba2->Name = L"liczba2";
			this->liczba2->Size = System::Drawing::Size(100, 46);
			this->liczba2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Dutch801 XBd BT", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(106, 84);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(122, 39);
			this->label1->TabIndex = 2;
			this->label1->Text = L"liczba1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Dutch801 XBd BT", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(557, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(122, 39);
			this->label2->TabIndex = 3;
			this->label2->Text = L"liczba2";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Yellow;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(234, 174);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 42);
			this->button1->TabIndex = 4;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Lime;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(407, 174);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 42);
			this->button2->TabIndex = 5;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkOrange;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(234, 247);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 42);
			this->button3->TabIndex = 6;
			this->button3->Text = L"*";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Red;
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->Location = System::Drawing::Point(407, 247);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 42);
			this->button4->TabIndex = 7;
			this->button4->Text = L"/";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// wynik
			// 
			this->wynik->AutoSize = true;
			this->wynik->Font = (gcnew System::Drawing::Font(L"Courier New", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->wynik->Location = System::Drawing::Point(559, 218);
			this->wynik->Name = L"wynik";
			this->wynik->Size = System::Drawing::Size(269, 30);
			this->wynik->TabIndex = 8;
			this->wynik->Text = L"tu je wynik many";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->Location = System::Drawing::Point(325, 316);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 42);
			this->button5->TabIndex = 9;
			this->button5->Text = L"^";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(983, 579);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->wynik);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->liczba2);
			this->Controls->Add(this->liczba1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double l1 = Convert::ToDouble(liczba1->Text);
		double l2 = Convert::ToDouble(liczba2->Text);
		double w = l1 + l2;
		wynik->Text = Convert::ToString("Dodawanie = " + w);
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	double l1 = Convert::ToDouble(liczba1->Text);
	double l2 = Convert::ToDouble(liczba2->Text);
	double w = l1 - l2;
	wynik->Text = Convert::ToString("Odejmowanie = " + w);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	double l1 = Convert::ToDouble(liczba1->Text);
	double l2 = Convert::ToDouble(liczba2->Text);
	double w = l1 * l2;
	wynik->Text = Convert::ToString("Mno¿enie = " + w);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	double l1 = Convert::ToDouble(liczba1->Text);
	double l2 = Convert::ToDouble(liczba2->Text);

	if (l2 != 0)
	{
		double w = l1 / l2;
		wynik->Text = Convert::ToString("Dzielenie= " + w);
	}
	else
	{
		wynik->Text = "Nie dziel przez zero";
	}
	
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	double l1 = Convert::ToDouble(liczba1->Text);
	double l2 = Convert::ToDouble(liczba2->Text);
	double w = pow(l1, l2);
	wynik->Text = Convert::ToString("Potegowanie = " + w);
}
};
}
