#pragma once
#include<vector>
#include <iostream>
#include "values.h"
#include "product.h"
#include <msclr/marshal_cppstd.h>
#include "MyForm.h"
#include"customerCart.h"
namespace MarketPlaceMangement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CustomerPage
	/// </summary>
	public ref class CustomerPage : public System::Windows::Forms::Form
	{
		
	public:
		CustomerPage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	private: System::Windows::Forms::Label^ label2;
	public:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ prodName;
	private: System::Windows::Forms::Button^ BrowseName;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ BrowseCateg;
	private: System::Windows::Forms::Button^ CheckOut;

	private: System::Windows::Forms::ComboBox^ productsBrowse;
	private: System::Windows::Forms::Label^ label4;
	public:

	public:
		Form^ back;
		CustomerPage(Form ^back)
		{
			InitializeComponent();
			
			this->back = back;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CustomerPage()
		{
			if (components)
			{
				delete components;
			}
		}
		
	private: System::Windows::Forms::Button^ close;
	private: System::Windows::Forms::FlowLayoutPanel^ Products;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ idofC;
	private: System::Windows::Forms::Label^ nameOfC;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ logOut;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CustomerPage::typeid));
			this->close = (gcnew System::Windows::Forms::Button());
			this->Products = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->CheckOut = (gcnew System::Windows::Forms::Button());
			this->prodName = (gcnew System::Windows::Forms::TextBox());
			this->BrowseName = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->BrowseCateg = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->productsBrowse = (gcnew System::Windows::Forms::ComboBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->logOut = (gcnew System::Windows::Forms::Button());
			this->idofC = (gcnew System::Windows::Forms::Label());
			this->nameOfC = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// close
			// 
			this->close->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->close->Location = System::Drawing::Point(118, 3);
			this->close->Name = L"close";
			this->close->Size = System::Drawing::Size(42, 39);
			this->close->TabIndex = 13;
			this->close->Text = L"X";
			this->close->UseVisualStyleBackColor = true;
			this->close->Click += gcnew System::EventHandler(this, &CustomerPage::close_Click);
			// 
			// Products
			// 
			this->Products->AutoScroll = true;
			this->Products->BackColor = System::Drawing::Color::Transparent;
			this->Products->Location = System::Drawing::Point(2, 3);
			this->Products->Name = L"Products";
			this->Products->Size = System::Drawing::Size(976, 562);
			this->Products->TabIndex = 14;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->CheckOut);
			this->panel1->Controls->Add(this->prodName);
			this->panel1->Controls->Add(this->BrowseName);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->BrowseCateg);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->productsBrowse);
			this->panel1->Controls->Add(this->close);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->Location = System::Drawing::Point(977, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(170, 682);
			this->panel1->TabIndex = 15;
			// 
			// CheckOut
			// 
			this->CheckOut->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CheckOut->Location = System::Drawing::Point(8, 566);
			this->CheckOut->Name = L"CheckOut";
			this->CheckOut->Size = System::Drawing::Size(148, 61);
			this->CheckOut->TabIndex = 22;
			this->CheckOut->Text = L"CHECK OUT";
			this->CheckOut->UseVisualStyleBackColor = true;
			this->CheckOut->Click += gcnew System::EventHandler(this, &CustomerPage::CheckOut_Click);
			// 
			// prodName
			// 
			this->prodName->Location = System::Drawing::Point(8, 328);
			this->prodName->Name = L"prodName";
			this->prodName->Size = System::Drawing::Size(143, 22);
			this->prodName->TabIndex = 21;
			// 
			// BrowseName
			// 
			this->BrowseName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BrowseName->Location = System::Drawing::Point(8, 356);
			this->BrowseName->Name = L"BrowseName";
			this->BrowseName->Size = System::Drawing::Size(143, 31);
			this->BrowseName->TabIndex = 20;
			this->BrowseName->Text = L"BROWSE";
			this->BrowseName->UseVisualStyleBackColor = true;
			this->BrowseName->Click += gcnew System::EventHandler(this, &CustomerPage::BrowseName_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label3->Location = System::Drawing::Point(14, 293);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(137, 20);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Browse by Name";
			// 
			// BrowseCateg
			// 
			this->BrowseCateg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BrowseCateg->Location = System::Drawing::Point(8, 204);
			this->BrowseCateg->Name = L"BrowseCateg";
			this->BrowseCateg->Size = System::Drawing::Size(143, 31);
			this->BrowseCateg->TabIndex = 17;
			this->BrowseCateg->Text = L"BROWSE";
			this->BrowseCateg->UseVisualStyleBackColor = true;
			this->BrowseCateg->Click += gcnew System::EventHandler(this, &CustomerPage::BrowseCateg_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label2->Location = System::Drawing::Point(4, 139);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(154, 20);
			this->label2->TabIndex = 16;
			this->label2->Text = L"browse by category";
			this->label2->Click += gcnew System::EventHandler(this, &CustomerPage::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(15, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(136, 25);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Filter Products";
			// 
			// productsBrowse
			// 
			this->productsBrowse->FormattingEnabled = true;
			this->productsBrowse->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"All Categories" });
			this->productsBrowse->Location = System::Drawing::Point(8, 174);
			this->productsBrowse->Name = L"productsBrowse";
			this->productsBrowse->Size = System::Drawing::Size(143, 24);
			this->productsBrowse->TabIndex = 14;
			this->productsBrowse->SelectedIndexChanged += gcnew System::EventHandler(this, &CustomerPage::comboBox1_SelectedIndexChanged);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->logOut);
			this->panel2->Controls->Add(this->idofC);
			this->panel2->Controls->Add(this->nameOfC);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 566);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(977, 116);
			this->panel2->TabIndex = 16;
			// 
			// logOut
			// 
			this->logOut->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logOut->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->logOut->Location = System::Drawing::Point(795, 21);
			this->logOut->Name = L"logOut";
			this->logOut->Size = System::Drawing::Size(162, 77);
			this->logOut->TabIndex = 12;
			this->logOut->Text = L"Log Out";
			this->logOut->UseVisualStyleBackColor = true;
			this->logOut->Click += gcnew System::EventHandler(this, &CustomerPage::logOut_Click);
			// 
			// idofC
			// 
			this->idofC->AutoSize = true;
			this->idofC->BackColor = System::Drawing::Color::Transparent;
			this->idofC->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idofC->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->idofC->Location = System::Drawing::Point(502, 45);
			this->idofC->Name = L"idofC";
			this->idofC->Size = System::Drawing::Size(0, 27);
			this->idofC->TabIndex = 11;
			// 
			// nameOfC
			// 
			this->nameOfC->AutoSize = true;
			this->nameOfC->BackColor = System::Drawing::Color::Transparent;
			this->nameOfC->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameOfC->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->nameOfC->Location = System::Drawing::Point(221, 45);
			this->nameOfC->Name = L"nameOfC";
			this->nameOfC->Size = System::Drawing::Size(0, 27);
			this->nameOfC->TabIndex = 10;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(456, 45);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 27);
			this->label7->TabIndex = 9;
			this->label7->Text = L"id:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(104, 45);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(102, 27);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Welcome ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label4->Location = System::Drawing::Point(26, 524);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(116, 20);
			this->label4->TabIndex = 23;
			this->label4->Text = L"Are you done\?";
			// 
			// CustomerPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1147, 682);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->Products);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"CustomerPage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CustomerPage";
			this->Load += gcnew System::EventHandler(this, &CustomerPage::CustomerPage_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		Int32 r=0;
	private: System::Void close_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	Void adp(String^ n, String^ q, String^ c, String^ price,long long pid,double rating) {
			   
			   FlowLayoutPanel^ p = gcnew FlowLayoutPanel();
			   Products->Controls->Add(p);
			   p->Width = 550;
			   
			   p->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			   p->BackColor = System::Drawing::Color::AntiqueWhite;
			   p->BackColor = System::Drawing::Color::AliceBlue;
			   Label^ nameOfProduct = gcnew Label();
			   nameOfProduct->Text = n;
			   nameOfProduct->Width = 200;
			   nameOfProduct->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));;
			   
			   p->Controls->Add(nameOfProduct);
			   Label^ categoryOfProduct = gcnew Label();
			   categoryOfProduct->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 9.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   categoryOfProduct->Width = 200;
			   categoryOfProduct->Text = "Category : " + c;
			   p->Controls->Add(categoryOfProduct);
			   Label^ quantityOfProduct = gcnew Label();
			   quantityOfProduct->Text = "Available Quantity: " + q;
			   quantityOfProduct->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 9.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   quantityOfProduct->Width = 200;
			   p->Controls->Add(quantityOfProduct);
			   Label^ priceOfProduct = gcnew Label();
			   priceOfProduct->Text = "Price : " + price +"$";
			   priceOfProduct->Width = 200;
			   priceOfProduct->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 9.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   p->Controls->Add(priceOfProduct);
			   Label^ ratingOfProduct = gcnew Label();
			   ratingOfProduct->Text = "Rating : " + rating + "/5";
			   ratingOfProduct->Width = 200;
			   ratingOfProduct->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 9.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   p->Controls->Add(ratingOfProduct);
			   Button^ add = gcnew Button();
			   add->Text = "Add To Cart";
			   add->Tag = pid;
			   if(Convert::ToDouble(q)>0)
			   add->Click+=gcnew System::EventHandler(this, &CustomerPage::atc_Click);
			   p->Controls->Add(add);
			   Label^ s = gcnew Label();
			   if (Convert::ToDouble(q) == 0) {
				   s->Text = "Sold Out";
				   s->ForeColor = Color::Red;
				   s->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 11.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					   static_cast<System::Byte>(0)));
				   
			   }
			   else s->Text = "       ";
			   p->Controls->Add(s);
			   TextBox^ rateValue = gcnew TextBox();
			   rateValue->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MarketPlaceMangement::CustomerPage::kp);
			   rateValue->TextChanged += gcnew System::EventHandler(this, &MarketPlaceMangement::CustomerPage::ratetext);
			   p->Controls->Add(rateValue);
			   Button^ rate = gcnew Button();
			   rate->Text = "Rate Product";
			   rate->Tag = pid;
			   rate->Click += gcnew System::EventHandler(this, &CustomerPage::rate);
			   p->Controls->Add(rate);
			   
		   }
	private: System::Void CustomerPage_Load(System::Object^ sender, System::EventArgs^ e) {
		LoadAllProducts();
		nameOfC->Text = gcnew String(values::AllCustomers[values::currentC].getCustomer_name().c_str());
		idofC->Text = gcnew String(values::AllCustomers[values::currentC].getCustomer_id().ToString());
	
	}
		   
		   private: System::Void atc_Click(System::Object^ sender, System::EventArgs^ e) {
			   for (size_t i = 0; i < values::AllProducts.size(); i++)
			   {
				   if (((Button^)sender)->Tag->Equals(values::AllProducts[i].product_id())) {
					   MyForm^ amount = gcnew MyForm(i,
						   gcnew String(values::AllProducts[i].name().c_str())
						   , values::AllProducts[i].product_id().ToString());
					   amount->Closed += gcnew System::EventHandler(this, &MarketPlaceMangement::CustomerPage::whenother);
					   amount->ShowDialog();
					   
				   }
				   
			   }
				   
			  
		   }
