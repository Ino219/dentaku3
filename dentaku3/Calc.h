#pragma once

namespace calc_h {

	using namespace System;
	using namespace System::Collections::Generic;

	ref class Calc
	{
	private:
		List<double>^ val_list;
		List<String^>^ op_list;
	public:
		Calc();
		void set_val(double v);
		void set_op(String^ str);
		List<double>^ get_val_list();
		List<String^>^ get_op_list();
		//二項演算
		double t_calc(double a, String^ op, double b);
		//加減算の多項演算
		double total_calc();
		//各リストの最後尾データの削除
		void del_val_data();
		void del_op_data();
		void delete_all();
		void val_copy(List<double>^);
		void op_copy(List<String^>^);
	};

}
