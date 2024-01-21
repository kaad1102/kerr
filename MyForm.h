#pragma once
#include "libxl.h"
#include "room.h"
#include "schedule.h"
using namespace libxl;

namespace kerr {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace std;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		System::String^ Num;
		System::String^ Tex;
	public:
        MyForm(void)
		{
			Book* book = xlCreateBook();
			book->load(L"bd.xls");
			Sheet* sheet = book->getSheet(0);
			for (int i = 0; i < sheet->lastRow(); i++) {
				this->komn->Add(gcnew room(i));
			}
			Book* book1 = xlCreateBook();
			book1->load(L"bd.xls");
			Sheet* sheet1 = book1->getSheet(1);
			for (int i = 0; i < sheet1->lastRow(); i++) {
				this->rok->Add(gcnew schedule(i));
			}
			InitializeComponent();
			SetBTNColor();
			//
			//TODO: добавьте код конструктора
			//
		}


	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: List<room^>^ komn = gcnew List<room^>();
	private: List<schedule^>^ rok = gcnew List<schedule^>();
	private: room^ tmp;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;

	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Button^ button38;
	private: System::Windows::Forms::Button^ button39;
	private: System::Windows::Forms::Button^ button40;



	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button42;
	private: System::Windows::Forms::Button^ button43;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button41;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Button^ button44;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button47;

