#pragma once
#include <Windows.h>
#include "PopupForm.h"
#include "Sensor.h"

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
	private: System::Windows::Forms::Label^ userNamelbl;
	private: System::Windows::Forms::Label^ passwordLbl;
	private: System::Windows::Forms::TextBox^ userNameTxtb;
	private: System::Windows::Forms::TextBox^ passwordTxtBox;
	private: System::Windows::Forms::Button^ loginBtn;
	private: System::Windows::Forms::Button^ resetBtn;







	protected:

	protected:

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
			this->userNamelbl = (gcnew System::Windows::Forms::Label());
			this->passwordLbl = (gcnew System::Windows::Forms::Label());
			this->userNameTxtb = (gcnew System::Windows::Forms::TextBox());
			this->passwordTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->loginBtn = (gcnew System::Windows::Forms::Button());
			this->resetBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// userNamelbl
			// 
			this->userNamelbl->AutoSize = true;
			this->userNamelbl->Location = System::Drawing::Point(33, 48);
			this->userNamelbl->Name = L"userNamelbl";
			this->userNamelbl->Size = System::Drawing::Size(55, 13);
			this->userNamelbl->TabIndex = 0;
			this->userNamelbl->Text = L"Username";
			// 
			// passwordLbl
			// 
			this->passwordLbl->AutoSize = true;
			this->passwordLbl->Location = System::Drawing::Point(33, 96);
			this->passwordLbl->Name = L"passwordLbl";
			this->passwordLbl->Size = System::Drawing::Size(53, 13);
			this->passwordLbl->TabIndex = 1;
			this->passwordLbl->Text = L"Password";
			// 
			// userNameTxtb
			// 
			this->userNameTxtb->Location = System::Drawing::Point(36, 64);
			this->userNameTxtb->Name = L"userNameTxtb";
			this->userNameTxtb->Size = System::Drawing::Size(100, 20);
			this->userNameTxtb->TabIndex = 2;
			// 
			// passwordTxtBox
			// 
			this->passwordTxtBox->Location = System::Drawing::Point(36, 112);
			this->passwordTxtBox->Name = L"passwordTxtBox";
			this->passwordTxtBox->Size = System::Drawing::Size(100, 20);
			this->passwordTxtBox->TabIndex = 3;
			// 
			// loginBtn
			// 
			this->loginBtn->Location = System::Drawing::Point(163, 174);
			this->loginBtn->Name = L"loginBtn";
			this->loginBtn->Size = System::Drawing::Size(109, 34);
			this->loginBtn->TabIndex = 4;
			this->loginBtn->Text = L"Login";
			this->loginBtn->UseVisualStyleBackColor = true;
			this->loginBtn->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// resetBtn
			// 
			this->resetBtn->Location = System::Drawing::Point(26, 174);
			this->resetBtn->Name = L"resetBtn";
			this->resetBtn->Size = System::Drawing::Size(96, 34);
			this->resetBtn->TabIndex = 5;
			this->resetBtn->Text = L"Reset";
			this->resetBtn->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->resetBtn);
			this->Controls->Add(this->loginBtn);
			this->Controls->Add(this->passwordTxtBox);
			this->Controls->Add(this->userNameTxtb);
			this->Controls->Add(this->passwordLbl);
			this->Controls->Add(this->userNamelbl);
			this->Name = L"MyForm";
			this->Text = L"MAS System";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//sql check function 
		Sensor sensorform;
		PopupForm popup;
		//hiding my form 
		this->Hide();
		//opening sensor form
		sensorform.ShowDialog();
		//closing myform
		this->Close();
	/*
	if (sqlcheck==true)
		{
			sensorform.ShowDialog();
		}
		else
		{
			popup.ShowDialog();
		}
	*/
	}
};
}
