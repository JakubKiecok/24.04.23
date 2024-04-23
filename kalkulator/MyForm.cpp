#include "MyForm.h"
using namespace kalkulator;
[STAThreadAttribute]
int main() {
	MyForm app;
	app.ShowDialog();
	return 0;
}