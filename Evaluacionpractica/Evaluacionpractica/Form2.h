#pragma once

namespace Evaluacionpractica {

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
#pragma once

			namespace LoginApp {

				using namespace System;
				using namespace System::Windows::Forms;

				public ref class Form2 : public Form {
				public:
					Form2(String^ email) {
						InitializeComponent();
						lblEmail->Text = "Bienvenido: " + email;
					}

				private:
					Label^ lblEmail;

					void InitializeComponent() {
						this->lblEmail = gcnew Label();
						this->Controls->Add(this->lblEmail);
					}
				};
			}
