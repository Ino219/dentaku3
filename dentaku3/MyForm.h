#pragma once
#include"Calc.h"
#include<cmath>

namespace dentaku3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace calc_h;
	using namespace System::Windows::Forms::DataVisualization::Charting;

	/// <summary>
	/// MyForm の概要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
			c = gcnew Calc();
			oplist = gcnew List<String^>;
			oplist->Add("+");
			oplist->Add("-");
			oplist->Add("*");
			oplist->Add("/");
			oplist->Add("%");
			ksList = gcnew List<List<double>^>;
			ksList2 = gcnew List<List<String^>^>;
			n_op = "";
			ke = false;
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;


	private: System::Windows::Forms::Label^  eq_label;
	private: System::Windows::Forms::Label^  label_1;
	private: System::Windows::Forms::Label^  label_2;
	private: System::Windows::Forms::Label^  label_3;
	private: System::Windows::Forms::Label^  label_4;
	private: System::Windows::Forms::Label^  label_5;
	private: System::Windows::Forms::Label^  label_6;
	private: System::Windows::Forms::Label^  label_7;
	private: System::Windows::Forms::Label^  label_8;
	private: System::Windows::Forms::Label^  label_9;
	private: System::Windows::Forms::Label^  label_0;
	private: System::Windows::Forms::Label^  label_dot;
	private: System::Windows::Forms::Label^  label_add;
	private: System::Windows::Forms::Label^  label_sub;
	private: System::Windows::Forms::Label^  label_mul;
	private: System::Windows::Forms::Label^  label_div;
	private: System::Windows::Forms::Label^  label_mod;
	private: System::Windows::Forms::Label^  label_minus;
	private: System::Windows::Forms::Label^  label_ks;
	private: System::Windows::Forms::Label^  label_ke;
	private: System::Windows::Forms::Label^  label_reset;
	private: System::Windows::Forms::Label^  label_back;
	private: System::Windows::Forms::Label^  label_sin;
	private: System::Windows::Forms::Label^  label_cos;
	private: System::Windows::Forms::Label^  label_tan;
	private: System::Windows::Forms::Label^  label_route;
	private: System::Windows::Forms::Label^  label_log;
	private: System::Windows::Forms::Label^  label_10;
	private: System::Windows::Forms::Label^  label_xx;
	private: System::Windows::Forms::Label^  label_gx;
	private: System::Windows::Forms::Label^  label_pi;
	private: System::Windows::Forms::Label^  label_e;
	private: System::Windows::Forms::ListBox^  memoryBox1;
	private: System::Windows::Forms::Label^  list_add;
	private: System::Windows::Forms::Label^  list_del;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Label^  label_disp;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label_memory;

	protected:

	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->eq_label = (gcnew System::Windows::Forms::Label());
			this->label_1 = (gcnew System::Windows::Forms::Label());
			this->label_2 = (gcnew System::Windows::Forms::Label());
			this->label_3 = (gcnew System::Windows::Forms::Label());
			this->label_4 = (gcnew System::Windows::Forms::Label());
			this->label_5 = (gcnew System::Windows::Forms::Label());
			this->label_6 = (gcnew System::Windows::Forms::Label());
			this->label_7 = (gcnew System::Windows::Forms::Label());
			this->label_8 = (gcnew System::Windows::Forms::Label());
			this->label_9 = (gcnew System::Windows::Forms::Label());
			this->label_0 = (gcnew System::Windows::Forms::Label());
			this->label_dot = (gcnew System::Windows::Forms::Label());
			this->label_add = (gcnew System::Windows::Forms::Label());
			this->label_sub = (gcnew System::Windows::Forms::Label());
			this->label_mul = (gcnew System::Windows::Forms::Label());
			this->label_div = (gcnew System::Windows::Forms::Label());
			this->label_mod = (gcnew System::Windows::Forms::Label());
			this->label_minus = (gcnew System::Windows::Forms::Label());
			this->label_ks = (gcnew System::Windows::Forms::Label());
			this->label_ke = (gcnew System::Windows::Forms::Label());
			this->label_reset = (gcnew System::Windows::Forms::Label());
			this->label_back = (gcnew System::Windows::Forms::Label());
			this->label_sin = (gcnew System::Windows::Forms::Label());
			this->label_cos = (gcnew System::Windows::Forms::Label());
			this->label_tan = (gcnew System::Windows::Forms::Label());
			this->label_route = (gcnew System::Windows::Forms::Label());
			this->label_log = (gcnew System::Windows::Forms::Label());
			this->label_10 = (gcnew System::Windows::Forms::Label());
			this->label_xx = (gcnew System::Windows::Forms::Label());
			this->label_gx = (gcnew System::Windows::Forms::Label());
			this->label_pi = (gcnew System::Windows::Forms::Label());
			this->label_e = (gcnew System::Windows::Forms::Label());
			this->memoryBox1 = (gcnew System::Windows::Forms::ListBox());
			this->list_add = (gcnew System::Windows::Forms::Label());
			this->list_del = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label_disp = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label_memory = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Linen;
			this->textBox1->Location = System::Drawing::Point(32, 3);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(270, 19);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label1->Location = System::Drawing::Point(34, 42);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(20, 0, 20, 0);
			this->label1->Size = System::Drawing::Size(118, 27);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			// 
			// eq_label
			// 
			this->eq_label->AutoSize = true;
			this->eq_label->BackColor = System::Drawing::Color::LightSalmon;
			this->eq_label->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->eq_label->Location = System::Drawing::Point(61, 236);
			this->eq_label->Name = L"eq_label";
			this->eq_label->Padding = System::Windows::Forms::Padding(8);
			this->eq_label->Size = System::Drawing::Size(42, 43);
			this->eq_label->TabIndex = 4;
			this->eq_label->Text = L"=";
			this->eq_label->Click += gcnew System::EventHandler(this, &MyForm::eq_label_Click);
			// 
			// label_1
			// 
			this->label_1->AutoSize = true;
			this->label_1->BackColor = System::Drawing::Color::PeachPuff;
			this->label_1->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label_1->Location = System::Drawing::Point(13, 185);
			this->label_1->Name = L"label_1";
			this->label_1->Padding = System::Windows::Forms::Padding(8);
			this->label_1->Size = System::Drawing::Size(42, 43);
			this->label_1->TabIndex = 5;
			this->label_1->Text = L"1";
			this->label_1->Click += gcnew System::EventHandler(this, &MyForm::label_1_Click);
			// 
			// label_2
			// 
			this->label_2->AutoSize = true;
			this->label_2->BackColor = System::Drawing::Color::PeachPuff;
			this->label_2->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label_2->Location = System::Drawing::Point(61, 185);
			this->label_2->Name = L"label_2";
			this->label_2->Padding = System::Windows::Forms::Padding(8);
			this->label_2->Size = System::Drawing::Size(42, 43);
			this->label_2->TabIndex = 6;
			this->label_2->Text = L"2";
			this->label_2->Click += gcnew System::EventHandler(this, &MyForm::label_2_Click);
			// 
			// label_3
			// 
			this->label_3->AutoSize = true;
			this->label_3->BackColor = System::Drawing::Color::PeachPuff;
			this->label_3->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label_3->Location = System::Drawing::Point(110, 185);
			this->label_3->Name = L"label_3";
			this->label_3->Padding = System::Windows::Forms::Padding(8);
			this->label_3->Size = System::Drawing::Size(42, 43);
			this->label_3->TabIndex = 7;
			this->label_3->Text = L"3";
			this->label_3->Click += gcnew System::EventHandler(this, &MyForm::label_3_Click);
			// 
			// label_4
			// 
			this->label_4->AutoSize = true;
			this->label_4->BackColor = System::Drawing::Color::PeachPuff;
			this->label_4->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label_4->Location = System::Drawing::Point(13, 133);
			this->label_4->Name = L"label_4";
			this->label_4->Padding = System::Windows::Forms::Padding(8);
			this->label_4->Size = System::Drawing::Size(42, 43);
			this->label_4->TabIndex = 8;
			this->label_4->Text = L"4";
			this->label_4->Click += gcnew System::EventHandler(this, &MyForm::label_4_Click);
			// 
			// label_5
			// 
			this->label_5->AutoSize = true;
			this->label_5->BackColor = System::Drawing::Color::PeachPuff;
			this->label_5->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label_5->Location = System::Drawing::Point(61, 133);
			this->label_5->Name = L"label_5";
			this->label_5->Padding = System::Windows::Forms::Padding(8);
			this->label_5->Size = System::Drawing::Size(42, 43);
			this->label_5->TabIndex = 9;
			this->label_5->Text = L"5";
			this->label_5->Click += gcnew System::EventHandler(this, &MyForm::label_5_Click);
			// 
			// label_6
			// 
			this->label_6->AutoSize = true;
			this->label_6->BackColor = System::Drawing::Color::PeachPuff;
			this->label_6->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label_6->Location = System::Drawing::Point(110, 133);
			this->label_6->Name = L"label_6";
			this->label_6->Padding = System::Windows::Forms::Padding(8);
			this->label_6->Size = System::Drawing::Size(42, 43);
			this->label_6->TabIndex = 10;
			this->label_6->Text = L"6";
			this->label_6->Click += gcnew System::EventHandler(this, &MyForm::label_6_Click);
			// 
			// label_7
			// 
			this->label_7->AutoSize = true;
			this->label_7->BackColor = System::Drawing::Color::PeachPuff;
			this->label_7->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label_7->Location = System::Drawing::Point(13, 81);
			this->label_7->Name = L"label_7";
			this->label_7->Padding = System::Windows::Forms::Padding(8);
			this->label_7->Size = System::Drawing::Size(42, 43);
			this->label_7->TabIndex = 11;
			this->label_7->Text = L"7";
			this->label_7->Click += gcnew System::EventHandler(this, &MyForm::label_7_Click);
			// 
			// label_8
			// 
			this->label_8->AutoSize = true;
			this->label_8->BackColor = System::Drawing::Color::PeachPuff;
			this->label_8->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label_8->Location = System::Drawing::Point(61, 81);
			this->label_8->Name = L"label_8";
			this->label_8->Padding = System::Windows::Forms::Padding(8);
			this->label_8->Size = System::Drawing::Size(42, 43);
			this->label_8->TabIndex = 12;
			this->label_8->Text = L"8";
			this->label_8->Click += gcnew System::EventHandler(this, &MyForm::label_8_Click);
			// 
			// label_9
			// 
			this->label_9->AutoSize = true;
			this->label_9->BackColor = System::Drawing::Color::PeachPuff;
			this->label_9->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label_9->Location = System::Drawing::Point(109, 81);
			this->label_9->Name = L"label_9";
			this->label_9->Padding = System::Windows::Forms::Padding(8);
			this->label_9->Size = System::Drawing::Size(42, 43);
			this->label_9->TabIndex = 13;
			this->label_9->Text = L"9";
			this->label_9->Click += gcnew System::EventHandler(this, &MyForm::label_9_Click);
			// 
			// label_0
			// 
			this->label_0->AutoSize = true;
			this->label_0->BackColor = System::Drawing::Color::PeachPuff;
			this->label_0->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label_0->Location = System::Drawing::Point(13, 236);
			this->label_0->Name = L"label_0";
			this->label_0->Padding = System::Windows::Forms::Padding(8);
			this->label_0->Size = System::Drawing::Size(42, 43);
			this->label_0->TabIndex = 14;
			this->label_0->Text = L"0";
			this->label_0->Click += gcnew System::EventHandler(this, &MyForm::label_0_Click);
			// 
			// label_dot
			// 
			this->label_dot->AutoSize = true;
			this->label_dot->BackColor = System::Drawing::Color::PeachPuff;
			this->label_dot->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label_dot->Location = System::Drawing::Point(118, 236);
			this->label_dot->Name = L"label_dot";
			this->label_dot->Padding = System::Windows::Forms::Padding(8);
			this->label_dot->Size = System::Drawing::Size(33, 43);
			this->label_dot->TabIndex = 15;
			this->label_dot->Text = L".";
			this->label_dot->Click += gcnew System::EventHandler(this, &MyForm::label_dot_Click);
			// 
			// label_add
			// 
			this->label_add->AutoSize = true;
			this->label_add->BackColor = System::Drawing::Color::PaleGreen;
			this->label_add->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label_add->Location = System::Drawing::Point(157, 81);
			this->label_add->Name = L"label_add";
			this->label_add->Padding = System::Windows::Forms::Padding(8);
			this->label_add->Size = System::Drawing::Size(42, 43);
			this->label_add->TabIndex = 16;
			this->label_add->Text = L"+";
			this->label_add->Click += gcnew System::EventHandler(this, &MyForm::label_add_Click);
			// 
			// label_sub
			// 
			this->label_sub->AutoSize = true;
			this->label_sub->BackColor = System::Drawing::Color::PaleGreen;
			this->label_sub->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label_sub->Location = System::Drawing::Point(157, 133);
			this->label_sub->Name = L"label_sub";
			this->label_sub->Padding = System::Windows::Forms::Padding(8);
			this->label_sub->Size = System::Drawing::Size(42, 43);
			this->label_sub->TabIndex = 17;
			this->label_sub->Text = L"-";
			this->label_sub->Click += gcnew System::EventHandler(this, &MyForm::label_sub_Click);
			// 
			// label_mul
			// 
			this->label_mul->AutoSize = true;
			this->label_mul->BackColor = System::Drawing::Color::PaleGreen;
			this->label_mul->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label_mul->Location = System::Drawing::Point(157, 185);
			this->label_mul->Name = L"label_mul";
			this->label_mul->Padding = System::Windows::Forms::Padding(8);
			this->label_mul->Size = System::Drawing::Size(42, 43);
			this->label_mul->TabIndex = 18;
			this->label_mul->Text = L"*";
			this->label_mul->Click += gcnew System::EventHandler(this, &MyForm::label_mul_Click);
			// 
			// label_div
			// 
			this->label_div->AutoSize = true;
			this->label_div->BackColor = System::Drawing::Color::PaleGreen;
			this->label_div->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label_div->Location = System::Drawing::Point(157, 236);
			this->label_div->Name = L"label_div";
			this->label_div->Padding = System::Windows::Forms::Padding(8);
			this->label_div->Size = System::Drawing::Size(42, 43);
			this->label_div->TabIndex = 19;
			this->label_div->Text = L"/";
			this->label_div->Click += gcnew System::EventHandler(this, &MyForm::label_div_Click);
			// 
			// label_mod
			// 
			this->label_mod->AutoSize = true;
			this->label_mod->BackColor = System::Drawing::Color::PaleGreen;
			this->label_mod->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label_mod->Location = System::Drawing::Point(157, 288);
			this->label_mod->Name = L"label_mod";
			this->label_mod->Padding = System::Windows::Forms::Padding(8);
			this->label_mod->Size = System::Drawing::Size(42, 43);
			this->label_mod->TabIndex = 20;
			this->label_mod->Text = L"%";
			this->label_mod->Click += gcnew System::EventHandler(this, &MyForm::label_mod_Click);
			// 
			// label_minus
			// 
			this->label_minus->AutoSize = true;
			this->label_minus->BackColor = System::Drawing::Color::LightYellow;
			this->label_minus->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label_minus->Location = System::Drawing::Point(98, 288);
			this->label_minus->Margin = System::Windows::Forms::Padding(0);
			this->label_minus->Name = L"label_minus";
			this->label_minus->Padding = System::Windows::Forms::Padding(0, 8, 0, 8);
			this->label_minus->Size = System::Drawing::Size(54, 43);
			this->label_minus->TabIndex = 21;
			this->label_minus->Text = L"+/-";
			this->label_minus->Click += gcnew System::EventHandler(this, &MyForm::label_minus_Click);
			// 
			// label_ks
			// 
			this->label_ks->AutoSize = true;
			this->label_ks->BackColor = System::Drawing::Color::LightSalmon;
			this->label_ks->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label_ks->Location = System::Drawing::Point(13, 288);
			this->label_ks->Name = L"label_ks";
			this->label_ks->Padding = System::Windows::Forms::Padding(8);
			this->label_ks->Size = System::Drawing::Size(36, 43);
			this->label_ks->TabIndex = 22;
			this->label_ks->Text = L"(";
			this->label_ks->Click += gcnew System::EventHandler(this, &MyForm::label_ks_Click);
			// 
			// label_ke
			// 
			this->label_ke->AutoSize = true;
			this->label_ke->BackColor = System::Drawing::Color::LightSalmon;
			this->label_ke->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label_ke->Location = System::Drawing::Point(55, 288);
			this->label_ke->Name = L"label_ke";
			this->label_ke->Padding = System::Windows::Forms::Padding(8);
			this->label_ke->Size = System::Drawing::Size(36, 43);
			this->label_ke->TabIndex = 23;
			this->label_ke->Text = L")";
			this->label_ke->Click += gcnew System::EventHandler(this, &MyForm::label_ke_Click);
			// 
			// label_reset
			// 
			this->label_reset->AutoSize = true;
			this->label_reset->BackColor = System::Drawing::Color::LightSalmon;
			this->label_reset->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label_reset->Location = System::Drawing::Point(280, 288);
			this->label_reset->Name = L"label_reset";
			this->label_reset->Padding = System::Windows::Forms::Padding(8);
			this->label_reset->Size = System::Drawing::Size(46, 43);
			this->label_reset->TabIndex = 24;
			this->label_reset->Text = L"C";
			this->label_reset->Click += gcnew System::EventHandler(this, &MyForm::label_reset_Click);
			// 
			// label_back
			// 
			this->label_back->AutoSize = true;
			this->label_back->BackColor = System::Drawing::Color::LightSalmon;
			this->label_back->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label_back->Location = System::Drawing::Point(271, 236);
			this->label_back->Name = L"label_back";
			this->label_back->Padding = System::Windows::Forms::Padding(8);
			this->label_back->Size = System::Drawing::Size(55, 43);
			this->label_back->TabIndex = 25;
			this->label_back->Text = L"×";
			this->label_back->Click += gcnew System::EventHandler(this, &MyForm::label_back_Click);
			// 
			// label_sin
			// 
			this->label_sin->AutoSize = true;
			this->label_sin->BackColor = System::Drawing::Color::Thistle;
			this->label_sin->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label_sin->Location = System::Drawing::Point(13, 341);
			this->label_sin->Name = L"label_sin";
			this->label_sin->Padding = System::Windows::Forms::Padding(8);
			this->label_sin->Size = System::Drawing::Size(60, 43);
			this->label_sin->TabIndex = 26;
			this->label_sin->Text = L"sin";
			this->label_sin->Click += gcnew System::EventHandler(this, &MyForm::label_sin_Click);
			// 
			// label_cos
			// 
			this->label_cos->AutoSize = true;
			this->label_cos->BackColor = System::Drawing::Color::Thistle;
			this->label_cos->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label_cos->Location = System::Drawing::Point(84, 341);
			this->label_cos->Name = L"label_cos";
			this->label_cos->Padding = System::Windows::Forms::Padding(8);
			this->label_cos->Size = System::Drawing::Size(68, 43);
			this->label_cos->TabIndex = 27;
			this->label_cos->Text = L"cos";
			this->label_cos->Click += gcnew System::EventHandler(this, &MyForm::label_cos_Click);
			// 
			// label_tan
			// 
			this->label_tan->AutoSize = true;
			this->label_tan->BackColor = System::Drawing::Color::Thistle;
			this->label_tan->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label_tan->Location = System::Drawing::Point(167, 341);
			this->label_tan->Name = L"label_tan";
			this->label_tan->Padding = System::Windows::Forms::Padding(8);
			this->label_tan->Size = System::Drawing::Size(64, 43);
			this->label_tan->TabIndex = 28;
			this->label_tan->Text = L"tan";
			this->label_tan->Click += gcnew System::EventHandler(this, &MyForm::label_tan_Click);
			// 
			// label_route
			// 
			this->label_route->AutoSize = true;
			this->label_route->BackColor = System::Drawing::Color::LightYellow;
			this->label_route->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label_route->Location = System::Drawing::Point(205, 81);
			this->label_route->Name = L"label_route";
			this->label_route->Padding = System::Windows::Forms::Padding(8);
			this->label_route->Size = System::Drawing::Size(67, 43);
			this->label_route->TabIndex = 29;
			this->label_route->Text = L"√x";
			this->label_route->Click += gcnew System::EventHandler(this, &MyForm::label_route_Click);
			// 
			// label_log
			// 
			this->label_log->AutoSize = true;
			this->label_log->BackColor = System::Drawing::Color::LightYellow;
			this->label_log->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label_log->Location = System::Drawing::Point(205, 133);
			this->label_log->Name = L"label_log";
			this->label_log->Padding = System::Windows::Forms::Padding(8);
			this->label_log->Size = System::Drawing::Size(60, 43);
			this->label_log->TabIndex = 30;
			this->label_log->Text = L"log";
			this->label_log->Click += gcnew System::EventHandler(this, &MyForm::label_log_Click);
			// 
			// label_10
			// 
			this->label_10->AutoSize = true;
			this->label_10->BackColor = System::Drawing::Color::LightYellow;
			this->label_10->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label_10->Location = System::Drawing::Point(222, 185);
			this->label_10->Name = L"label_10";
			this->label_10->Padding = System::Windows::Forms::Padding(8);
			this->label_10->Size = System::Drawing::Size(88, 43);
			this->label_10->TabIndex = 31;
			this->label_10->Text = L"log10";
			this->label_10->Click += gcnew System::EventHandler(this, &MyForm::label_10_Click);
			// 
			// label_xx
			// 
			this->label_xx->AutoSize = true;
			this->label_xx->BackColor = System::Drawing::Color::LightYellow;
			this->label_xx->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label_xx->Location = System::Drawing::Point(205, 236);
			this->label_xx->Name = L"label_xx";
			this->label_xx->Padding = System::Windows::Forms::Padding(8);
			this->label_xx->Size = System::Drawing::Size(54, 43);
			this->label_xx->TabIndex = 32;
			this->label_xx->Text = L"x2";
			this->label_xx->Click += gcnew System::EventHandler(this, &MyForm::label_xx_Click);
			// 
			// label_gx
			// 
			this->label_gx->AutoSize = true;
			this->label_gx->BackColor = System::Drawing::Color::LightYellow;
			this->label_gx->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label_gx->Location = System::Drawing::Point(205, 288);
			this->label_gx->Name = L"label_gx";
			this->label_gx->Padding = System::Windows::Forms::Padding(8);
			this->label_gx->Size = System::Drawing::Size(68, 43);
			this->label_gx->TabIndex = 33;
			this->label_gx->Text = L"1/x";
			this->label_gx->Click += gcnew System::EventHandler(this, &MyForm::label_gx_Click);
			// 
			// label_pi
			// 
			this->label_pi->AutoSize = true;
			this->label_pi->BackColor = System::Drawing::Color::PeachPuff;
			this->label_pi->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label_pi->Location = System::Drawing::Point(271, 133);
			this->label_pi->Name = L"label_pi";
			this->label_pi->Padding = System::Windows::Forms::Padding(8);
			this->label_pi->Size = System::Drawing::Size(55, 43);
			this->label_pi->TabIndex = 34;
			this->label_pi->Text = L"π";
			this->label_pi->Click += gcnew System::EventHandler(this, &MyForm::label_pi_Click);
			// 
			// label_e
			// 
			this->label_e->AutoSize = true;
			this->label_e->BackColor = System::Drawing::Color::PeachPuff;
			this->label_e->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label_e->Location = System::Drawing::Point(284, 81);
			this->label_e->Name = L"label_e";
			this->label_e->Padding = System::Windows::Forms::Padding(8);
			this->label_e->Size = System::Drawing::Size(42, 43);
			this->label_e->TabIndex = 35;
			this->label_e->Text = L"e";
			this->label_e->Click += gcnew System::EventHandler(this, &MyForm::label_e_Click);
			// 
			// memoryBox1
			// 
			this->memoryBox1->BackColor = System::Drawing::Color::Moccasin;
			this->memoryBox1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->memoryBox1->FormattingEnabled = true;
			this->memoryBox1->ItemHeight = 19;
			this->memoryBox1->Location = System::Drawing::Point(347, 61);
			this->memoryBox1->Name = L"memoryBox1";
			this->memoryBox1->Size = System::Drawing::Size(157, 270);
			this->memoryBox1->TabIndex = 36;
			this->memoryBox1->DoubleClick += gcnew System::EventHandler(this, &MyForm::memoryBox1_DoubleClick);
			// 
			// list_add
			// 
			this->list_add->AutoSize = true;
			this->list_add->BackColor = System::Drawing::Color::Plum;
			this->list_add->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->list_add->Location = System::Drawing::Point(337, 349);
			this->list_add->Name = L"list_add";
			this->list_add->Padding = System::Windows::Forms::Padding(8);
			this->list_add->Size = System::Drawing::Size(64, 35);
			this->list_add->TabIndex = 37;
			this->list_add->Text = L"ADD";
			this->list_add->Click += gcnew System::EventHandler(this, &MyForm::list_add_Click);
			// 
			// list_del
			// 
			this->list_del->AutoSize = true;
			this->list_del->BackColor = System::Drawing::Color::Plum;
			this->list_del->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->list_del->Location = System::Drawing::Point(407, 349);
			this->list_del->Name = L"list_del";
			this->list_del->Padding = System::Windows::Forms::Padding(8);
			this->list_del->Size = System::Drawing::Size(97, 35);
			this->list_del->TabIndex = 38;
			this->list_del->Text = L"DELETE";
			this->list_del->Click += gcnew System::EventHandler(this, &MyForm::list_del_Click);
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::LemonChiffon;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(532, 31);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(300, 300);
			this->chart1->TabIndex = 39;
			this->chart1->Text = L"chart1";
			// 
			// label_disp
			// 
			this->label_disp->AutoSize = true;
			this->label_disp->BackColor = System::Drawing::Color::Plum;
			this->label_disp->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label_disp->Location = System::Drawing::Point(565, 349);
			this->label_disp->Name = L"label_disp";
			this->label_disp->Padding = System::Windows::Forms::Padding(8);
			this->label_disp->Size = System::Drawing::Size(105, 35);
			this->label_disp->TabIndex = 40;
			this->label_disp->Text = L"DISPLAY";
			this->label_disp->Click += gcnew System::EventHandler(this, &MyForm::label_disp_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::LightCyan;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"折れ線グラフ", L"棒グラフ", L"円グラフ" });
			this->comboBox1->Location = System::Drawing::Point(698, 349);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 41;
			// 
			// label_memory
			// 
			this->label_memory->AutoSize = true;
			this->label_memory->BackColor = System::Drawing::Color::MistyRose;
			this->label_memory->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label_memory->Location = System::Drawing::Point(386, 31);
			this->label_memory->Name = L"label_memory";
			this->label_memory->Size = System::Drawing::Size(67, 24);
			this->label_memory->TabIndex = 42;
			this->label_memory->Text = L"メモリ";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(861, 406);
			this->Controls->Add(this->label_memory);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label_disp);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->list_del);
			this->Controls->Add(this->list_add);
			this->Controls->Add(this->memoryBox1);
			this->Controls->Add(this->label_e);
			this->Controls->Add(this->label_pi);
			this->Controls->Add(this->label_gx);
			this->Controls->Add(this->label_xx);
			this->Controls->Add(this->label_10);
			this->Controls->Add(this->label_log);
			this->Controls->Add(this->label_route);
			this->Controls->Add(this->label_tan);
			this->Controls->Add(this->label_cos);
			this->Controls->Add(this->label_sin);
			this->Controls->Add(this->label_back);
			this->Controls->Add(this->label_reset);
			this->Controls->Add(this->label_ke);
			this->Controls->Add(this->label_ks);
			this->Controls->Add(this->label_minus);
			this->Controls->Add(this->label_mod);
			this->Controls->Add(this->label_div);
			this->Controls->Add(this->label_mul);
			this->Controls->Add(this->label_sub);
			this->Controls->Add(this->label_add);
			this->Controls->Add(this->label_dot);
			this->Controls->Add(this->label_0);
			this->Controls->Add(this->label_9);
			this->Controls->Add(this->label_8);
			this->Controls->Add(this->label_7);
			this->Controls->Add(this->label_6);
			this->Controls->Add(this->label_5);
			this->Controls->Add(this->label_4);
			this->Controls->Add(this->label_3);
			this->Controls->Add(this->label_2);
			this->Controls->Add(this->label_1);
			this->Controls->Add(this->eq_label);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Calc^ c;
		List<String^>^ oplist;
		//現在のopを格納する
		String^ n_op;
		//カッコ内の途中式を保存しておくためのリスト
		List<List<double>^>^ ksList;
		List<List<String^>^>^ ksList2;
		//カッコ閉じ処理を知らせるフラグ
		bool ke;

		ref struct w_list {
			List<double>^ val;
			List<String^>^ op;
		};

		List<w_list^>^ w_l;
		double pi = 3.14159;
		double e_ = 2.71828;

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Text = "0";
		label1->Text = "0";
	}
	private:void number(double n) {
		if (label1->Text == "0" || oplist->Contains(label1->Text)) {
			label1->Text = n.ToString();
		}
		else {
			label1->Text += n;
		}
	}
	private:void opset(String^ op) {
		if(input_check()==false)
			return;
		double num = double::Parse(label1->Text);
		//乗除の優先
		if (n_op == "*" || n_op == "/" || n_op == "%") {
			List<double>^ t_list = gcnew List<double>;
				t_list=c->get_val_list();
			double res;
			//二項演算の場合分け
			if (t_list->Count == 1) {
				res = c->t_calc(t_list[0], n_op, num);
			}
			else {
				res = c->t_calc(t_list[t_list->Count - 1], n_op, num);
			}
			c->del_val_data();
			c->del_op_data();
			c->set_val(res);
		}
		else {
			c->set_val(num);
		}

		//表示の変更
			label1->Text = op;

			
		if (ke == true) {
			textBox1->Text +=  op;
			ke = false;
		}
		else if (textBox1->Text == "0") {
			textBox1->Text = num.ToString()+op;
		}
		else {
			textBox1->Text += num.ToString() + op;
		}

		if (op == "=") {
			label1->Text = c->total_calc().ToString();
		}else if (op == ")") {
			//ラベルに計算結果を表示
			label1->Text = c->total_calc().ToString();
			//textBox1の表示を変更
			n_op = op;
		}
		else {
			//データの変更
			c->set_op(op);
			n_op = op;
		}
	}
	private: System::Void eq_label_Click(System::Object^  sender, System::EventArgs^  e) {
		opset("=");
	}
