#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	GridVIUBBDD::MyForm form; // nombre de tu proyecto::nombre de la clase
	Application::Run(% form);
	return 0;
}

