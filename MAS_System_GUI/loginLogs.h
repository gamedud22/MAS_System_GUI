#pragma once
#include "alarmLog.h"
//#include "sensorLog.h"

namespace MASSystemGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for loginLogs
	/// </summary>
	public ref class loginLogs : public System::Windows::Forms::Form
	{
	public:
		loginLogs(void)
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
		~loginLogs()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:

	private: System::Windows::Forms::ToolStripMenuItem^ logsToolStripMenuItem;

	private: System::Windows::Forms::Button^ PlaceHolder;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ToolStripMenuItem^ alarmToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sensorToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ homeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sensorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ loginToolStripMenuItem;



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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->logsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->alarmToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sensorToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->PlaceHolder = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->homeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sensorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->loginToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(48, 48);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->homeToolStripMenuItem,
					this->logsToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(3, 1, 0, 1);
			this->menuStrip1->Size = System::Drawing::Size(422, 26);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// logsToolStripMenuItem
			// 
			this->logsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->alarmToolStripMenuItem,
					this->sensorToolStripMenuItem1
			});
			this->logsToolStripMenuItem->Name = L"logsToolStripMenuItem";
			this->logsToolStripMenuItem->Size = System::Drawing::Size(54, 24);
			this->logsToolStripMenuItem->Text = L"Logs";
			// 
			// alarmToolStripMenuItem
			// 
			this->alarmToolStripMenuItem->Name = L"alarmToolStripMenuItem";
			this->alarmToolStripMenuItem->Size = System::Drawing::Size(136, 26);
			this->alarmToolStripMenuItem->Text = L"Alarm";
			this->alarmToolStripMenuItem->Click += gcnew System::EventHandler(this, &loginLogs::alarmToolStripMenuItem_Click);
			// 
			// sensorToolStripMenuItem1
			// 
			this->sensorToolStripMenuItem1->Name = L"sensorToolStripMenuItem1";
			this->sensorToolStripMenuItem1->Size = System::Drawing::Size(136, 26);
			this->sensorToolStripMenuItem1->Text = L"Sensor";
			this->sensorToolStripMenuItem1->Click += gcnew System::EventHandler(this, &loginLogs::sensorToolStripMenuItem1_Click);
			// 
			// PlaceHolder
			// 
			this->PlaceHolder->Location = System::Drawing::Point(191, 132);
			this->PlaceHolder->Margin = System::Windows::Forms::Padding(1);
			this->PlaceHolder->Name = L"PlaceHolder";
			this->PlaceHolder->Size = System::Drawing::Size(199, 88);
			this->PlaceHolder->TabIndex = 1;
			this->PlaceHolder->Text = L"button1";
			this->PlaceHolder->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(373, 36);
			this->label1->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"label1";
			// 
			// homeToolStripMenuItem
			// 
			this->homeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->sensorToolStripMenuItem,
					this->loginToolStripMenuItem
			});
			this->homeToolStripMenuItem->Name = L"homeToolStripMenuItem";
			this->homeToolStripMenuItem->Size = System::Drawing::Size(64, 24);
			this->homeToolStripMenuItem->Text = L"Home";
			// 
			// sensorToolStripMenuItem
			// 
			this->sensorToolStripMenuItem->Name = L"sensorToolStripMenuItem";
			this->sensorToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->sensorToolStripMenuItem->Text = L"Sensor";
			// 
			// loginToolStripMenuItem
			// 
			this->loginToolStripMenuItem->Name = L"loginToolStripMenuItem";
			this->loginToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->loginToolStripMenuItem->Text = L"Login";
			// 
			// loginLogs
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(422, 276);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->PlaceHolder);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(1);
			this->Name = L"loginLogs";
			this->Text = L"loginLogs";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void alarmToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		alarmLog alarmLogForm;
		this->Hide();
		alarmLogForm.ShowDialog();
		this->Close();
	}
private: System::Void sensorToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		//sensorForm sensorFormForm;
		//this->Hide();
		//sensorFormForm.ShowDialog();
		//this->Close();
	}
};
}