private: System::Void label_1_Click(System::Object^  sender, System::EventArgs^  e) {
	number(1);
}
private: System::Void label_2_Click(System::Object^  sender, System::EventArgs^  e) {
	number(2);
}
private: System::Void label_3_Click(System::Object^  sender, System::EventArgs^  e) {
	number(3);
}
private: System::Void label_4_Click(System::Object^  sender, System::EventArgs^  e) {
	number(4);
}
private: System::Void label_5_Click(System::Object^  sender, System::EventArgs^  e) {
	number(5);
}
private: System::Void label_6_Click(System::Object^  sender, System::EventArgs^  e) {
	number(6);
}
private: System::Void label_7_Click(System::Object^  sender, System::EventArgs^  e) {
	number(7);
}
private: System::Void label_8_Click(System::Object^  sender, System::EventArgs^  e) {
	number(8);
}

private: System::Void label_9_Click(System::Object^  sender, System::EventArgs^  e) {
	number(9);
}
private: System::Void label_0_Click(System::Object^  sender, System::EventArgs^  e) {
	number(0);
}
private: System::Void label_dot_Click(System::Object^  sender, System::EventArgs^  e) {
	label1->Text += ".";
}
private: System::Void label_add_Click(System::Object^  sender, System::EventArgs^  e) {
	opset("+");
}
private: System::Void label_sub_Click(System::Object^  sender, System::EventArgs^  e) {
	opset("-");
}
private: System::Void label_mul_Click(System::Object^  sender, System::EventArgs^  e) {
	opset("*");
}
private: System::Void label_div_Click(System::Object^  sender, System::EventArgs^  e) {
	opset("/");
}
private: System::Void label_mod_Click(System::Object^  sender, System::EventArgs^  e) {
	opset("%");
}

