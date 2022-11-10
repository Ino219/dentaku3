#include "MyForm.h"

using namespace dentaku3;

[STAThreadAttribute]

int main() {
	Application::Run(gcnew MyForm());
	return 0;
}