// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Пример, когда унарный оператор sizeof вычисляет и
// возвращает размер типа данных в байтах
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// int - 2'147'483'647;

int main() {
    cout << std::setprecision(36); // задаем точность в 36 цифр
    cout << "Type\t\t" << "Size\n";
    cout << "bool:\t\t" << sizeof(bool) << " bytes" << endl;
    cout << "char:\t\t" << sizeof(char) << " bytes, from " << pow(-2, (sizeof(char) * 8) - 1) + 1 << " and to " << pow(2, (sizeof(char) * 8) - 1) - 1 << " values" << endl;
    cout << "char16_t:\t" << sizeof(char16_t) << " bytes, from " << pow(-2, (sizeof(char16_t) * 8) - 1) << " and to " << pow(2, (sizeof(char16_t) * 8) - 1) - 1 << " values" << endl;
    cout << "char32_t:\t" << sizeof(char32_t) << " bytes, from " << pow(-2, (sizeof(char32_t) * 8) - 1) - 1 << " and to " << pow(2, (sizeof(char32_t) * 8) - 1) - 1 << " values" << endl;
    cout << "short:\t\t" << sizeof(short) << " bytes, from " << pow(-2, (sizeof(short) * 8) - 1) - 1 << " and to " << pow(2, (sizeof(short) * 8) - 1) - 1 << " values" << endl;
    cout << "int:\t\t" << sizeof(int) << " bytes, from " << pow(-2, (sizeof(int) * 8) - 1) << " and to " << pow(2, (sizeof(int) * 8) - 1) - 1 << " values" << endl;
    cout << "int8_t:\t\t" << sizeof(int8_t) << " bytes, from " << pow(-2, (sizeof(int8_t) * 8) - 1) << " and to " << pow(2, (sizeof(int8_t) * 8) - 1) - 1 << " values" << endl; // Внимение! Может вычислятся как char
    cout << "uint8_t:\t" << sizeof(uint8_t) << " bytes, from " << "0" << " and to "<< 2 * (pow(2, (sizeof(uint8_t) * 8) - 1)) - 1 << " values" << endl; // Внимение! Может вычислятся как char
    cout << "int16_t:\t" << sizeof(int16_t) << " bytes, from " << pow(-2, (sizeof(int16_t) * 8) - 1) << " and to " << pow(2, (sizeof(int16_t) * 8) - 1) - 1 << " values" << endl;
    cout << "uint16_t:\t" << sizeof(uint16_t) << " bytes, from " << "0" << " and to "<< 2 * (pow(2, (sizeof(uint16_t) * 8) - 1)) - 1 << " values" << endl;
    cout << "int32_t:\t" << sizeof(int32_t) << " bytes, from " << pow(-2, (sizeof(int32_t) * 8) - 1) << " and to " << pow(2, (sizeof(int32_t) * 8) - 1) - 1 << " values" << endl;
    cout << "uint32_t:\t" << sizeof(uint32_t) << " bytes, " << "0" << " and to " << 2 * (pow(2, (sizeof(uint32_t) * 8) - 1)) - 1 << " values" << endl;
    cout << "int64_t:\t" << sizeof(int64_t) << " bytes, from " << pow(-2, (sizeof(int64_t) * 8) - 1) + 1 << " and to " << pow(2, (sizeof(int64_t) * 8) - 1) << " values" << endl;
    cout << "uint64_t:\t" << sizeof(uint64_t) << " bytes, from " << "0" << " and to " << 2 * (pow(2, (sizeof(uint64_t) * 8) - 1)) - 1  << " values" << endl;
    cout << "long:\t\t" << sizeof(long) << " bytes, from " << pow(-2, (sizeof(long) * 8) - 1) + 1 << " and to " << pow(2, (sizeof(long) * 8) - 1) - 1 << " values" << endl;
    cout << "long long:\t" << sizeof(long long) << " bytes, from " << pow(-2, (sizeof(long long) * 8) - 1) + 1 << " and to " << pow(2, (sizeof(long long) * 8) - 1) - 1 << " values" << endl;
    cout << "float:\t\t" << sizeof(float) << " bytes, from " << pow(-2, (sizeof(float) * 8) - 1) + 1 << " and to " << pow(2, (sizeof(float) * 8) - 1) - 1 << " values" << endl;
    cout << "double:\t\t" << sizeof(double) << " bytes, from " << pow(-2, (sizeof(double) * 8) - 1) + 1 << " and to " << pow(2, (sizeof(double) * 8) - 1) - 1 << " values" << endl;
    cout << "long double:\t" << sizeof(long double) << " bytes, from " << pow(-2, (sizeof(long double) * 8) - 1) + 1 << " and to " << pow(2, (sizeof(long double) * 8) - 1) - 1 << " values" << endl;
    return 0;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//