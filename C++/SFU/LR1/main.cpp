//Лабораторная работа №1
#include <iostream>
#include <limits.h>
#include <float.h>
#include <string>
#include <cmath>
#define LL long long
#define LD long double
using namespace std;

string typeNames[] = { "int", "char", "wchar_t", "bool", "float", "double" };

double typeSizesMin[] = { INT_MIN, CHAR_MIN, WCHAR_MIN, 0, FLT_MIN, DBL_MIN };
double typeSizesMax[] = { INT_MAX, CHAR_MAX, WCHAR_MAX, 1, FLT_MAX, DBL_MAX };
int sizeOfTypes[]     = { sizeof(int), sizeof(char), sizeof(wchar_t), sizeof(bool), sizeof(float), sizeof(double) };
string sep = "\n----------------------------------------------------------------\n";

int main() {

	setlocale(LC_ALL, "rus");
	for (int i = 0; i < 6; ++i)
		cout << "Диапазон значений типа " << typeNames[i] << " oт " << typeSizesMin[i] << " до " << typeSizesMax[i] << endl;



	cout << sep;

	///////A3


	// Всегда константная величина
	const int G = 9999999;
	//Могут изменяться
	int n = 12;
	char c = 'w';
	bool isON = true;




	unsigned short num;
	char ch;
	long l_n;

	num = 1;
	ch = 'w';
	l_n = 3;

	double res = ++num - (ch + l_n * 3.5); //сначала выполняться действия в скобках: ch преобразуется в int(код элемента), затем складывается c l_n * 3.5 - уже double, после num инкрементируется и из него вычитается выражение в скобках.
	cout << "Результат выражения: " << res << endl;

	cout << "\nsizeof int: " << sizeof(int) << endl;
	cout << "sizeof char: " << sizeof(char) << endl;
	cout << "sizeof bool: " << sizeof(bool) << endl;
	cout << "sizeof unsigned short: " << sizeof(unsigned short) << endl;
	cout << "sizeof long: " << sizeof(long) << endl;

	cout << sep;

	//////// Часть В
	bool a = true, b = false;

    // вывести таблицу истинности?
	cout << "a && b = " << (a && b) << endl;
	cout << "a || b = " << (a || b) << endl;

	// Можно изменение значений логических переменных выполнять с помощью операции инкремента, например:
	cout << "b + 1 = " << ++b << endl;

    cout << sep;

    ////// B2
    cout << "Вычисленные максимальные значения для базовых типов: \n";
    for(int i = 0; i < 6; ++i){
        LD sz = pow(2, 8 * sizeOfTypes[i] - 1 ) - 1;
        cout << typeNames[i] << ": " << sz << (sz == typeSizesMax[i] ? "" : " не" ) <<" сошлось с Limits.h\n";
    }

    cout << sep;

    ///// B3
    cout << "Вычисленные максимальные значения для базовых типов со спецификатором unsigned: \n";
    for(int i = 0; i < 6; ++i){
        LD sz = pow(2, 8 * sizeOfTypes[i]) - 1; //размер типа
        if(i != 3 ) cout << "unsigned ";
        cout << typeNames[i] << ": " << sz << endl;
    }
    cout << sep;

	return 0;
}
