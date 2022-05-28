#pragma once
#include <msclr/marshal_cppstd.h>
#include "customer.h"
#include "seller.h"
#include "SellerPage.h"
#include "CustomerPage.h"
#include "values.h"
#include "CustomerPage.h"

namespace MarketPlaceMangement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Summary for LoginRegh
	/// </summary>
	public ref class LoginRegh : public System::Windows::Forms::Form
	{
	public:
		Form ^f;
		SellerPage^ selpa;
		CustomerPage^ cuspa;
	private: System::Windows::Forms::Button^ back;
	private: System::Windows::Forms::Panel^ reg_sel;
	private: System::Windows::Forms::Button^ registerSeller;
		  


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ passRegSell;
	private: System::Windows::Forms::TextBox^ nmRegSell;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ emRegSell;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ reg_cus;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ emRegCus;
	private: System::Windows::Forms::Button^ registerCustomer;


	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ passRegCus;
	private: System::Windows::Forms::TextBox^ nmRegCus;




	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ phone;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ address;
	private: System::Windows::Forms::Label^ check;
	private: System::Windows::Forms::Button^ close;
	private: System::Windows::Forms::Label^ checkEmpty1;
	private: System::Windows::Forms::Label^ checkEmpty;
	public:
		int t;
		LoginRegh(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		LoginRegh(Form ^f, int t)
		{
			InitializeComponent();
			this->f = f;
			this->t = t;
			
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginRegh()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ pass;
	protected:

	private: System::Windows::Forms::TextBox^ em;

	private: System::Windows::Forms::Label^ type;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ log;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginRegh::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->check = (gcnew System::Windows::Forms::Label());
			this->log = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pass = (gcnew System::Windows::Forms::TextBox());
			this->em = (gcnew System::Windows::Forms::TextBox());
			this->type = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->back = (gcnew System::Windows::Forms::Button());
			this->reg_sel = (gcnew System::Windows::Forms::Panel());
			this->checkEmpty1 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->emRegSell = (gcnew System::Windows::Forms::TextBox());
			this->registerSeller = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->passRegSell = (gcnew System::Windows::Forms::TextBox());
			this->nmRegSell = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->reg_cus = (gcnew System::Windows::Forms::Panel());
			this->checkEmpty = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->phone = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->address = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->emRegCus = (gcnew System::Windows::Forms::TextBox());
			this->registerCustomer = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->passRegCus = (gcnew System::Windows::Forms::TextBox());
			this->nmRegCus = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->close = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->reg_sel->SuspendLayout();
			this->reg_cus->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Silver;
			this->panel1->Controls->Add(this->check);
			this->panel1->Controls->Add(this->log);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->pass);
			this->panel1->Controls->Add(this->em);
			this->panel1->Controls->Add(this->type);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(62, 67);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(326, 446);
			this->panel1->TabIndex = 0;
			// 
			// check
			// 
			this->check->AutoSize = true;
			this->check->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->check->ForeColor = System::Drawing::Color::Red;
			this->check->Location = System::Drawing::Point(46, 402);
			this->check->Name = L"check";
			this->check->Size = System::Drawing::Size(0, 20);
			this->check->TabIndex = 8;
			// 
			// log
			// 
			this->log->Location = System::Drawing::Point(103, 325);
			this->log->Name = L"log";
			this->log->Size = System::Drawing::Size(103, 71);
			this->log->TabIndex = 7;
			this->log->Text = L"Login";
			this->log->UseVisualStyleBackColor = true;
			this->log->Click += gcnew System::EventHandler(this, &LoginRegh::log_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(46, 229);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(115, 22);
			this->label3->TabIndex = 6;
			this->label3->Text = L"PASSWORD";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(44, 141);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 22);
			this->label2->TabIndex = 5;
			this->label2->Text = L"EMAIL";
			// 
			// pass
			// 
			this->pass->BackColor = System::Drawing::Color::White;
			this->pass->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pass->ForeColor = System::Drawing::Color::Black;
			this->pass->Location = System::Drawing::Point(48, 265);
			this->pass->Name = L"pass";
			this->pass->PasswordChar = '*';
			this->pass->Size = System::Drawing::Size(232, 22);
			this->pass->TabIndex = 4;
			// 
			// em
			// 
			this->em->BackColor = System::Drawing::Color::White;
			this->em->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->em->ForeColor = System::Drawing::Color::Black;
			this->em->Location = System::Drawing::Point(48, 177);
			this->em->Name = L"em";
			this->em->Size = System::Drawing::Size(232, 22);
			this->em->TabIndex = 3;
			this->em->TextChanged += gcnew System::EventHandler(this, &LoginRegh::textBox1_TextChanged);
			// 
			// type
			// 
			this->type->AutoSize = true;
			this->type->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->type->Location = System::Drawing::Point(95, 20);
			this->type->Name = L"type";
			this->type->Size = System::Drawing::Size(0, 20);
			this->type->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(111, 68);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 53);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Log In";
			// 
			// back
			// 
			this->back->Location = System::Drawing::Point(12, 600);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(103, 71);
			this->back->TabIndex = 8;
			this->back->Text = L"back";
			this->back->UseVisualStyleBackColor = true;
			this->back->Click += gcnew System::EventHandler(this, &LoginRegh::back_Click);
			// 
			// reg_sel
			// 
			this->reg_sel->BackColor = System::Drawing::Color::Silver;
			this->reg_sel->Controls->Add(this->checkEmpty1);
			this->reg_sel->Controls->Add(this->label8);
			this->reg_sel->Controls->Add(this->emRegSell);
			this->reg_sel->Controls->Add(this->registerSeller);
			this->reg_sel->Controls->Add(this->label4);
			this->reg_sel->Controls->Add(this->label5);
			this->reg_sel->Controls->Add(this->passRegSell);
			this->reg_sel->Controls->Add(this->nmRegSell);
			this->reg_sel->Controls->Add(this->label6);
			this->reg_sel->Controls->Add(this->label7);
			this->reg_sel->Location = System::Drawing::Point(738, 70);
			this->reg_sel->Name = L"reg_sel";
			this->reg_sel->Size = System::Drawing::Size(326, 551);
			this->reg_sel->TabIndex = 9;
			// 
			// checkEmpty1
			// 
			this->checkEmpty1->AutoSize = true;
			this->checkEmpty1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkEmpty1->Location = System::Drawing::Point(150, 393);
			this->checkEmpty1->Name = L"checkEmpty1";
			this->checkEmpty1->Size = System::Drawing::Size(0, 20);
			this->checkEmpty1->TabIndex = 10;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(44, 205);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(62, 22);
			this->label8->TabIndex = 9;
			this->label8->Text = L"EMAIL";
			// 
			// emRegSell
			// 
			this->emRegSell->BackColor = System::Drawing::Color::White;
			this->emRegSell->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->emRegSell->ForeColor = System::Drawing::Color::Black;
			this->emRegSell->Location = System::Drawing::Point(48, 239);
			this->emRegSell->Name = L"emRegSell";
			this->emRegSell->Size = System::Drawing::Size(232, 22);
			this->emRegSell->TabIndex = 8;
			// 
			// registerSeller
			// 
			this->registerSeller->Location = System::Drawing::Point(103, 440);
			this->registerSeller->Name = L"registerSeller";
			this->registerSeller->Size = System::Drawing::Size(103, 71);
			this->registerSeller->TabIndex = 7;
			this->registerSeller->Text = L"Register";
			this->registerSeller->UseVisualStyleBackColor = true;
			this->registerSeller->Click += gcnew System::EventHandler(this, &LoginRegh::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(46, 286);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(115, 22);
			this->label4->TabIndex = 6;
			this->label4->Text = L"PASSWORD";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(44, 130);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(57, 22);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Name";
			// 
			// passRegSell
			// 
			this->passRegSell->BackColor = System::Drawing::Color::White;
			this->passRegSell->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->passRegSell->ForeColor = System::Drawing::Color::Black;
			this->passRegSell->Location = System::Drawing::Point(48, 323);
			this->passRegSell->Name = L"passRegSell";
			this->passRegSell->PasswordChar = '*';
			this->passRegSell->Size = System::Drawing::Size(232, 22);
			this->passRegSell->TabIndex = 4;
			// 
			// nmRegSell
			// 
			this->nmRegSell->BackColor = System::Drawing::Color::White;
			this->nmRegSell->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->nmRegSell->ForeColor = System::Drawing::Color::Black;
			this->nmRegSell->Location = System::Drawing::Point(48, 160);
			this->nmRegSell->Name = L"nmRegSell";
			this->nmRegSell->Size = System::Drawing::Size(232, 22);
			this->nmRegSell->TabIndex = 3;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(106, 14);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 16);
			this->label6->TabIndex = 2;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(111, 54);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(113, 53);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Register";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(410, 80);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(261, 29);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Don\'t have An Account\?";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(535, 126);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(160, 29);
			this->label10->TabIndex = 10;
			this->label10->Text = L"Register Now";
			this->label10->Click += gcnew System::EventHandler(this, &LoginRegh::label10_Click);
			// 
			// reg_cus
			// 
			this->reg_cus->BackColor = System::Drawing::Color::LightGray;
			this->reg_cus->Controls->Add(this->checkEmpty);
			this->reg_cus->Controls->Add(this->label14);
			this->reg_cus->Controls->Add(this->phone);
			this->reg_cus->Controls->Add(this->label16);
			this->reg_cus->Controls->Add(this->address);
			this->reg_cus->Controls->Add(this->label11);
			this->reg_cus->Controls->Add(this->emRegCus);
			this->reg_cus->Controls->Add(this->registerCustomer);
			this->reg_cus->Controls->Add(this->label12);
			this->reg_cus->Controls->Add(this->label13);
			this->reg_cus->Controls->Add(this->passRegCus);
			this->reg_cus->Controls->Add(this->nmRegCus);
			this->reg_cus->Controls->Add(this->label15);
			this->reg_cus->Location = System::Drawing::Point(738, 70);
			this->reg_cus->Name = L"reg_cus";
			this->reg_cus->Size = System::Drawing::Size(326, 551);
			this->reg_cus->TabIndex = 11;
			// 
			// checkEmpty
			// 
			this->checkEmpty->AutoSize = true;
			this->checkEmpty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkEmpty->Location = System::Drawing::Point(150, 440);
			this->checkEmpty->Name = L"checkEmpty";
			this->checkEmpty->Size = System::Drawing::Size(0, 20);
			this->checkEmpty->TabIndex = 14;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(44, 305);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(60, 22);
			this->label14->TabIndex = 13;
			this->label14->Text = L"phone";
			// 
			// phone
			// 
			this->phone->BackColor = System::Drawing::Color::White;
			this->phone->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->phone->ForeColor = System::Drawing::Color::Black;
			this->phone->Location = System::Drawing::Point(48, 335);
			this->phone->Name = L"phone";
			this->phone->Size = System::Drawing::Size(232, 22);
			this->phone->TabIndex = 12;
			this->phone->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &LoginRegh::phone_KeyPress);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(44, 237);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(74, 22);
			this->label16->TabIndex = 11;
			this->label16->Text = L"address";
			// 
			// address
			// 
			this->address->BackColor = System::Drawing::Color::White;
			this->address->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->address->ForeColor = System::Drawing::Color::Black;
			this->address->Location = System::Drawing::Point(48, 267);
			this->address->Name = L"address";
			this->address->Size = System::Drawing::Size(232, 22);
			this->address->TabIndex = 10;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(44, 166);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(62, 22);
			this->label11->TabIndex = 9;
			this->label11->Text = L"EMAIL";
			// 
			// emRegCus
			// 
			this->emRegCus->BackColor = System::Drawing::Color::White;
			this->emRegCus->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->emRegCus->ForeColor = System::Drawing::Color::Black;
			this->emRegCus->Location = System::Drawing::Point(48, 200);
			this->emRegCus->Name = L"emRegCus";
			this->emRegCus->Size = System::Drawing::Size(232, 22);
			this->emRegCus->TabIndex = 8;
			// 
			// registerCustomer
			// 
			this->registerCustomer->Location = System::Drawing::Point(103, 471);
			this->registerCustomer->Name = L"registerCustomer";
			this->registerCustomer->Size = System::Drawing::Size(103, 71);
			this->registerCustomer->TabIndex = 7;
			this->registerCustomer->Text = L"Register";
			this->registerCustomer->UseVisualStyleBackColor = true;
			this->registerCustomer->Click += gcnew System::EventHandler(this, &LoginRegh::registerCustomer_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(46, 371);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(115, 22);
			this->label12->TabIndex = 6;
			this->label12->Text = L"PASSWORD";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(44, 91);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(57, 22);
			this->label13->TabIndex = 5;
			this->label13->Text = L"Name";
			// 
			// passRegCus
			// 
			this->passRegCus->BackColor = System::Drawing::Color::White;
			this->passRegCus->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->passRegCus->ForeColor = System::Drawing::Color::Black;
			this->passRegCus->Location = System::Drawing::Point(48, 400);
			this->passRegCus->Name = L"passRegCus";
			this->passRegCus->PasswordChar = '*';
			this->passRegCus->Size = System::Drawing::Size(232, 22);
			this->passRegCus->TabIndex = 4;
			// 
			// nmRegCus
			// 
			this->nmRegCus->BackColor = System::Drawing::Color::White;
			this->nmRegCus->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->nmRegCus->ForeColor = System::Drawing::Color::Black;
			this->nmRegCus->Location = System::Drawing::Point(48, 121);
			this->nmRegCus->Name = L"nmRegCus";
			this->nmRegCus->Size = System::Drawing::Size(232, 22);
			this->nmRegCus->TabIndex = 3;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(111, 15);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(113, 53);
			this->label15->TabIndex = 1;
			this->label15->Text = L"Register";
			// 
			// close
			// 
			this->close->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->close->Location = System::Drawing::Point(1104, 2);
			this->close->Name = L"close";
			this->close->Size = System::Drawing::Size(42, 39);
			this->close->TabIndex = 12;
			this->close->Text = L"X";
			this->close->UseVisualStyleBackColor = true;
			this->close->Click += gcnew System::EventHandler(this, &LoginRegh::close_Click);
			// 
			// LoginRegh
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1147, 682);
			this->Controls->Add(this->reg_cus);
			this->Controls->Add(this->reg_sel);
			this->Controls->Add(this->close);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->back);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"LoginRegh";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LoginRegh";
			this->Load += gcnew System::EventHandler(this, &LoginRegh::LoginRegh_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->reg_sel->ResumeLayout(false);
			this->reg_sel->PerformLayout();
			this->reg_cus->ResumeLayout(false);
			this->reg_cus->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void back_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	f->Show();
}
private: System::Void LoginRegh_Load(System::Object^ sender, System::EventArgs^ e) {
	if (t == 1) {
		type->Text = "CUSTOMER";
		reg_sel->Hide();
		reg_cus->Show();
	}
	else {
		type->Text = "SELLER";
		
		reg_cus->Hide();
		reg_sel->Show();
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrWhiteSpace(emRegSell->Text) || String::IsNullOrWhiteSpace(nmRegSell->Text) || String::IsNullOrWhiteSpace(passRegSell->Text)) {
		checkEmpty1->Text = "please Fill All fields";
	}
	else {
		Seller s(msclr::interop::marshal_as<std::string>(nmRegSell->Text),
			msclr::interop::marshal_as<std::string>(emRegSell->Text));
		Seller::Seller_Reg(s, msclr::interop::marshal_as<std::string>(passRegSell->Text));
		selpa = gcnew SellerPage(this, nmRegSell->Text, (values::AllSellers.back().getSID()).ToString());
		this->Hide();
		selpa->Show();
	}
	
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void registerCustomer_Click(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrWhiteSpace(emRegCus->Text) || String::IsNullOrWhiteSpace(nmRegCus->Text) || String::IsNullOrWhiteSpace(passRegCus->Text )|| String::IsNullOrWhiteSpace(address->Text)
		||String::IsNullOrWhiteSpace(phone->Text)) {
		checkEmpty->Text = "please Fill All fields";
	}
	else {
		
		customer c(msclr::interop::marshal_as<std::string>(address->Text),
			msclr::interop::marshal_as<std::string>(emRegCus->Text),
			msclr::interop::marshal_as<std::string>(nmRegCus->Text),
			msclr::interop::marshal_as<std::string>(phone->Text));
		customer::Cust_Reg(c, msclr::interop::marshal_as<std::string>(passRegCus->Text));
		cuspa = gcnew CustomerPage(this);
		this->Hide();
		cuspa->Show();
	}
	
}
	private: System::Void log_Click(System::Object^ sender, System::EventArgs^ e) {
		if (t == 1)
		{
			if (customer::login(msclr::interop::marshal_as<std::string>(em->Text), msclr::interop::marshal_as<std::string>(pass->Text))) {
				cuspa = gcnew CustomerPage(this);
				this->Hide();
				cuspa->Show();
			}
			else {
				check->Text = "invalid email/Password";
			}
		}
		else {
			if (Seller::login(msclr::interop::marshal_as<std::string>(em->Text), msclr::interop::marshal_as<std::string>(pass->Text))) {
				selpa = gcnew SellerPage(this,msclr::interop::marshal_as<String^> (values::AllSellers[values::currentS].getName()),
					values::AllSellers[values::currentS].getSID().ToString());
				this->Hide();
				selpa->Show();
			}
			else {
				check->Text = "invalid email/Password";
			}
		}
}
private: System::Void close_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
	
}
private: System::Void phone_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	e->Handled = !Char::IsDigit(e->KeyChar) && !Char::IsControl(e->KeyChar) && !e->KeyChar.Equals('.');
}
};
}
