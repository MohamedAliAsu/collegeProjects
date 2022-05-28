#pragma once
#include "values.h"
namespace MarketPlaceMangement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for customerCart
	/// </summary>
	public ref class customerCart : public System::Windows::Forms::Form
	{
	public:
		customerCart(void)
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
		~customerCart()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ tp;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ succes;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(customerCart::typeid));
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tp = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->succes = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->AutoSize = true;
			this->tableLayoutPanel2->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Outset;
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				67.57322F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				32.42678F)));
			this->tableLayoutPanel2->Controls->Add(this->label2, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(39, 31);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->Padding = System::Windows::Forms::Padding(8);
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(478, 77);
			this->tableLayoutPanel2->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(323, 10);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(142, 57);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Price";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(302, 57);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Product";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->BackColor = System::Drawing::Color::Silver;
			this->panel1->Controls->Add(this->tableLayoutPanel2);
			this->panel1->Location = System::Drawing::Point(149, 157);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(589, 284);
			this->panel1->TabIndex = 2;
			// 
			// panel2
			// 
			this->panel2->AutoScroll = true;
			this->panel2->BackColor = System::Drawing::Color::Silver;
			this->panel2->Controls->Add(this->label3);
			this->panel2->Location = System::Drawing::Point(149, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(589, 69);
			this->panel2->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(197, 14);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(177, 42);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Your Cart";
			// 
			// panel3
			// 
			this->panel3->AutoScroll = true;
			this->panel3->BackColor = System::Drawing::Color::Silver;
			this->panel3->Controls->Add(this->label4);
			this->panel3->Location = System::Drawing::Point(149, 89);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(589, 69);
			this->panel3->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label4->Location = System::Drawing::Point(3, 23);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(246, 42);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Cart Products";
			// 
			// tp
			// 
			this->tp->AutoSize = true;
			this->tp->BackColor = System::Drawing::Color::Gainsboro;
			this->tp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tp->ForeColor = System::Drawing::SystemColors::Desktop;
			this->tp->Location = System::Drawing::Point(181, 460);
			this->tp->Name = L"tp";
			this->tp->Size = System::Drawing::Size(216, 42);
			this->tp->TabIndex = 5;
			this->tp->Text = L"Total Price :";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(264, 534);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(318, 56);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Confirm Buying";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &customerCart::button1_Click);
			// 
			// succes
			// 
			this->succes->AutoSize = true;
			this->succes->BackColor = System::Drawing::SystemColors::Control;
			this->succes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->succes->ForeColor = System::Drawing::Color::Lime;
			this->succes->Location = System::Drawing::Point(231, 596);
			this->succes->Name = L"succes";
			this->succes->Size = System::Drawing::Size(0, 42);
			this->succes->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(740, 536);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(149, 53);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Finish";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &customerCart::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(40, 537);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(149, 53);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Cancel";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &customerCart::button3_Click);
			// 
			// customerCart
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(924, 647);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->succes);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tp);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"customerCart";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"customerCart";
			this->Load += gcnew System::EventHandler(this, &customerCart::customerCart_Load);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void customerCart_Load(System::Object^ sender, System::EventArgs^ e) {
		
		
		for (size_t i = 0; i < values::AllCustomers[values::currentC].GetCustomerCart().getCartProducts().size(); i++)
		{
			
			
			Label^ n = gcnew Label();
			n->Text = values::AllCustomers[values::currentC].GetCustomerCart().getCartProducts()[i].quantity() +"X  "+
				gcnew String(values::AllCustomers[values::currentC].GetCustomerCart().getCartProducts()[i].name().c_str());
			Label^ p = gcnew Label();
			p->Text = gcnew String((values::AllCustomers[values::currentC]
									.GetCustomerCart().getCartProducts()[i]
									.price()* values::AllCustomers[values::currentC]
									.GetCustomerCart().getCartProducts()[i].
									 quantity()).ToString())+"$";
			tableLayoutPanel2->RowCount++;
			tableLayoutPanel2->RowStyles->Add(gcnew RowStyle(SizeType::Absolute, 50.0F));
			tableLayoutPanel2->Controls->Add(n, 0, tableLayoutPanel2->RowCount - 1);
			tableLayoutPanel2->Controls->Add(p, 1, tableLayoutPanel2->RowCount - 1);
			p->AutoSize = false;
			n->AutoSize = false;
			n->Dock = System::Windows::Forms::DockStyle::Fill;
		}
		tp->Text += values::AllCustomers[values::currentC].GetCustomerCart().calculateTotal().ToString()+"$";
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		succes->Text = "Transaction Completed";
		values::AllCustomers[values::currentC].deloadCart();
		button2->Visible = true;
		button3->Visible = false;
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
