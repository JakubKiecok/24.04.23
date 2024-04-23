#pragma once

namespace aplikacja1 {

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
	private: System::Windows::Forms::Label^ napis;
	protected:
	private: System::Windows::Forms::Button^ btnnapis1;
	private: System::Windows::Forms::Button^ btnnapis2;
	private: System::Windows::Forms::Button^ btnnapis3;
	private: System::Windows::Forms::Label^ wynik;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnfoto1;


	private: System::Windows::Forms::Button^ btnfoto2;

	private: System::Windows::Forms::Button^ btnfoto3;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->napis = (gcnew System::Windows::Forms::Label());
			this->btnnapis1 = (gcnew System::Windows::Forms::Button());
			this->btnnapis2 = (gcnew System::Windows::Forms::Button());
			this->btnnapis3 = (gcnew System::Windows::Forms::Button());
			this->wynik = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnfoto1 = (gcnew System::Windows::Forms::Button());
			this->btnfoto2 = (gcnew System::Windows::Forms::Button());
			this->btnfoto3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// napis
			// 
			this->napis->AutoSize = true;
			this->napis->Font = (gcnew System::Drawing::Font(L"Impact", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->napis->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->napis->Location = System::Drawing::Point(59, 27);
			this->napis->Name = L"napis";
			this->napis->Size = System::Drawing::Size(253, 43);
			this->napis->TabIndex = 0;
			this->napis->Text = L"PZS1 w Pszczynie";
			// 
			// btnnapis1
			// 
			this->btnnapis1->BackColor = System::Drawing::Color::Fuchsia;
			this->btnnapis1->Location = System::Drawing::Point(67, 129);
			this->btnnapis1->Name = L"btnnapis1";
			this->btnnapis1->Size = System::Drawing::Size(144, 82);
			this->btnnapis1->TabIndex = 1;
			this->btnnapis1->Text = L"Napis 1";
			this->btnnapis1->UseVisualStyleBackColor = false;
			this->btnnapis1->Click += gcnew System::EventHandler(this, &MyForm::btnnapis1_Click);
			// 
			// btnnapis2
			// 
			this->btnnapis2->BackColor = System::Drawing::Color::Red;
			this->btnnapis2->Location = System::Drawing::Point(217, 129);
			this->btnnapis2->Name = L"btnnapis2";
			this->btnnapis2->Size = System::Drawing::Size(144, 82);
			this->btnnapis2->TabIndex = 2;
			this->btnnapis2->Text = L"Napis 2";
			this->btnnapis2->UseVisualStyleBackColor = false;
			this->btnnapis2->Click += gcnew System::EventHandler(this, &MyForm::btnnapis2_Click);
			// 
			// btnnapis3
			// 
			this->btnnapis3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnnapis3->Location = System::Drawing::Point(367, 129);
			this->btnnapis3->Name = L"btnnapis3";
			this->btnnapis3->Size = System::Drawing::Size(144, 82);
			this->btnnapis3->TabIndex = 3;
			this->btnnapis3->Text = L"Napis 3";
			this->btnnapis3->UseVisualStyleBackColor = false;
			this->btnnapis3->Click += gcnew System::EventHandler(this, &MyForm::btnnapis3_Click);
			// 
			// wynik
			// 
			this->wynik->AutoSize = true;
			this->wynik->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->wynik->Location = System::Drawing::Point(608, 149);
			this->wynik->Name = L"wynik";
			this->wynik->Size = System::Drawing::Size(299, 33);
			this->wynik->TabIndex = 4;
			this->wynik->Text = L"Tutaj napisy bedo chlopie";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(316, 244);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(216, 184);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// btnfoto1
			// 
			this->btnfoto1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnfoto1->Location = System::Drawing::Point(100, 449);
			this->btnfoto1->Name = L"btnfoto1";
			this->btnfoto1->Size = System::Drawing::Size(190, 78);
			this->btnfoto1->TabIndex = 6;
			this->btnfoto1->Text = L"button1";
			this->btnfoto1->UseVisualStyleBackColor = false;
			this->btnfoto1->Click += gcnew System::EventHandler(this, &MyForm::btnfoto1_Click);
			// 
			// btnfoto2
			// 
			this->btnfoto2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnfoto2->Location = System::Drawing::Point(296, 449);
			this->btnfoto2->Name = L"btnfoto2";
			this->btnfoto2->Size = System::Drawing::Size(190, 78);
			this->btnfoto2->TabIndex = 7;
			this->btnfoto2->Text = L"button2";
			this->btnfoto2->UseVisualStyleBackColor = false;
			this->btnfoto2->Click += gcnew System::EventHandler(this, &MyForm::btnfoto2_Click);
			// 
			// btnfoto3
			// 
			this->btnfoto3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnfoto3->Location = System::Drawing::Point(492, 449);
			this->btnfoto3->Name = L"btnfoto3";
			this->btnfoto3->Size = System::Drawing::Size(190, 78);
			this->btnfoto3->TabIndex = 8;
			this->btnfoto3->Text = L"button3";
			this->btnfoto3->UseVisualStyleBackColor = false;
			this->btnfoto3->Click += gcnew System::EventHandler(this, &MyForm::btnfoto3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(988, 565);
			this->Controls->Add(this->btnfoto3);
			this->Controls->Add(this->btnfoto2);
			this->Controls->Add(this->btnfoto1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->wynik);
			this->Controls->Add(this->btnnapis3);
			this->Controls->Add(this->btnnapis2);
			this->Controls->Add(this->btnnapis1);
			this->Controls->Add(this->napis);
			this->Name = L"MyForm";
			this->Text = L"Alpikacja Tatry";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnnapis1_Click(System::Object^ sender, System::EventArgs^ e) {
		wynik->Text = "Pzs nr 1 zawsze i wszedzie";
	}
	private: System::Void btnnapis2_Click(System::Object^ sender, System::EventArgs^ e) {
		wynik->Text = "Jesli umrzesz to umrzesz ale gdy umrzesz umrzesz to nie umrzesz";
	}
private: System::Void btnnapis3_Click(System::Object^ sender, System::EventArgs^ e) {
	wynik->Text = "da BOMBOKALAT";
}
private: System::Void btnfoto1_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Load(L"C:\\Users\\Programista\\Downloads\\sili_cat_by_djman10247_dg5wzfi-fullview.jpg");
}
private: System::Void btnfoto2_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Load(L"C:\\Users\\Programista\\Downloads\\cat-cats.gif");
}
private: System::Void btnfoto3_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Load(L"C:\\Users\\Programista\\Downloads\\GLxCrHtXIAA-pPG.jpg");
}
};
}