private: System::Void logOut_Click(System::Object^ sender, System::EventArgs^ e) {
	back->Show();
	this->Close();
	
}

private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void BrowseCateg_Click(System::Object^ sender, System::EventArgs^ e) {
		prodName->ResetText();
		BrowseByCategory();
	}
	   void BrowseByCategory()
	   {
		   
		   Products->Hide();
		   Products->Controls->Clear();
		   if (productsBrowse->Text->Equals("All Categories")) {
			   LoadAllProducts();
			   return;
		   }
		   vector<product> s = customer::browse_category(msclr::interop::marshal_as<std::string>(productsBrowse->Text));
		   for (size_t i = 0; i < s.size(); i++)
		   {
			   adp(gcnew String(s[i].name().c_str()),
				   s[i].quantity().ToString()
				   , gcnew String(s[i].category().c_str())
				   , s[i].price().ToString()
				   , s[i].product_id(), s[i].totalRating);
		   }

		   Products->Show();
		   s.~vector();
		   
	   }
private: System::Void BrowseName_Click(System::Object^ sender, System::EventArgs^ e) {
	productsBrowse->SelectedIndex = -1;
	BrowseByName();
	
}
	   void BrowseByName()
	   {
		   Products->Hide();
		   Products->Controls->Clear();
		   vector<product> s = customer::browse_name(msclr::interop::marshal_as<std::string>(prodName->Text));
		   for (size_t i = 0; i < s.size(); i++)
		   {
			   adp(gcnew String(s[i].name().c_str()),
				   s[i].quantity().ToString()
				   , gcnew String(s[i].category().c_str())
				   , s[i].price().ToString()
				   , s[i].product_id(), s[i].totalRating);
		   }

		   Products->Show();
		   s.~vector();
	   }
