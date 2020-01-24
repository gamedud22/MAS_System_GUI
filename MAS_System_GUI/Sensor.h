#pragma once
#include <Windows.h>
#include <sqlext.h>
#include <sql.h>
#include <string>
#include <string>
#include <random>
#include <cstdlib>
#include <ctime>
#include <sqltypes.h>
#include "loginLogs.h"



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
		//these will be the threshold varaibles
		int tempThresh = 60;
		int humityThresh = 50;
		int smokeThresh= 300;
		int seconds= 0;
	public:

		Sensor(void)
		{
			
			InitializeComponent();
			void sensorcheck();
			//
			//TODO: Add the constructor code here
			// load the sensors thresh from the sql 
					smokeLvl = (rand() % 490) + 1;
					smokeLvlTxt->Text = smokeLvl.ToString() + " PPM";
					humityLvl = (rand() % 65) + 1;
					humityLvlTxt->Text = humityLvl.ToString() + " %";
					tempLvl = (rand() % 99) + 1;
					tempLvlTxt->Text = smokeLvl.ToString() + " �F";
					seconds = +1;
		

			tempThreshTxt->Text = tempThresh.ToString() + " F";
			HumityThreshTxt->Text = humityThresh.ToString() + " %";
			smokeThreshTxt->Text = smokeThresh.ToString() + " PPM";
			
		}

	protected:
		double tempLvl;
		double humityLvl;
		double smokeLvl;

		
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
	private: System::Windows::Forms::TextBox^ HumityThreshTxt;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ thresholdToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ userToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ resetToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ humityLvlTxt;

	private: System::Windows::Forms::TextBox^ smokeLvlTxt;

	private: System::Windows::Forms::TextBox^ smokeThreshTxt;
	private: System::Windows::Forms::Label^ smokeLbl;


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
			this->HumityThreshTxt = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->thresholdToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->userToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->logsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sensorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->loginToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->alarmToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->resetToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->humityLvlTxt = (gcnew System::Windows::Forms::TextBox());
			this->smokeLvlTxt = (gcnew System::Windows::Forms::TextBox());
			this->smokeThreshTxt = (gcnew System::Windows::Forms::TextBox());
			this->smokeLbl = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Activate();
			this->menuStrip1->SuspendLayout();
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
			this->tempThreshLbl->Location = System::Drawing::Point(212, 41);
			this->tempThreshLbl->Name = L"tempThreshLbl";
			this->tempThreshLbl->Size = System::Drawing::Size(117, 13);
			this->tempThreshLbl->TabIndex = 1;
			this->tempThreshLbl->Text = L"Temperature Threshold";
			// 
			// HumityLbl
			// 
			this->HumityLbl->AutoSize = true;
			this->HumityLbl->Location = System::Drawing::Point(13, 104);
			this->HumityLbl->Name = L"HumityLbl";
			this->HumityLbl->Size = System::Drawing::Size(68, 13);
			this->HumityLbl->TabIndex = 2;
			this->HumityLbl->Text = L"Humity Level";
			// 
			// HumityThreshLbl
			// 
			this->HumityThreshLbl->AutoSize = true;
			this->HumityThreshLbl->Location = System::Drawing::Point(212, 104);
			this->HumityThreshLbl->Name = L"HumityThreshLbl";
			this->HumityThreshLbl->Size = System::Drawing::Size(89, 13);
			this->HumityThreshLbl->TabIndex = 3;
			this->HumityThreshLbl->Text = L"Humity Threshold";
			// 
			// tempLvlTxt
			// 
			this->tempLvlTxt->Enabled = false;
			this->tempLvlTxt->Location = System::Drawing::Point(106, 41);
			this->tempLvlTxt->Name = L"tempLvlTxt";
			this->tempLvlTxt->Size = System::Drawing::Size(100, 20);
			this->tempLvlTxt->TabIndex = 4;
			// 
			// progressBar2
			// 
			this->progressBar2->Location = System::Drawing::Point(309, 280);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(100, 23);
			this->progressBar2->TabIndex = 6;
			// 
			// tempThreshTxt
			// 
			this->tempThreshTxt->Enabled = false;
			this->tempThreshTxt->Location = System::Drawing::Point(335, 34);
			this->tempThreshTxt->Name = L"tempThreshTxt";
			this->tempThreshTxt->ReadOnly = true;
			this->tempThreshTxt->Size = System::Drawing::Size(100, 20);
			this->tempThreshTxt->TabIndex = 7;
			this->tempThreshTxt->TextChanged += gcnew System::EventHandler(this, &Sensor::textBox2_TextChanged);
			// 
			// HumityThreshTxt
			// 
			this->HumityThreshTxt->Enabled = false;
			this->HumityThreshTxt->Location = System::Drawing::Point(335, 97);
			this->HumityThreshTxt->Name = L"HumityThreshTxt";
			this->HumityThreshTxt->ReadOnly = true;
			this->HumityThreshTxt->Size = System::Drawing::Size(100, 20);
			this->HumityThreshTxt->TabIndex = 8;
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
			this->menuStrip1->Size = System::Drawing::Size(470, 24);
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
			this->editToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// thresholdToolStripMenuItem
			// 
			this->thresholdToolStripMenuItem->Name = L"thresholdToolStripMenuItem";
			this->thresholdToolStripMenuItem->Size = System::Drawing::Size(126, 22);
			this->thresholdToolStripMenuItem->Text = L"Threshold";
			this->thresholdToolStripMenuItem->Click += gcnew System::EventHandler(this, &Sensor::thresholdToolStripMenuItem_Click);
			// 
			// userToolStripMenuItem
			// 
			this->userToolStripMenuItem->Name = L"userToolStripMenuItem";
			this->userToolStripMenuItem->Size = System::Drawing::Size(126, 22);
			this->userToolStripMenuItem->Text = L"User";
			// 
			// logsToolStripMenuItem
			// 
			this->logsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->sensorToolStripMenuItem,
					this->loginToolStripMenuItem, this->alarmToolStripMenuItem
			});
			this->logsToolStripMenuItem->Name = L"logsToolStripMenuItem";
			this->logsToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->logsToolStripMenuItem->Text = L"Logs";
			// 
			// sensorToolStripMenuItem
			// 
			this->sensorToolStripMenuItem->Name = L"sensorToolStripMenuItem";
			this->sensorToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->sensorToolStripMenuItem->Text = L"Sensor";
			this->sensorToolStripMenuItem->Click += gcnew System::EventHandler(this, &Sensor::sensorToolStripMenuItem_Click);
			// 
			// loginToolStripMenuItem
			// 
			this->loginToolStripMenuItem->Name = L"loginToolStripMenuItem";
			this->loginToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->loginToolStripMenuItem->Text = L"Login";
			this->loginToolStripMenuItem->Click += gcnew System::EventHandler(this, &Sensor::loginToolStripMenuItem_Click);
			// 
			// alarmToolStripMenuItem
			// 
			this->alarmToolStripMenuItem->Name = L"alarmToolStripMenuItem";
			this->alarmToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->alarmToolStripMenuItem->Text = L"Alarm";
			this->alarmToolStripMenuItem->Click += gcnew System::EventHandler(this, &Sensor::alarmToolStripMenuItem_Click);
			// 
			// resetToolStripMenuItem
			// 
			this->resetToolStripMenuItem->Name = L"resetToolStripMenuItem";
			this->resetToolStripMenuItem->Size = System::Drawing::Size(47, 20);
			this->resetToolStripMenuItem->Text = L"Reset";
			this->resetToolStripMenuItem->Click += gcnew System::EventHandler(this, &Sensor::resetToolStripMenuItem_Click);
			// 
			// humityLvlTxt
			// 
			this->humityLvlTxt->Enabled = false;
			this->humityLvlTxt->Location = System::Drawing::Point(106, 101);
			this->humityLvlTxt->Name = L"humityLvlTxt";
			this->humityLvlTxt->Size = System::Drawing::Size(100, 20);
			this->humityLvlTxt->TabIndex = 10;
			// 
			// smokeLvlTxt
			// 
			this->smokeLvlTxt->Enabled = false;
			this->smokeLvlTxt->Location = System::Drawing::Point(106, 160);
			this->smokeLvlTxt->Name = L"smokeLvlTxt";
			this->smokeLvlTxt->Size = System::Drawing::Size(100, 20);
			this->smokeLvlTxt->TabIndex = 11;
			// 
			// smokeThreshTxt
			// 
			this->smokeThreshTxt->Enabled = false;
			this->smokeThreshTxt->Location = System::Drawing::Point(335, 160);
			this->smokeThreshTxt->Name = L"smokeThreshTxt";
			this->smokeThreshTxt->ReadOnly = true;
			this->smokeThreshTxt->Size = System::Drawing::Size(100, 20);
			this->smokeThreshTxt->TabIndex = 12;
			// 
			// smokeLbl
			// 
			this->smokeLbl->AutoSize = true;
			this->smokeLbl->Location = System::Drawing::Point(16, 166);
			this->smokeLbl->Name = L"smokeLbl";
			this->smokeLbl->Size = System::Drawing::Size(69, 13);
			this->smokeLbl->TabIndex = 13;
			this->smokeLbl->Text = L"Smoke Level";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(212, 163);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 13);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Smoke Threshold";
			this->label2->Click += gcnew System::EventHandler(this, &Sensor::label2_Click);
			// 
			// Sensor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(470, 366);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->smokeLbl);
			this->Controls->Add(this->smokeThreshTxt);
			this->Controls->Add(this->smokeLvlTxt);
			this->Controls->Add(this->humityLvlTxt);
			this->Controls->Add(this->HumityThreshTxt);
			this->Controls->Add(this->tempThreshTxt);
			this->Controls->Add(this->progressBar2);
			this->Controls->Add(this->tempLvlTxt);
			this->Controls->Add(this->HumityThreshLbl);
			this->Controls->Add(this->HumityLbl);
			this->Controls->Add(this->tempThreshLbl);
			this->Controls->Add(this->TempLvl);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MainMenuStrip = this->menuStrip1;
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
		loginLogs loginLogsForm;
		this->Hide();
		loginLogsForm.ShowDialog();
		this->Close();
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
	private: System::Void thresholdToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void Sensor_Activated(System::Object^ sender, System::EventArgs^ e)
	{
		
	 }

};
}