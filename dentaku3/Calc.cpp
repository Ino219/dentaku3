#include "Calc.h"
#include<cmath>

using namespace calc_h;
using namespace System::Windows::Forms;

Calc::Calc() {
	val_list = gcnew List<double>;
	op_list = gcnew List<String^>;

}
void Calc::set_val(double v) {
	val_list->Add(v);
}
void Calc::set_op(String^ str) {
	op_list->Add(str);
}
List<double>^ Calc::get_val_list() {
	return val_list;
}
List<String^>^ Calc::get_op_list() {
	return op_list;
}
double Calc::t_calc(double a, String^ op, double b) {
	if (op == "+") {
		return a + b;
	}
	else if (op == "-") {
		return a - b;
	}
	else if (op == "*") {
		return a * b;
	}
	else if (op == "/") {
		return a / b;
	}
	else if (op == "%") {
		/*int a1 = a;
		int b1 = b;
		int res = a1 % b1;
		return (double)res;*/
		return fmod(a, b);
	}
	return 0;
}
double Calc::total_calc() {
	double temp;
	//’Pƒ‚È“ñ€‰‰ŽZ‚Åop_list‚ª‘¶Ý‚µ‚È‚¢ê‡
	if (val_list->Count == 1) {
		return val_list[0];
	}
	else {
		for (int i = 0; i < val_list->Count - 1; i++) {
			temp = t_calc(val_list[i], op_list[i], val_list[i + 1]);
			val_list[i + 1] = temp;
		}
	}
	return temp;
}
void Calc::del_val_data() {
	val_list->RemoveAt(val_list->Count - 1);
}
void Calc::del_op_data() {
	op_list->RemoveAt(op_list->Count - 1);
}
void Calc::delete_all() {
	val_list->Clear();
	op_list->Clear();
}
void Calc::val_copy(List<double>^ list) {
	val_list = list;
}
void Calc::op_copy(List<String^>^ list) {
	op_list = list;
}