private: System::Void CheckOut_Click(System::Object^ sender, System::EventArgs^ e) {
	customerCart^ c = gcnew customerCart();
	c->Show();

}
	   Void LoadAllProducts() {
		   Products->Hide();
		   Products->Controls->Clear();
		   if (!(values::AllProducts.empty())) {
			   for (size_t i = 0; i < values::AllProducts.size(); i++)
			   {
				   adp(gcnew String(values::AllProducts[i].name().c_str()),
					   values::AllProducts[i].quantity().ToString()
					   , gcnew String(values::AllProducts[i].category().c_str())
					   , values::AllProducts[i].price().ToString()
					   , values::AllProducts[i].product_id(), values::AllProducts[i].totalRating);

				   if (!(productsBrowse->Items->Contains(gcnew String(values::AllProducts[i].category().c_str())))) {
					   productsBrowse->Items->Add(gcnew String(values::AllProducts[i].category().c_str()));
				   }
			   }
		   }
		   Products->Show();
	   }
	   void ratetext(System::Object^ sender, System::EventArgs^ e) {
		   if (!String::IsNullOrWhiteSpace(((TextBox^)sender)->Text)) {
			   r = Convert::ToInt32(((TextBox^)sender)->Text);
		   }
	   };
	   private: System::Void rate(System::Object^ sender, System::EventArgs^ e) {
		   for (size_t i = 0; i < values::AllProducts.size(); i++)
		   {
			   if (((Button^)sender)->Tag->Equals(values::AllProducts[i].product_id())) {
				   values::AllProducts[i].updateRating(r, values::currentC);
			   }
			   
		   }
		   r = 0;
		   if (!(String::IsNullOrWhiteSpace(prodName->Text))) {
			   BrowseByName();
			   return;
		   }
		   if (!(String::IsNullOrWhiteSpace(productsBrowse->Text))) {
			   BrowseByCategory();
			   return;
		   }
		   else {
			   LoadAllProducts();
			   return;
		   }
		   
	   }

			  String ^s = "6789";
			  TextBox^ toCheck = gcnew TextBox();
			
				void whenother(System::Object^ sender, System::EventArgs^ e) {
					if (!(String::IsNullOrWhiteSpace(prodName->Text))) {
						BrowseByName();
						return;
					}
					if (!(String::IsNullOrWhiteSpace(productsBrowse->Text))) {
						BrowseByCategory();
						return;
					}
					LoadAllProducts();
				}
				;
				void kp(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
					e->Handled = !Char::IsDigit(e->KeyChar) && !Char::IsControl(e->KeyChar);
					if (s->Contains(e->KeyChar+"")) {
						e->Handled = true;
					}
					toCheck = (TextBox^)sender;
					if (toCheck->Text->Length == 1&&!(e->KeyChar=='\b')) {
						e->Handled = true;
					}
					
				};
};
}








