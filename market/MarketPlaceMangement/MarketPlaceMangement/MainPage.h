#pragma once
#include"LoginRegh.h"
namespace MarketPlaceMangement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainPage
	/// </summary>
	public ref class MainPage : public System::Windows::Forms::Form
	{
	public:
		MainPage(void)
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
		~MainPage()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ S;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ C;
	private: System::Windows::Forms::Button^ close;











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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainPage::typeid));
			this->S = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->C = (gcnew System::Windows::Forms::Button());
			this->close = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// S
			// 
			this->S->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->S->ForeColor = System::Drawing::Color::Black;
			this->S->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"S.Image")));
			this->S->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->S->Location = System::Drawing::Point(645, 449);
			this->S->Name = L"S";
			this->S->Size = System::Drawing::Size(165, 70);
			this->S->TabIndex = 2;
			this->S->Text = L"SELLER";
			this->S->UseVisualStyleBackColor = true;
			this->S->Click += gcnew System::EventHandler(this, &MainPage::S_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(346, 172);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(489, 72);
			this->label1->TabIndex = 0;
			this->label1->Text = L"HELLO THERE ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(434, 266);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(312, 56);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Are You A";
			// 
			// C
			// 
			this->C->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->C->ForeColor = System::Drawing::Color::Black;
			this->C->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C.Image")));
			this->C->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->C->Location = System::Drawing::Point(345, 449);
			this->C->Name = L"C";
			this->C->Size = System::Drawing::Size(163, 70);
			this->C->TabIndex = 4;
			this->C->Text = L"CUSTOMER";
			this->C->UseVisualStyleBackColor = true;
			this->C->Click += gcnew System::EventHandler(this, &MainPage::C_Click);
			// 
			// close
			// 
			this->close->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->close->Location = System::Drawing::Point(1093, 2);
			this->close->Name = L"close";
			this->close->Size = System::Drawing::Size(42, 39);
			this->close->TabIndex = 13;
			this->close->Text = L"X";
			this->close->UseVisualStyleBackColor = true;
			this->close->Click += gcnew System::EventHandler(this, &MainPage::close_Click);
			// 
			// MainPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1147, 682);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->close);
			this->Controls->Add(this->C);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->S);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MainPage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainPage";
			this->Load += gcnew System::EventHandler(this, &MainPage::MainPage_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void C_Click(System::Object^ sender, System::EventArgs^ e) {
	LoginRegh ^s = gcnew LoginRegh(this,1);
	this->Hide();
	s->Show();
}
private: System::Void S_Click(System::Object^ sender, System::EventArgs^ e) {
	LoginRegh^ s = gcnew LoginRegh(this, 2);
	this->Hide();
	s->Show();
}
private: System::Void close_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void MainPage_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