	private: System::Windows::Forms::Label^ label4;








	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void SetBTNColor(){
			int i = 40;
			Button^ tmp = gcnew Button();
			for each (Control^ var in Controls)
			{
				if (var->GetType() == tmp->GetType()) {
					komn[i--]->Color((Button^)var, i.ToString());
				}
			}
		}
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(166, 393);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(35, 51);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(250, 392);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(35, 51);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(368, 393);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(35, 51);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(452, 393);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(35, 51);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(572, 393);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(35, 51);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(655, 393);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(35, 51);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(775, 393);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(35, 51);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(859, 393);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(35, 51);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(166, 314);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(35, 51);
			this->button9->TabIndex = 8;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(250, 314);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(35, 51);
			this->button10->TabIndex = 9;
			this->button10->Text = L"10";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(452, 314);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(35, 51);
			this->button12->TabIndex = 11;
			this->button12->Text = L"12";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(572, 314);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(35, 51);
			this->button13->TabIndex = 12;
			this->button13->Text = L"13";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(655, 314);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(35, 51);
			this->button14->TabIndex = 13;
			this->button14->Text = L"14";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(775, 314);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(35, 51);
			this->button15->TabIndex = 14;
			this->button15->Text = L"31";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(859, 314);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(35, 51);
			this->button16->TabIndex = 15;
			this->button16->Text = L"16";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(166, 233);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(35, 51);
			this->button17->TabIndex = 16;
			this->button17->Text = L"17";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(250, 233);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(35, 51);
			this->button18->TabIndex = 17;
			this->button18->Text = L"18";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(368, 233);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(35, 51);
			this->button19->TabIndex = 18;
			this->button19->Text = L"19";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(452, 233);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(35, 51);
			this->button20->TabIndex = 19;
			this->button20->Text = L"20";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(572, 233);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(35, 51);
			this->button21->TabIndex = 20;
			this->button21->Text = L"21";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(655, 233);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(35, 51);
			this->button22->TabIndex = 21;
			this->button22->Text = L"22";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(775, 233);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(35, 51);
			this->button23->TabIndex = 22;
			this->button23->Text = L"23";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(859, 233);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(35, 51);
			this->button24->TabIndex = 23;
			this->button24->Text = L"24";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(166, 154);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(35, 51);
			this->button25->TabIndex = 24;
			this->button25->Text = L"25";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(250, 154);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(35, 51);
			this->button26->TabIndex = 25;
			this->button26->Text = L"26";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(368, 153);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(35, 51);
			this->button27->TabIndex = 26;
			this->button27->Text = L"27";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(452, 153);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(35, 51);
			this->button28->TabIndex = 27;
			this->button28->Text = L"28";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(572, 154);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(35, 51);
			this->button29->TabIndex = 28;
			this->button29->Text = L"29";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(655, 154);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(35, 51);
			this->button30->TabIndex = 29;
			this->button30->Text = L"30";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(775, 154);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(35, 51);
			this->button31->TabIndex = 30;
			this->button31->Text = L"31";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(859, 154);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(35, 51);
			this->button32->TabIndex = 31;
			this->button32->Text = L"32";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(250, 74);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(35, 51);
			this->button34->TabIndex = 33;
			this->button34->Text = L"34";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(368, 74);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(35, 51);
			this->button35->TabIndex = 34;
			this->button35->Text = L"35";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button36
			// 
			this->button36->Location = System::Drawing::Point(452, 74);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(35, 51);
			this->button36->TabIndex = 35;
			this->button36->Text = L"36";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button37
			// 
			this->button37->Location = System::Drawing::Point(572, 74);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(35, 51);
			this->button37->TabIndex = 36;
			this->button37->Text = L"37";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button38
			// 
			this->button38->Location = System::Drawing::Point(655, 74);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(35, 51);
			this->button38->TabIndex = 37;
			this->button38->Text = L"38";
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button39
			// 
			this->button39->Location = System::Drawing::Point(775, 74);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(35, 51);
			this->button39->TabIndex = 38;
			this->button39->Text = L"39";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button40
			// 
			this->button40->Location = System::Drawing::Point(859, 74);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(35, 51);
			this->button40->TabIndex = 39;
			this->button40->Text = L"40";
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->button44);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->button43);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->button42);
			this->panel2->Location = System::Drawing::Point(150, 74);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(759, 386);
			this->panel2->TabIndex = 41;
			this->panel2->Visible = false;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->button47);
			this->panel3->Location = System::Drawing::Point(284, 57);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(472, 256);
			this->panel3->TabIndex = 42;
			this->panel3->Visible = false;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel3_Paint);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(6, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 24);
			this->label5->TabIndex = 1;
			this->label5->Text = L"label5";
			// 
			// button47
			// 
			this->button47->Location = System::Drawing::Point(410, 3);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(57, 38);
			this->button47->TabIndex = 0;
			this->button47->Text = L"X";
			this->button47->UseVisualStyleBackColor = true;
			this->button47->Click += gcnew System::EventHandler(this, &MyForm::button47_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(19, 318);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(118, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Фамилия и инициалы";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// button44
			// 
			this->button44->Location = System::Drawing::Point(168, 319);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(104, 46);
			this->button44->TabIndex = 5;
			this->button44->Text = L"Добавить";
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &MyForm::button44_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 294);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Добавить бронь:";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// button43
			// 
			this->button43->Location = System::Drawing::Point(608, 324);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(137, 46);
			this->button43->TabIndex = 3;
			this->button43->Text = L"Вывести расписание номера";
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &MyForm::button43_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox2->Location = System::Drawing::Point(18, 335);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(120, 20);
			this->textBox2->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(56, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			// 
			// button42
			// 
			this->button42->Location = System::Drawing::Point(659, 13);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(86, 38);
			this->button42->TabIndex = 0;
			this->button42->Text = L"Закрыть окно";
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &MyForm::button42_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(368, 314);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(35, 51);
			this->button11->TabIndex = 10;
			this->button11->Text = L"11";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(368, 249);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(301, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->UseSystemPasswordChar = true;
			// 
			// button41
			// 
			this->button41->Location = System::Drawing::Point(452, 299);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(134, 27);
			this->button41->TabIndex = 1;
			this->button41->Text = L"Вход";
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &MyForm::button41_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Courier New", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(361, 181);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(325, 39);
			this->label3->TabIndex = 42;
			this->label3->Text = L"Введите пароль";
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->button41);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1015, 541);
			this->panel1->TabIndex = 40;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(166, 74);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(35, 51);
			this->button33->TabIndex = 42;
			this->button33->Text = L"33";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1015, 541);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->button40);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Location = System::Drawing::Point(166, 393);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RoomView: Pro";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Click += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button41_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox1->Text == "1") {
		this->panel1->Visible = false;
	}
	else {
		MessageBox::Show("Неправильный пароль!", "Ошибка!", MessageBoxButtons::OK);
	}
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button42_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panel2->Visible = false;
}
private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panel2->Visible = true;
	Button^tmp = (Button^) sender;
	Num = tmp->Text;
	for each (room^ var in komn)
	{
		this->label1->Text = var->Search(tmp->Text);
		if (label1->Text != "") {
			break;
		}
	}
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button43_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panel3->Visible = true;
	for each (schedule ^ var in rok)
	{
		Tex = Tex + var->GetRoom(Num);
	}
	this->label5->Text = Tex;
	Tex = " ";
}
private: System::Void button47_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panel3->Visible = false;
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button44_Click(System::Object^ sender, System::EventArgs^ e) {
	room^ roomInstance = gcnew room(System::Convert::ToInt32(Num));
	String^ result = roomInstance->AddGuest(this->textBox2->Text, System::Convert::ToInt32(Num), this);
	if (result != "") {
		Button^ tmp = (Button^)sender;
		for each (Control ^ var in Controls)
		{
			if (var->GetType() == tmp->GetType()) {
				if (var->Text == Num) {
					var->BackColor = System::Drawing::Color::Red;
				}
			}
		}
	}
	}
};
}
