#pragma once
#include <iostream>
#include <fstream>
#include "msclr/marshal_cppstd.h"
#include "MyForm1.h"
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
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Button^ button1;
protected:




private:
	/// <summary>
	/// Variable del diseñador necesaria.
	/// </summary>
	System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
	/// <summary>
	/// Método necesario para admitir el Diseñador. No se puede modificar
	/// el contenido de este método con el editor de código.
	/// </summary>
	void InitializeComponent(void)
	{
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->textBox1 = (gcnew System::Windows::Forms::TextBox());
		this->button1 = (gcnew System::Windows::Forms::Button());
		this->SuspendLayout();
		// 
		// label1
		// 
		this->label1->AutoSize = true;
		this->label1->Location = System::Drawing::Point(71, 62);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(191, 16);
		this->label1->TabIndex = 0;
		this->label1->Text = L"Rellene el texto para el archivo";
		// 
		// textBox1
		// 
		this->textBox1->Location = System::Drawing::Point(74, 92);
		this->textBox1->Name = L"textBox1";
		this->textBox1->Size = System::Drawing::Size(245, 22);
		this->textBox1->TabIndex = 1;
		// 
		// button1
		// 
		this->button1->Location = System::Drawing::Point(74, 147);
		this->button1->Name = L"button1";
		this->button1->Size = System::Drawing::Size(245, 23);
		this->button1->TabIndex = 2;
		this->button1->Text = L"Enviar";
		this->button1->UseVisualStyleBackColor = true;
		this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
		// 
		// MyForm
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(990, 468);
		this->Controls->Add(this->button1);
		this->Controls->Add(this->textBox1);
		this->Controls->Add(this->label1);
		this->Name = L"MyForm";
		this->Text = L"MyForm";
		this->ResumeLayout(false);
		this->PerformLayout();

	}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// Evento click del botón del elemento padre.
	MyForm1^ Inicio = gcnew MyForm1();
	this->Visible = false;
	Inicio->ShowDialog();
	this->Visible = true; //en cuanto se oculta el otro.


	// std::ofstream MyFile("filename.txt", std::ios_base::app);
	/* std::string textUsuarioenSTD = msclr::interop::marshal_as<std::string>(textBox1->Text);
	MyFile << textUsuarioenSTD;
	MyFile.close();
	String^ filePath = "filename.txt";

	try {
		// Crear un objeto StreamReader para leer el archivo
		StreamReader^ MyFile = gcnew StreamReader(filePath);

		String^ line;  // Variable para almacenar cada línea del archivo

		// Leer el archivo línea por línea
		while ((line = MyFile->ReadLine()) != nullptr) {
			// Imprimir la línea en la consola
			Console::WriteLine(line);
		}
		// Cerrar el archivo
		MyFile->Close();
	}
	catch (Exception^ e) {
		Console::WriteLine("Error: " + e->Message);
	} 
	*/
}
};
	
}
