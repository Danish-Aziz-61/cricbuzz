#include "MyForm1.h"
using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	CriccBuzzFinalProject::MyForm1 frm;
	Application::Run(% frm);
}
