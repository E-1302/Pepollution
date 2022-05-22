#include "MyForm.h"

using namespace System;
using namespace Windows::Forms;
using namespace Pepollution;

void main() {
	
	Application::EnableVisualStyles();
	Application::Run(gcnew Pepollution::MyForm);
}
