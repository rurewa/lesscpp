// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// Сравнение строк и символов
// stringComparison.cpp
// V 2.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#include<iostream>
using namespace std;
string getStr();
bool compareStrings(string firstString, string secondString);
void prinResult(bool result);
int main(){
    puts("Введите строку или символ");
    string oneStr = getStr();
    string twoStr = getStr();
    prinResult(compareStrings(oneStr, twoStr));
    return 0;
}
string getStr(){
    string s; 
    getline(cin, s);
    return s;
    
}
bool compareStrings(string firstString, string secondString){
    return firstString == secondString;
}
void prinResult(bool result){
    cout << boolalpha << result << endl;
}
// Output
/*
Введите строку или символ
45
45
true
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-