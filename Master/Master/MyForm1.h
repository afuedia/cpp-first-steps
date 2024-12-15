#pragma once

#include <iostream>
#include <fstream>
#include "msclr/marshal_cppstd.h"
#include "stdafx.h"
using namespace System::IO;
namespace Master {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Text; // Para Encoding
	using namespace System::Security::Cryptography; // Para MD5

namespace Master {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelVentana2;
	private: System::Windows::Forms::TextBox^ nombre;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ password;
	private: System::Windows::Forms::Button^ button1;
	protected:

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
			this->labelVentana2 = (gcnew System::Windows::Forms::Label());
			this->nombre = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labelVentana2
			// 
			this->labelVentana2->AutoSize = true;
			this->labelVentana2->Location = System::Drawing::Point(12, 18);
			this->labelVentana2->Name = L"labelVentana2";
			this->labelVentana2->Size = System::Drawing::Size(270, 16);
			this->labelVentana2->TabIndex = 0;
			this->labelVentana2->Text = L"Introduce tu nombre de usuario y contraseña";
			// 
			// nombre
			// 
			this->nombre->Location = System::Drawing::Point(80, 104);
			this->nombre->Name = L"nombre";
			this->nombre->Size = System::Drawing::Size(100, 22);
			this->nombre->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(40, 110);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Nick";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(40, 153);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Password";
			// 
			// password
			// 
			this->password->Location = System::Drawing::Point(123, 147);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(100, 22);
			this->password->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(80, 203);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Enviar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(426, 253);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->password);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->nombre);
			this->Controls->Add(this->labelVentana2);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ GetSHA256Hash(String ^ input) {
			// Convertir la cadena en un array de bytes
			array<Byte>^ inputBytes = Encoding::UTF8->GetBytes(input);

			// Crear una instancia del objeto SHA256
			SHA256^ sha256 = SHA256::Create();

			// Generar el hash de los bytes
			array<Byte>^ hashBytes = sha256->ComputeHash(inputBytes);

			// Convertir el array de bytes a una cadena hexadecimal
			StringBuilder^ sb = gcnew StringBuilder();
			for (int i = 0; i < hashBytes->Length; i++) {
				sb->Append(hashBytes[i].ToString("X2"));
			}

			return sb->ToString();
		}


		int main(array<System::String^> ^ args) {
			String^ texto = "Este es un ejemplo";
			String^ hashMD5 = GetMD5Hash(texto);

			Console::WriteLine("Texto original: {0}", texto);
			Console::WriteLine("Hash MD5: {0}", hashMD5);

			return 0;
		}

	}
};
}
