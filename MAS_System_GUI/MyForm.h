#pragma once
#include <Windows.h>
#include <sqlext.h>
#include <sql.h>
#include <string>
#include <sqltypes.h>
#include "PopupForm.h"

namespace MASSystemGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Summary for MyForm
	/// </summary>

	/*void showSQLError(unsigned int handleType, const SQLHANDLE& handle)
	{
		SQLCHAR SQLSTATE[1024];
		SQLCHAR message[1024];
		std::string messageTemp;
		std::string SQLTEMP;
		if(SQL_SUCCESS == SQLGetDiagRec(handleType, handle, 1, SQLSTATE, NULL, message, 1024, NULL));
	
	}*/
	
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			

		}

	protected:
		PopupForm popup;
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ LoginBtn;
	private: System::Windows::Forms::TextBox^ usernameBox;
	private: System::Windows::Forms::TextBox^ passwrdBox;
	protected:



	private: System::Windows::Forms::Label^ passwordLbl;
	private: System::Windows::Forms::Label^ UsernameLbl;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ resetToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ loginToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ logsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::Label^ Title;
	private: System::Windows::Forms::Button^ ResetBtn;



	private: System::ComponentModel::IContainer^ components;



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
			this->LoginBtn = (gcnew System::Windows::Forms::Button());
			this->usernameBox = (gcnew System::Windows::Forms::TextBox());
			this->passwrdBox = (gcnew System::Windows::Forms::TextBox());
			this->passwordLbl = (gcnew System::Windows::Forms::Label());
			this->UsernameLbl = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->resetToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->loginToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->logsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Title = (gcnew System::Windows::Forms::Label());
			this->ResetBtn = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// LoginBtn
			// 
			this->LoginBtn->Location = System::Drawing::Point(59, 168);
			this->LoginBtn->Name = L"LoginBtn";
			this->LoginBtn->Size = System::Drawing::Size(101, 51);
			this->LoginBtn->TabIndex = 0;
			this->LoginBtn->Text = L"Login";
			this->LoginBtn->UseVisualStyleBackColor = true;
			this->LoginBtn->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// usernameBox
			// 
			this->usernameBox->Location = System::Drawing::Point(59, 81);
			this->usernameBox->Name = L"usernameBox";
			this->usernameBox->Size = System::Drawing::Size(100, 20);
			this->usernameBox->TabIndex = 1;
			// 
			// passwrdBox
			// 
			this->passwrdBox->Location = System::Drawing::Point(59, 126);
			this->passwrdBox->Name = L"passwrdBox";
			this->passwrdBox->Size = System::Drawing::Size(100, 20);
			this->passwrdBox->TabIndex = 2;
			// 
			// passwordLbl
			// 
			this->passwordLbl->AutoSize = true;
			this->passwordLbl->Location = System::Drawing::Point(178, 133);
			this->passwordLbl->Name = L"passwordLbl";
			this->passwordLbl->Size = System::Drawing::Size(53, 13);
			this->passwordLbl->TabIndex = 3;
			this->passwordLbl->Text = L"Password";
			// 
			// UsernameLbl
			// 
			this->UsernameLbl->AutoSize = true;
			this->UsernameLbl->Location = System::Drawing::Point(181, 84);
			this->UsernameLbl->Name = L"UsernameLbl";
			this->UsernameLbl->Size = System::Drawing::Size(55, 13);
			this->UsernameLbl->TabIndex = 4;
			this->UsernameLbl->Text = L"Username";
			this->UsernameLbl->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->menuToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(334, 24);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->resetToolStripMenuItem,
					this->loginToolStripMenuItem, this->logsToolStripMenuItem
			});
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->menuToolStripMenuItem->Text = L"Menu";
			this->menuToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::menuToolStripMenuItem_Click);
			// 
			// resetToolStripMenuItem
			// 
			this->resetToolStripMenuItem->Name = L"resetToolStripMenuItem";
			this->resetToolStripMenuItem->Size = System::Drawing::Size(104, 22);
			this->resetToolStripMenuItem->Text = L"Reset";
			// 
			// loginToolStripMenuItem
			// 
			this->loginToolStripMenuItem->Name = L"loginToolStripMenuItem";
			this->loginToolStripMenuItem->Size = System::Drawing::Size(104, 22);
			this->loginToolStripMenuItem->Text = L"Login";
			// 
			// logsToolStripMenuItem
			// 
			this->logsToolStripMenuItem->Name = L"logsToolStripMenuItem";
			this->logsToolStripMenuItem->Size = System::Drawing::Size(104, 22);
			this->logsToolStripMenuItem->Text = L"Logs";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->exitToolStripMenuItem->Text = L"Exit";
			// 
			// Title
			// 
			this->Title->AutoSize = true;
			this->Title->Location = System::Drawing::Point(195, 24);
			this->Title->Name = L"Title";
			this->Title->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Title->Size = System::Drawing::Size(127, 13);
			this->Title->TabIndex = 6;
			this->Title->Text = L"Welcome to MAS System";
			// 
			// ResetBtn
			// 
			this->ResetBtn->Location = System::Drawing::Point(181, 168);
			this->ResetBtn->Name = L"ResetBtn";
			this->ResetBtn->Size = System::Drawing::Size(101, 51);
			this->ResetBtn->TabIndex = 7;
			this->ResetBtn->Text = L"Reset";
			this->ResetBtn->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(334, 253);
			this->Controls->Add(this->ResetBtn);
			this->Controls->Add(this->Title);
			this->Controls->Add(this->UsernameLbl);
			this->Controls->Add(this->passwordLbl);
			this->Controls->Add(this->passwrdBox);
			this->Controls->Add(this->usernameBox);
			this->Controls->Add(this->LoginBtn);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void menuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}

   private: System::Void sqlFunction();
};
}

