#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Evaluacionpractica::Form1; form; // nombre de tu proyecto::nombre de la clase
	Application::Run(% form);
	return 0;
}

