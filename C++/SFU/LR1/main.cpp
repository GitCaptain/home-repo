#include <iostream>
#include <limits.h>
#include <float.h>
#include <string>
using namespace std;

string typeNames[] = { "int", "char", "wchar_t", "bool", "float", "double" };

int typeSizesMin[] = {INT_MIN, CHAR_MIN, WCHAR_MIN, 0, FLT_MIN, DBL_MIN }; // Неправильные константы
int typeSizesMax[] = {INT_MAX, CHAR_MAX, WCHAR_MAX, 1, FLT_MAX, DBL_MAX }; //wchar_t, float, double

int main(){
    setlocale(LC_ALL, "rus");
    for(int i = 0; i < 6; ++i)
        cout << "Диапазон значений типа " << typeNames[i] << " oт "<< typeSizesMin[i] <<" до "<< typeSizesMax[i] << endl;


    /////////////////
    //Часть А



    return 0;
}
