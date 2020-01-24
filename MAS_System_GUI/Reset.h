#pragma once

namespace MASSystemGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Reset
	/// </summary>
	public ref class Reset : public System::Windows::Forms::Form
	{
	public:
		Reset(void)
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
		~Reset()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ resetLbl;
	private: System::Windows::Forms::Button^ resetBtn;
	private: System::Windows::Forms::Button^ cancelResetBtn;
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
			this->resetLbl = (gcnew System::Windows::Forms::Label());
			this->resetBtn = (gcnew System::Windows::Forms::Button());
			this->cancelResetBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// resetLbl
			// 
			this->resetLbl->AutoSize = true;
			this->resetLbl->Location = System::Drawing::Point(38, 24);
			this->resetLbl->Name = L"resetLbl";
			this->resetLbl->Size = System::Drawing::Size(177, 13);
			this->resetLbl->TabIndex = 0;
			this->resetLbl->Text = L"You would like to reset the sensors\?";
			// 
			// resetBtn
			// 
			this->resetBtn->Location = System::Drawing::Point(161, 97);
			this->resetBtn->Name = L"resetBtn";
			this->resetBtn->Size = System::Drawing::Size(75, 23);
			this->resetBtn->TabIndex = 1;
			this->resetBtn->Text = L"Reset";
			this->resetBtn->UseVisualStyleBackColor = true;
			// 
			// cancelResetBtn
			// 
			this->cancelResetBtn->Location = System::Drawing::Point(41, 97);
			this->cancelResetBtn->Name = L"cancelResetBtn";
			this->cancelResetBtn->Size = System::Drawing::Size(75, 23);
			this->cancelResetBtn->TabIndex = 2;
			this->cancelResetBtn->Text = L"Cancel";
			this->cancelResetBtn->UseVisualStyleBackColor = true;
			// 
			// Reset
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(290, 139);
			this->Controls->Add(this->cancelResetBtn);
			this->Controls->Add(this->resetBtn);
			this->Controls->Add(this->resetLbl);
			this->Name = L"Reset";
			this->Text = L"Reset";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
