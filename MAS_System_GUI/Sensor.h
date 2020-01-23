#pragma once
#include <Windows.h>
#include <sqlext.h>
#include <sql.h>
#include <string>
#include <sqltypes.h>

namespace MASSystemGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Sensor
	/// </summary>
	public ref class Sensor : public System::Windows::Forms::Form
	{
	public:
		Sensor(void)
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
		~Sensor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ TempLvl;
	private: System::Windows::Forms::Label^ tempThreshLbl;

	private: System::Windows::Forms::Label^ HumityLbl;
	private: System::Windows::Forms::Label^ HumityThreshLbl;
	private: System::Windows::Forms::TextBox^ textBox1;

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->TempLvl = (gcnew System::Windows::Forms::Label());
			this->tempThreshLbl = (gcnew System::Windows::Forms::Label());
			this->HumityLbl = (gcnew System::Windows::Forms::Label());
			this->HumityThreshLbl = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// TempLvl
			// 
			this->TempLvl->AutoSize = true;
			this->TempLvl->Location = System::Drawing::Point(13, 41);
			this->TempLvl->Name = L"TempLvl";
			this->TempLvl->Size = System::Drawing::Size(87, 13);
			this->TempLvl->TabIndex = 0;
			this->TempLvl->Text = L"Temputure Level";

			// 
			// tempThreshLbl
			// 
			this->tempThreshLbl->AutoSize = true;
			this->tempThreshLbl->Location = System::Drawing::Point(169, 41);
			this->tempThreshLbl->Name = L"tempThreshLbl";
			this->tempThreshLbl->Size = System::Drawing::Size(105, 13);
			this->tempThreshLbl->TabIndex = 1;
			this->tempThreshLbl->Text = L"Temputer Threshold ";
			// 
			// HumityLbl
			// 
			this->HumityLbl->AutoSize = true;
			this->HumityLbl->Location = System::Drawing::Point(16, 179);
			this->HumityLbl->Name = L"HumityLbl";
			this->HumityLbl->Size = System::Drawing::Size(68, 13);
			this->HumityLbl->TabIndex = 2;
			this->HumityLbl->Text = L"Humity Level";

			// 
			// HumityThreshLbl
			// 
			this->HumityThreshLbl->AutoSize = true;
			this->HumityThreshLbl->Location = System::Drawing::Point(172, 179);
			this->HumityThreshLbl->Name = L"HumityThreshLbl";
			this->HumityThreshLbl->Size = System::Drawing::Size(95, 13);
			this->HumityThreshLbl->TabIndex = 3;
			this->HumityThreshLbl->Text = L"Humity Threshhold";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(32, 75);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 4;
			// 
			// Sensor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(728, 366);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->HumityThreshLbl);
			this->Controls->Add(this->HumityLbl);
			this->Controls->Add(this->tempThreshLbl);
			this->Controls->Add(this->TempLvl);
			this->Name = L"Sensor";
			this->Text = L"Sensor";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	};

