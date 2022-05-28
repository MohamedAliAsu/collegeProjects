#pragma once
#include "values.h"
#include "product.h"
namespace MarketPlaceMangement {
	
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
		MyForm(int ind,String ^prod,String ^pId)
		{
			InitializeComponent();
		
			this->prod = prod;
			this->pId = pId;
			values::currentp = ind;
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
	public:
		String^ prod;
		String^ pId;
		
	private: System::Windows::Forms::Button^ close;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RichTextBox^ Amount;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ p;
	private: System::Windows::Forms::Label^ pid;
	private: System::Windows::Forms::Button^ confirm;
	private: System::Windows::Forms::Label^ warn;


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
			this->close = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Amount = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->p = (gcnew System::Windows::Forms::Label());
			this->pid = (gcnew System::Windows::Forms::Label());
			this->confirm = (gcnew System::Windows::Forms::Button());
			this->warn = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// close
			// 
			this->close->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->close->Location = System::Drawing::Point(384, 1);
			this->close->Name = L"close";
			this->close->Size = System::Drawing::Size(27, 30);
			this->close->TabIndex = 14;
			this->close->Text = L"X";
			this->close->UseVisualStyleBackColor = true;
			this->close->Click += gcnew System::EventHandler(this, &MyForm::close_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(129, 124);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(150, 25);
			this->label1->TabIndex = 15;
			this->label1->Text = L"specify amount";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 19);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Product: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 54);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 19);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Product ID:";
			// 
			// Amount
			// 
			this->Amount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Amount->Location = System::Drawing::Point(167, 178);
			this->Amount->Multiline = false;
			this->Amount->Name = L"Amount";
			this->Amount->Size = System::Drawing::Size(76, 44);
			this->Amount->TabIndex = 18;
			this->Amount->Text = L"0";
			this->Amount->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::richTextBox1_KeyPress);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(249, 178);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(37, 44);
			this->button1->TabIndex = 19;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(124, 178);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(37, 44);
			this->button2->TabIndex = 20;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// p
			// 
			this->p->AutoSize = true;
			this->p->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->p->Location = System::Drawing::Point(84, 20);
			this->p->Name = L"p";
			this->p->Size = System::Drawing::Size(0, 19);
			this->p->TabIndex = 21;
			// 
			// pid
			// 
			this->pid->AutoSize = true;
			this->pid->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pid->Location = System::Drawing::Point(112, 54);
			this->pid->Name = L"pid";
			this->pid->Size = System::Drawing::Size(0, 19);
			this->pid->TabIndex = 22;
			// 
			// confirm
			// 
			this->confirm->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirm->Location = System::Drawing::Point(124, 245);
			this->confirm->Name = L"confirm";
			this->confirm->Size = System::Drawing::Size(162, 44);
			this->confirm->TabIndex = 23;
			this->confirm->Text = L"Add to Cart";
			this->confirm->UseVisualStyleBackColor = true;
			this->confirm->Click += gcnew System::EventHandler(this, &MyForm::confirm_Click);
			// 
			// warn
			// 
			this->warn->AutoSize = true;
			this->warn->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->warn->ForeColor = System::Drawing::Color::Red;
			this->warn->Location = System::Drawing::Point(69, 292);
			this->warn->Name = L"warn";
			this->warn->Size = System::Drawing::Size(0, 25);
			this->warn->TabIndex = 24;
			this->warn->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(412, 328);
			this->Controls->Add(this->warn);
			this->Controls->Add(this->confirm);
			this->Controls->Add(this->pid);
			this->Controls->Add(this->p);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Amount);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->close);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		Double d = 0.0;
	
	private: System::Void close_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void richTextBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	detect(sender, e);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	d=(System::Convert::ToDouble(Amount->Text));
	d++;
	Amount->Text = Convert::ToString(d);
	
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	d = (System::Convert::ToDouble(Amount->Text));
	d--;
	Amount->Text = Convert::ToString(d);
}
	  
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	p->Text = prod;
	pid->Text = pId;
}
private: System::Void confirm_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (values::AllCustomers[values::currentC].C_add_product(values::AllProducts[values::currentp]
		, Convert::ToDouble(Amount->Text)))
	{
		values::AllProducts[values::currentp].decrementQuantity(Convert::ToDouble(Amount->Text));
		
		this->Close();
		
	}
	else if (Convert::ToDouble(Amount->Text) <= 0)
	{
		warn->Text = gcnew String("invalid amount!");
		warn->ForeColor = System::Drawing::Color::Red;
	}
	else{
		warn->Text = gcnew String("Insufficent product quantity!");
		warn->ForeColor = System::Drawing::Color::Red;
		
	}
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   void detect(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		   e->Handled = !Char::IsDigit(e->KeyChar) && !Char::IsControl(e->KeyChar) && !e->KeyChar.Equals('.');
		   RichTextBox^ r = (RichTextBox^)sender;
		   if ((r->Text->Contains(".") || String::IsNullOrWhiteSpace(r->Text)) && (e->KeyChar == ('.'))) {
			   e->Handled = true;
		   }
	   }
};
}
