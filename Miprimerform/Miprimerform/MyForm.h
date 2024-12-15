#pragma once

namespace Miprimerform {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ nomo;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ salida;
	private: System::Windows::Forms::Label^ etiquetaMail;
	private: System::Windows::Forms::TextBox^ retposto;




	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->nomo = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->salida = (gcnew System::Windows::Forms::Label());
			this->etiquetaMail = (gcnew System::Windows::Forms::Label());
			this->retposto = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// nomo
			// 
			this->nomo->Location = System::Drawing::Point(44, 66);
			this->nomo->Name = L"nomo";
			this->nomo->Size = System::Drawing::Size(168, 22);
			this->nomo->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(41, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(161, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Skribu vian plenan nomon";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(44, 212);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Sendi";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// salida
			// 
			this->salida->AutoSize = true;
			this->salida->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->salida->Location = System::Drawing::Point(163, 101);
			this->salida->Name = L"salida";
			this->salida->Size = System::Drawing::Size(0, 31);
			this->salida->TabIndex = 3;
			// 
			// etiquetaMail
			// 
			this->etiquetaMail->AutoSize = true;
			this->etiquetaMail->Location = System::Drawing::Point(41, 121);
			this->etiquetaMail->Name = L"etiquetaMail";
			this->etiquetaMail->Size = System::Drawing::Size(125, 16);
			this->etiquetaMail->TabIndex = 5;
			this->etiquetaMail->Text = L"Skribu vian retpoŝto";
			// 
			// retposto
			// 
			this->retposto->Location = System::Drawing::Point(44, 149);
			this->retposto->Name = L"retposto";
			this->retposto->Size = System::Drawing::Size(168, 22);
			this->retposto->TabIndex = 4;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(799, 423);
			this->Controls->Add(this->etiquetaMail);
			this->Controls->Add(this->retposto);
			this->Controls->Add(this->salida);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->nomo);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		salida->Text = ("Bonvenon " + nomo->Text + "\n" + "Via retposto estas " + retposto->Text);
		nomo->Visible = false;
		etiquetaMail->Visible = false;
		retposto->Visible = false;
		button1->Visible = false;
		label1->Visible = false;
		
	
	}
	
};
}
