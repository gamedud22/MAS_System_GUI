#pragma once
#include <Windows.h>
#include <sqlext.h>
#include <sql.h>
#include <string>
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
			// load the sensors thresh from the sql 
			tempThreshTxt->Text = tempThreshTxt->Text + " ";


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
	private: System::Windows::Forms::TextBox^ tempLvlTxt;


	private: System::Windows::Forms::ProgressBar^ progressBar2;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::TextBox^ tempThreshTxt;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ thresholdToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ userToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ resetToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ToolStripMenuItem^ logsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sensorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ loginToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ alarmToolStripMenuItem;




	private: System::ComponentModel::IContainer^ components;

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->TempLvl = (gcnew System::Windows::Forms::Label());
			this->tempThreshLbl = (gcnew System::Windows::Forms::Label());
			this->HumityLbl = (gcnew System::Windows::Forms::Label());
			this->HumityThreshLbl = (gcnew System::Windows::Forms::Label());
			this->tempLvlTxt = (gcnew System::Windows::Forms::TextBox());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->tempThreshTxt = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->thresholdToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->userToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->logsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sensorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->loginToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->alarmToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->resetToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// TempLvl
			// 
			this->TempLvl->AutoSize = true;
			this->TempLvl->Location = System::Drawing::Point(41, 117);
			this->TempLvl->Margin = System::Windows::Forms::Padding(10, 0, 10, 0);
			this->TempLvl->Name = L"TempLvl";
			this->TempLvl->Size = System::Drawing::Size(255, 37);
			this->TempLvl->TabIndex = 0;
			this->TempLvl->Text = L"Temputure Level";
			// 
			// tempThreshLbl
			// 
			this->tempThreshLbl->AutoSize = true;
			this->tempThreshLbl->Location = System::Drawing::Point(671, 117);
			this->tempThreshLbl->Margin = System::Windows::Forms::Padding(10, 0, 10, 0);
			this->tempThreshLbl->Name = L"tempThreshLbl";
			this->tempThreshLbl->Size = System::Drawing::Size(352, 37);
			this->tempThreshLbl->TabIndex = 1;
			this->tempThreshLbl->Text = L"Temperature Threshold";
			// 
			// HumityLbl
			// 
			this->HumityLbl->AutoSize = true;
			this->HumityLbl->Location = System::Drawing::Point(41, 296);
			this->HumityLbl->Margin = System::Windows::Forms::Padding(10, 0, 10, 0);
			this->HumityLbl->Name = L"HumityLbl";
			this->HumityLbl->Size = System::Drawing::Size(199, 37);
			this->HumityLbl->TabIndex = 2;
			this->HumityLbl->Text = L"Humity Level";
			// 
			// HumityThreshLbl
			// 
			this->HumityThreshLbl->AutoSize = true;
			this->HumityThreshLbl->Location = System::Drawing::Point(671, 296);
			this->HumityThreshLbl->Margin = System::Windows::Forms::Padding(10, 0, 10, 0);
			this->HumityThreshLbl->Name = L"HumityThreshLbl";
			this->HumityThreshLbl->Size = System::Drawing::Size(268, 37);
			this->HumityThreshLbl->TabIndex = 3;
			this->HumityThreshLbl->Text = L"Humity Threshold";
			// 
			// tempLvlTxt
			// 
			this->tempLvlTxt->Location = System::Drawing::Point(336, 117);
			this->tempLvlTxt->Margin = System::Windows::Forms::Padding(10, 9, 10, 9);
			this->tempLvlTxt->Name = L"tempLvlTxt";
			this->tempLvlTxt->Size = System::Drawing::Size(308, 44);
			this->tempLvlTxt->TabIndex = 4;
			// 
			// progressBar2
			// 
			this->progressBar2->Location = System::Drawing::Point(979, 797);
			this->progressBar2->Margin = System::Windows::Forms::Padding(10, 9, 10, 9);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(317, 65);
			this->progressBar2->TabIndex = 6;
			// 
			// tempThreshTxt
			// 
			this->tempThreshTxt->Location = System::Drawing::Point(1061, 97);
			this->tempThreshTxt->Margin = System::Windows::Forms::Padding(10, 9, 10, 9);
			this->tempThreshTxt->Name = L"tempThreshTxt";
			this->tempThreshTxt->Size = System::Drawing::Size(308, 44);
			this->tempThreshTxt->TabIndex = 7;
			this->tempThreshTxt->Text = L" 60.00 F";
			this->tempThreshTxt->TextChanged += gcnew System::EventHandler(this, &Sensor::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(1061, 276);
			this->textBox1->Margin = System::Windows::Forms::Padding(10, 9, 10, 9);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(308, 44);
			this->textBox1->TabIndex = 8;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(48, 48);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->editToolStripMenuItem,
					this->logsToolStripMenuItem, this->resetToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(19, 6, 0, 6);
			this->menuStrip1->Size = System::Drawing::Size(1488, 69);
			this->menuStrip1->TabIndex = 9;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->thresholdToolStripMenuItem,
					this->userToolStripMenuItem
			});
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(108, 57);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// thresholdToolStripMenuItem
			// 
			this->thresholdToolStripMenuItem->Name = L"thresholdToolStripMenuItem";
			this->thresholdToolStripMenuItem->Size = System::Drawing::Size(375, 66);
			this->thresholdToolStripMenuItem->Text = L"Threshold";
			// 
			// userToolStripMenuItem
			// 
			this->userToolStripMenuItem->Name = L"userToolStripMenuItem";
			this->userToolStripMenuItem->Size = System::Drawing::Size(375, 66);
			this->userToolStripMenuItem->Text = L"User";
			// 
			// logsToolStripMenuItem
			// 
			this->logsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->sensorToolStripMenuItem,
					this->loginToolStripMenuItem, this->alarmToolStripMenuItem
			});
			this->logsToolStripMenuItem->Name = L"logsToolStripMenuItem";
			this->logsToolStripMenuItem->Size = System::Drawing::Size(122, 57);
			this->logsToolStripMenuItem->Text = L"Logs";
			// 
			// sensorToolStripMenuItem
			// 
			this->sensorToolStripMenuItem->Name = L"sensorToolStripMenuItem";
			this->sensorToolStripMenuItem->Size = System::Drawing::Size(538, 66);
			this->sensorToolStripMenuItem->Text = L"Sensor";
			this->sensorToolStripMenuItem->Click += gcnew System::EventHandler(this, &Sensor::sensorToolStripMenuItem_Click);
			// 
			// loginToolStripMenuItem
			// 
			this->loginToolStripMenuItem->Name = L"loginToolStripMenuItem";
			this->loginToolStripMenuItem->Size = System::Drawing::Size(538, 66);
			this->loginToolStripMenuItem->Text = L"Login";
			this->loginToolStripMenuItem->Click += gcnew System::EventHandler(this, &Sensor::loginToolStripMenuItem_Click);
			// 
			// alarmToolStripMenuItem
			// 
			this->alarmToolStripMenuItem->Name = L"alarmToolStripMenuItem";
			this->alarmToolStripMenuItem->Size = System::Drawing::Size(538, 66);
			this->alarmToolStripMenuItem->Text = L"Alarm";
			this->alarmToolStripMenuItem->Click += gcnew System::EventHandler(this, &Sensor::alarmToolStripMenuItem_Click);
			// 
			// resetToolStripMenuItem
			// 
			this->resetToolStripMenuItem->Name = L"resetToolStripMenuItem";
			this->resetToolStripMenuItem->Size = System::Drawing::Size(134, 57);
			this->resetToolStripMenuItem->Text = L"Reset";
			this->resetToolStripMenuItem->Click += gcnew System::EventHandler(this, &Sensor::resetToolStripMenuItem_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(336, 287);
			this->textBox2->Margin = System::Windows::Forms::Padding(10, 9, 10, 9);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(308, 44);
			this->textBox2->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(336, 455);
			this->textBox3->Margin = System::Windows::Forms::Padding(10, 9, 10, 9);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(308, 44);
			this->textBox3->TabIndex = 11;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(1061, 455);
			this->textBox4->Margin = System::Windows::Forms::Padding(10, 9, 10, 9);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(308, 44);
			this->textBox4->TabIndex = 12;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(51, 472);
			this->label1->Margin = System::Windows::Forms::Padding(10, 0, 10, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(199, 37);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Smoke Level";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(671, 464);
			this->label2->Margin = System::Windows::Forms::Padding(10, 0, 10, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(268, 37);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Smoke Threshold";
			this->label2->Click += gcnew System::EventHandler(this, &Sensor::label2_Click);
			// 
			// Sensor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(19, 37);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1488, 1042);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->tempThreshTxt);
			this->Controls->Add(this->progressBar2);
			this->Controls->Add(this->tempLvlTxt);
			this->Controls->Add(this->HumityThreshLbl);
			this->Controls->Add(this->HumityLbl);
			this->Controls->Add(this->tempThreshLbl);
			this->Controls->Add(this->TempLvl);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(10, 9, 10, 9);
			this->Name = L"Sensor";
			this->Text = L"Sensor";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void loginToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//open login log form
	}
	private: System::Void sensorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//open sensor log form
	}
	private: System::Void alarmToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//open alarm log form
	}
	private: System::Void resetToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//reset function
	}
	};
}