#pragma once
#include<msclr/marshal_cppstd.h>
#include "values.h"
#include "seller.h"
#include"product.h"
#include "addProductSeller.h"

namespace MarketPlaceMangement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SellerPage
	/// </summary>
	public ref class SellerPage : public System::Windows::Forms::Form
	{
	public:
		SellerPage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		String ^n, ^i;
		Form ^back;
	private: System::Windows::Forms::Button^ logout;
	public:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ close;
	private: System::Windows::Forms::FlowLayoutPanel^ Products;




	public:

	public:
		SellerPage(Form ^back,String^ name, String^ id)
		{
			InitializeComponent();
			this->back = back;
			n = name;
			i = id;

			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SellerPage()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:





	private: System::Windows::Forms::Panel^ mainPanel;










	private: System::Windows::Forms::Label^ idSSentt;
	private: System::Windows::Forms::Label^ idsSent;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SellerPage::typeid));
			this->mainPanel = (gcnew System::Windows::Forms::Panel());
			this->Products = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->idSSentt = (gcnew System::Windows::Forms::Label());
			this->idsSent = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->logout = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->close = (gcnew System::Windows::Forms::Button());
			this->mainPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// mainPanel
			// 
			this->mainPanel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->mainPanel->BackColor = System::Drawing::Color::Transparent;
			this->mainPanel->Controls->Add(this->Products);
			this->mainPanel->Location = System::Drawing::Point(0, 0);
			this->mainPanel->Name = L"mainPanel";
			this->mainPanel->Size = System::Drawing::Size(930, 682);
			this->mainPanel->TabIndex = 1;
			this->mainPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &SellerPage::mainPanel_Paint);
			// 
			// Products
			// 
			this->Products->AutoScroll = true;
			this->Products->Location = System::Drawing::Point(0, 0);
			this->Products->Name = L"Products";
			this->Products->Size = System::Drawing::Size(930, 670);
			this->Products->TabIndex = 1;
			this->Products->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &SellerPage::Products_Paint);
			// 
			// idSSentt
			// 
			this->idSSentt->AutoSize = true;
			this->idSSentt->BackColor = System::Drawing::Color::Transparent;
			this->idSSentt->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idSSentt->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->idSSentt->Location = System::Drawing::Point(1042, 229);
			this->idSSentt->Name = L"idSSentt";
			this->idSSentt->Size = System::Drawing::Size(0, 27);
			this->idSSentt->TabIndex = 7;
			// 
			// idsSent
			// 
			this->idsSent->AutoSize = true;
			this->idsSent->BackColor = System::Drawing::Color::Transparent;
			this->idsSent->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idsSent->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->idsSent->Location = System::Drawing::Point(998, 127);
			this->idsSent->Name = L"idsSent";
			this->idsSent->Size = System::Drawing::Size(0, 27);
			this->idsSent->TabIndex = 6;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label7->Location = System::Drawing::Point(1027, 180);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 27);
			this->label7->TabIndex = 5;
			this->label7->Text = L"id:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label6->Location = System::Drawing::Point(969, 88);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(144, 27);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Welcome Dear";
			// 
			// logout
			// 
			this->logout->Location = System::Drawing::Point(969, 595);
			this->logout->Name = L"logout";
			this->logout->Size = System::Drawing::Size(144, 54);
			this->logout->TabIndex = 2;
			this->logout->Text = L"Log out ";
			this->logout->UseVisualStyleBackColor = true;
			this->logout->Click += gcnew System::EventHandler(this, &SellerPage::logOut_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(969, 404);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 54);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Add New Product";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SellerPage::button1_Click);
			// 
			// close
			// 
			this->close->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->close->Location = System::Drawing::Point(1102, 4);
			this->close->Name = L"close";
			this->close->Size = System::Drawing::Size(42, 39);
			this->close->TabIndex = 14;
			this->close->Text = L"X";
			this->close->UseVisualStyleBackColor = true;
			this->close->Click += gcnew System::EventHandler(this, &SellerPage::close_Click_1);
			// 
			// SellerPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1147, 682);
			this->Controls->Add(this->close);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->logout);
			this->Controls->Add(this->mainPanel);
			this->Controls->Add(this->idSSentt);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->idsSent);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"SellerPage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SellerPage";
			this->Load += gcnew System::EventHandler(this, &SellerPage::SellerPage_Load);
			this->mainPanel->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void mainPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		idsSent->Text = n;
		idSSentt->Text = i;
		
	}
