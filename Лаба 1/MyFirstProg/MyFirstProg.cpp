﻿#include <iostream>
#include <math.h>

using namespace std;
// Программа деления двух чисел
int main()
{
	//double x; /* объявления переменных*/
	//double a, b;
	//cout << "\nВведите a и b:\n";
	//cin >> a; // ввод с клавиатуры значения a
	//cin >> b; // ввод с клавиатуры значения b
	//x = a / b; // вычисление значения x
	//cout << "\nx = " << x << endl; //вывод результата на экран

	// 3 point 
	double P, S, a; // объявление переменных
	cout << "Write perimeter of triangle" << endl;
	cin >> P;
	a = P / 3; // вычисление длины стороны
	S = sqrt(P * pow(P - a, 3)); // вычисление площади треугольника
	// вывод результатов на экран
	cout << "S = " << S << endl;
	cout << "P = " << P << endl;
	cout << "a = " << a << endl;

	return 0;
}