private: System::Void label_minus_Click(System::Object^  sender, System::EventArgs^  e) {
	double m = double::Parse(label1->Text);
	if (m > 0) {
		label1->Text=label1->Text->Insert(0, "-");
	}
	else if (m < 0) {
		label1->Text = abs(m).ToString();
	}
}
private: System::Void label_ks_Click(System::Object^  sender, System::EventArgs^  e) {
	//まず、現在のval,opのリストを取得する
	ksList->Add(c->get_val_list());
	ksList2->Add(c->get_op_list());

	//表示
	if(textBox1->Text=="0"){
		textBox1->Text = "(";
	}
	else {
		textBox1->Text += "(";
	}

	//n_opのリセット
	n_op = "";

	//新しいインスタンスを生成
	c = gcnew Calc();

}
		 
private: System::Void label_ke_Click(System::Object^  sender, System::EventArgs^  e) {
	//カッコが閉じたときの処理
	opset(")");
	if (input_check() == false)
		return;
	ke = true;
	//カッコ内の計算結果
	double k_ans = double::Parse(label1->Text);
	//リストのリセット
	c->delete_all();
	//リストの復元
	c->val_copy(ksList[ksList->Count - 1]);
	c->op_copy(ksList2[ksList->Count - 1]);
		//oplistの項目が1つ以上あれば、n_opを更新
		if (c->get_op_list()->Count > 0) {
			n_op = c->get_op_list()[c->get_op_list()->Count - 1];
		}
		else {
			//カッコから始まる演算の場合、n_opをリセットしておく
			n_op = "";
		}
		//コピー元データの削除
		ksList->RemoveAt(ksList->Count - 1);
		ksList2->RemoveAt(ksList2->Count - 1);

}
private: System::Void label_reset_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text = "0";
	label1->Text = "0";
	
	c = gcnew Calc;

	n_op = "";
}
private: System::Void label_back_Click(System::Object^  sender, System::EventArgs^  e) {
	label1->Text = label1->Text->Remove(label1->Text->Length - 1);
}
private: System::Void label_sin_Click(System::Object^  sender, System::EventArgs^  e) {
	label1->Text = sin(double::Parse(label1->Text)).ToString();
}
private: System::Void label_cos_Click(System::Object^  sender, System::EventArgs^  e) {
	label1->Text = cos(double::Parse(label1->Text)).ToString();
}
private: System::Void label_tan_Click(System::Object^  sender, System::EventArgs^  e) {
	label1->Text = tan(double::Parse(label1->Text)).ToString();
}
private: System::Void label_route_Click(System::Object^  sender, System::EventArgs^  e) {
	label1->Text = sqrt(double::Parse(label1->Text)).ToString();
}
private: System::Void label_log_Click(System::Object^  sender, System::EventArgs^  e) {
	label1->Text = log(double::Parse(label1->Text)).ToString();
}
private: System::Void label_10_Click(System::Object^  sender, System::EventArgs^  e) {
	label1->Text = log10(double::Parse(label1->Text)).ToString();
}
private: System::Void label_xx_Click(System::Object^  sender, System::EventArgs^  e) {
	double r = double::Parse(label1->Text);
	r *= r;
	label1->Text = r.ToString();
}
private: System::Void label_gx_Click(System::Object^  sender, System::EventArgs^  e) {
	double r = double::Parse(label1->Text);
	r = 1 / r;
	label1->Text = r.ToString();
}
private: System::Void label_pi_Click(System::Object^  sender, System::EventArgs^  e) {
	label1->Text = pi.ToString();
}
private: System::Void label_e_Click(System::Object^  sender, System::EventArgs^  e) {
	label1->Text = e_.ToString();
}
private: System::Void list_add_Click(System::Object^  sender, System::EventArgs^  e) {
	memoryBox1->Items->Add(label1->Text);
}
private: System::Void list_del_Click(System::Object^  sender, System::EventArgs^  e) {
	if (memoryBox1->SelectedItems->Count == 0) {
		memoryBox1->Items->Clear();
	}
	else {
		memoryBox1->Items->Remove(memoryBox1->SelectedItem);
	}
}
private: System::Void label_disp_Click(System::Object^  sender, System::EventArgs^  e) {
	chart1->Titles->Clear();
	chart1->ChartAreas->Clear();
	chart1->Series->Clear();

	ChartArea^ area = gcnew ChartArea();
	chart1->ChartAreas->Add(area);

	

	auto series = gcnew Series();

	series->BorderWidth = 2;
	series->MarkerStyle = MarkerStyle::Circle;
	series->MarkerSize = 12;

	if (comboBox1->Text == "" || comboBox1->Text == "折れ線グラフ") {
		series->ChartType = SeriesChartType::Line;
	}
	else if (comboBox1->Text == "棒グラフ") {
		series->ChartType = SeriesChartType::Column;
	}
	else if (comboBox1->Text == "円グラフ") {
		series->ChartType = SeriesChartType::Pie;
	}

	for (int i = 0; i < memoryBox1->Items->Count; i++) {
		series->Points->Add(gcnew DataPoint(i,memoryBox1->Items[i]->ToString()));
	}
	chart1->Series->Add(series);
}
private: System::Void memoryBox1_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
	label1->Text = memoryBox1->SelectedItem->ToString();
}
		 private:bool input_check() {
			 //もし、ラベルとテキストボックスが0表示なら初期画面とみなす
			 double res;
			 if ((label1->Text == "0"&&textBox1->Text == "0" || !double::TryParse(label1->Text, res))) {
				 //初期画面の処理
				 MessageBox::Show("無効な入力です");
				 return false;
			 }
			 else {
				 return true;
			 }
		 }
};
}