private: System::Void logOut_Click(System::Object^ sender, System::EventArgs^ e) {
	back->Show();
	this->Close();
	
}
	   
private: System::Void addProduct_Click(System::Object^ sender, System::EventArgs^ e) {


}
	   Void adp(String ^n,String^q,String ^ c,String ^ price) {
		   FlowLayoutPanel^ p = gcnew FlowLayoutPanel();
		   Products->Controls->Add(p);
		   p->Width = 400;
		   p->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
		   p->BackColor = System::Drawing::Color::AntiqueWhite;
		   Label^ nameOfProduct = gcnew Label();
		   nameOfProduct->Text = n;
		   nameOfProduct->Width = 300;
		   nameOfProduct->Font= (gcnew System::Drawing::Font(L"Rockwell Condensed", 13.6F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			   static_cast<System::Byte>(0)));;
		   p->Controls->Add(nameOfProduct);
		   Label^ categoryOfProduct = gcnew Label();
		   categoryOfProduct->Width = 300;
		   categoryOfProduct->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 9.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			   static_cast<System::Byte>(0)));
		   categoryOfProduct->Text = "Category :" + c;
		   p->Controls->Add(categoryOfProduct);
		   Label^ quantityOfProduct = gcnew Label();
		   quantityOfProduct->Text = "Quantity : "+q;
		   quantityOfProduct->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 9.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			   static_cast<System::Byte>(0)));
		   quantityOfProduct->Width = 300;
		   p->Controls->Add(quantityOfProduct);
		   Label^ priceOfProduct = gcnew Label();
		   priceOfProduct->Text = "Price : " + price;
		   priceOfProduct->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 9.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			   static_cast<System::Byte>(0)));
		   p->Controls->Add(priceOfProduct);
		   
		   
	}
private: System::Void Products_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	
}
private: System::Void SellerPage_Load(System::Object^ sender, System::EventArgs^ e) {
	loadProducts();
}
	   void loadProducts()
	   {
		   Products->Hide();
		   Products->Controls->Clear();
		   if (!(values::AllProducts.empty())) {
			   for (size_t i = 0; i < values::AllProducts.size(); i++)
			   {
				   adp(gcnew String(values::AllProducts[i].name().c_str()),
					   values::AllProducts[i].quantity().ToString()
					   , gcnew String(values::AllProducts[i].category().c_str())
					   , values::AllProducts[i].price().ToString());

			   }
		   }
		   Products->Show();
	   }
private: System::Void close_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		
}
private: System::Void price_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	/*if ((!(Char::IsDigit(e->KeyChar) || !Char::IsControl(e->KeyChar) && !e->KeyChar.Equals('.')))) {
		e->Handled = true;
	}
	if (e->KeyChar.Equals('.') && (((RichTextBox^)sender)->Text->Contains("."))) {
		e->Handled = true;
	}*/
	detect(sender, e);
}
private: System::Void quantity_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void quantity_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	detect(sender, e);
}
	   void detect(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		   e->Handled = !Char::IsDigit(e->KeyChar) && !Char::IsControl(e->KeyChar) && !e->KeyChar.Equals('.') ;
		   RichTextBox^ r = (RichTextBox^)sender;
		   if ((r->Text->Contains(".")||String::IsNullOrWhiteSpace(r->Text)) && (e->KeyChar == ('.'))) {
			   e->Handled = true;
		   }
 	   }
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	addProductSeller^ add = gcnew addProductSeller();
	add->Show();
	add->Closed += gcnew System::EventHandler(this, &MarketPlaceMangement::SellerPage::onn);
}
	   void onn(System::Object^ sender, System::EventArgs^ e) {
		   loadProducts();
	   };
private: System::Void close_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}


