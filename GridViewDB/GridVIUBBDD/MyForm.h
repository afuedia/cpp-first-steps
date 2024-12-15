#pragma once

namespace GridVIUBBDD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TITULO;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TEXTO;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FECHA;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID_AUTOR;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TITULO = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TEXTO = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FECHA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ID_AUTOR = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->ID, this->TITULO,
					this->TEXTO, this->FECHA, this->ID_AUTOR
			});
			this->dataGridView1->Location = System::Drawing::Point(107, 91);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(240, 150);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// ID
			// 
			this->ID->HeaderText = L"Id";
			this->ID->MinimumWidth = 6;
			this->ID->Name = L"ID";
			this->ID->Width = 125;
			// 
			// TITULO
			// 
			this->TITULO->HeaderText = L"Titulo";
			this->TITULO->MinimumWidth = 6;
			this->TITULO->Name = L"TITULO";
			this->TITULO->Width = 125;
			// 
			// TEXTO
			// 
			this->TEXTO->HeaderText = L"Texto";
			this->TEXTO->MinimumWidth = 6;
			this->TEXTO->Name = L"TEXTO";
			this->TEXTO->Width = 125;
			// 
			// FECHA
			// 
			this->FECHA->HeaderText = L"Fecha";
			this->FECHA->MinimumWidth = 6;
			this->FECHA->Name = L"FECHA";
			this->FECHA->Width = 125;
			// 
			// ID_AUTOR
			// 
			this->ID_AUTOR->HeaderText = L"Id Autor";
			this->ID_AUTOR->MinimumWidth = 6;
			this->ID_AUTOR->Name = L"ID_AUTOR";
			this->ID_AUTOR->Width = 125;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(793, 408);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		MySqlConnection^ conexion = gcnew MySqlConnection("Server=localhost;Port=3306;Database=noticias;Uid=noticias;Pwd=;");

		try
		{
			conexion->Open();
			MessageBox::Show("¡Conexión exitosa!");
			conexion->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error al conectar a la base de datos: " + ex->Message);
		}

	}
};
}
