#pragma once
#include <msclr/marshal_cppstd.h>
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
	/// Summary for addProductSeller
	/// </summary>
	public ref class addProductSeller : public System::Windows::Forms::Form
	{
	public:
		addProductSeller(void)
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
		~addProductSeller()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ close;
	private: System::Windows::Forms::Button^ addProduct;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RichTextBox^ quantity;
	private: System::Windows::Forms::RichTextBox^ price;
	private: System::Windows::Forms::ComboBox^ category;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ pName;
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
			this->addProduct = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->quantity = (gcnew System::Windows::Forms::RichTextBox());
			this->price = (gcnew System::Windows::Forms::RichTextBox());
			this->category = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pName = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// close
			// 
			this->close->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->close->Location = System::Drawing::Point(515, 12);
			this->close->Name = L"close";
			this->close->Size = System::Drawing::Size(42, 39);
			this->close->TabIndex = 14;
			this->close->Text = L"X";
			this->close->UseVisualStyleBackColor = true;
			this->close->Click += gcnew System::EventHandler(this, &addProductSeller::close_Click);
			// 
			// addProduct
			// 
			this->addProduct->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addProduct->Location = System::Drawing::Point(164, 320);
			this->addProduct->Margin = System::Windows::Forms::Padding(20);
			this->addProduct->Name = L"addProduct";
			this->addProduct->Size = System::Drawing::Size(217, 86);
			this->addProduct->TabIndex = 15;
			this->addProduct->Text = L"Add Product";
			this->addProduct->UseVisualStyleBackColor = true;
			this->addProduct->Click += gcnew System::EventHandler(this, &addProductSeller::addProduct_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Location = System::Drawing::Point(180, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(201, 29);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Add New Product";
			// 
			// quantity
			// 
			this->quantity->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->quantity->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->quantity->Location = System::Drawing::Point(268, 228);
			this->quantity->Multiline = false;
			this->quantity->Name = L"quantity";
			this->quantity->Size = System::Drawing::Size(154, 22);
			this->quantity->TabIndex = 20;
			this->quantity->Text = L"";
			this->quantity->TextChanged += gcnew System::EventHandler(this, &addProductSeller::quantity_TextChanged);
			this->quantity->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &addProductSeller::quantity_KeyPress);
			// 
			// price
			// 
			this->price->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->price->Location = System::Drawing::Point(268, 163);
			this->price->Multiline = false;
			this->price->Name = L"price";
			this->price->Size = System::Drawing::Size(154, 22);
			this->price->TabIndex = 19;
			this->price->Text = L"";
			this->price->TextChanged += gcnew System::EventHandler(this, &addProductSeller::price_TextChanged);
			this->price->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &addProductSeller::price_KeyPress);
			// 
			// category
			// 
			this->category->FormattingEnabled = true;
			this->category->Location = System::Drawing::Point(47, 228);
			this->category->Name = L"category";
			this->category->Size = System::Drawing::Size(157, 24);
			this->category->TabIndex = 15;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label5->Location = System::Drawing::Point(266, 198);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 22);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Quantity";
			this->label5->Click += gcnew System::EventHandler(this, &addProductSeller::label5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label4->Location = System::Drawing::Point(264, 125);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 22);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Price";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label3->Location = System::Drawing::Point(46, 196);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 22);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Category";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label2->Location = System::Drawing::Point(46, 125);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 22);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Name";
			// 
			// pName
			// 
			this->pName->Location = System::Drawing::Point(47, 160);
			this->pName->Name = L"pName";
			this->pName->Size = System::Drawing::Size(154, 22);
			this->pName->TabIndex = 0;
			// 
			// addProductSeller
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(569, 481);
			this->Controls->Add(this->addProduct);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->quantity);
			this->Controls->Add(this->price);
			this->Controls->Add(this->category);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pName);
			this->Controls->Add(this->close);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"addProductSeller";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"addProductSeller";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &addProductSeller::addProductSeller_FormClosed);
			this->Load += gcnew System::EventHandler(this, &addProductSeller::addProductSeller_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void close_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void quantity_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void addProduct_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrWhiteSpace(pName->Text) || String::IsNullOrWhiteSpace(price->Text)
			|| String::IsNullOrWhiteSpace(category->Text) || String::IsNullOrWhiteSpace(quantity->Text))
		{
			MessageBoxButtons::OK;
			MessageBox::Show("you must specify all product properties!!");
		}
		else {
			product p(msclr::interop::marshal_as<std::string>(pName->Text),
				std::stod(msclr::interop::marshal_as<std::string>(price->Text)),
				msclr::interop::marshal_as<std::string>(category->Text),
				std::stod(msclr::interop::marshal_as<std::string>(quantity->Text)),
				values::AllSellers[values::currentS].getSID());
			values::AllSellers[values::currentS].add_product(p);
			this->Close();
		}
}
private: System::Void addProductSeller_Load(System::Object^ sender, System::EventArgs^ e) {

	if (!values::AllProducts.empty())
	{
		for (int i = 0; i < values::AllProducts.size(); i++)
		{
			if (!(category->Items->Contains(gcnew String(values::AllProducts[i].category().c_str())))) {
				category->Items->Add(gcnew String(values::AllProducts[i].category().c_str()));
			}
		}
	}
}
private: System::Void addProductSeller_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {

}
private: System::Void price_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
	   void detect(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		   e->Handled = !Char::IsDigit(e->KeyChar) && !Char::IsControl(e->KeyChar) && !e->KeyChar.Equals('.');
		   RichTextBox^ r = (RichTextBox^)sender;
		   if ((r->Text->Contains(".") || String::IsNullOrWhiteSpace(r->Text)) && (e->KeyChar == ('.'))) {
			   e->Handled = true;
		   }
	   }
private: System::Void price_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	detect(sender, e);
}
private: System::Void quantity_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	detect(sender, e);
}
};
}
