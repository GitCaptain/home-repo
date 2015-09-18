//������������ ������ �1
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
		cout << "�������� �������� ���� " << typeNames[i] << " o� " << typeSizesMin[i] << " �� " << typeSizesMax[i] << endl;



	cout << sep;

	///////A3


	// ������ ����������� ��������
	const int G = 9999999;
	//����� ����������
	int n = 12;
	char c = 'w';
	bool isON = true;




	unsigned short num;
	char ch;
	long l_n;

	num = 1;
	ch = 'w';
	l_n = 3;

	double res = ++num - (ch + l_n * 3.5); //������� ����������� �������� � �������: ch ������������� � int(��� ��������), ����� ������������ c l_n * 3.5 - ��� double, ����� num ���������������� � �� ���� ���������� ��������� � �������.
	cout << "��������� ���������: " << res << endl;

	cout << "\nsizeof int: " << sizeof(int) << endl;
	cout << "sizeof char: " << sizeof(char) << endl;
	cout << "sizeof bool: " << sizeof(bool) << endl;
	cout << "sizeof unsigned short: " << sizeof(unsigned short) << endl;
	cout << "sizeof long: " << sizeof(long) << endl;

	cout << sep;

	//////// ����� �
	bool a = true, b = false;

    // ������� ������� ����������?
	cout << "a && b = " << (a && b) << endl;
	cout << "a || b = " << (a || b) << endl;

	// ����� ��������� �������� ���������� ���������� ��������� � ������� �������� ����������, ��������:
	cout << "b + 1 = " << ++b << endl;

    cout << sep;

    ////// B2
    cout << "����������� ������������ �������� ��� ������� �����: \n";
    for(int i = 0; i < 6; ++i){
        LD sz = pow(2, 8 * sizeOfTypes[i] - 1 ) - 1;
        cout << typeNames[i] << ": " << sz << (sz == typeSizesMax[i] ? "" : " ��" ) <<" ������� � Limits.h\n";
    }

    cout << sep;

    ///// B3
    cout << "����������� ������������ �������� ��� ������� ����� �� �������������� unsigned: \n";
    for(int i = 0; i < 6; ++i){
        LD sz = pow(2, 8 * sizeOfTypes[i]) - 1; //������ ����
        if(i != 3 ) cout << "unsigned ";
        cout << typeNames[i] << ": " << sz << endl;
    }
    cout << sep;

	return 0;
}
