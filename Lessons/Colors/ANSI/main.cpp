#include<iostream>
#include<unistd.h>
using namespace std;
int main(){
    long num1, num2, result;
    char num, wh, save = 'n';
    while (wh != 'n') {
        if (save == 'y') {
            cout << "выберите знак действия" << "\n";
            cout << "\e[1;37m\e[31m/ \e[0mделение,\e[1;37m\e[31m* \e[0mумножение,\e[1;37m\e[31m- \e[0mвычитание,\e[1;37m\e[31m+ \e[0mсложение,\e[1;37m\e[31m% \e[0mделение с остатком." << "\n";
            cout << "\e[1;37m\e[31m";
            cin >> num;
            cout << "\e[0m";
            system("clear");
            cout << "введите второе число" << "\n";
            cin >> num2;
            system("clear");
        }
        else if (save == 'n') {
            cout << "выберите знак действия" << "\n";
            cout << "\e[1;37m\e[31m/ \e[0mделение,\e[1;37m\e[31m* \e[0mумножение,\e[1;37m\e[31m- \e[0mвычитание,\e[1;37m\e[31m+ \e[0mсложение,\e[1;37m\e[31m% \e[0mделение с остатком." << "\n";
            cout << "\e[1;37m\e[31m";
            cin >> num;
            cout << "\e[0m";
            system("clear");
            cout << "введите первое число" << "\n";
            cin >> num1;
            system("clear");
            cout << "введите второе число" << "\n";
            cin >> num2;
            system("clear");
        }
        else {
            cout << "невозможно такое действие" << "\n";
        }
        
        switch (num) {
        
        case '/':
            system("clear");
            result = num1 / num2;
            num1 = result;
            cout << "\e[1;37mрезультат: \e[0m" << result << "\n";
            cout << "сохранить полученный результат? ";
            cout << "\e[1;37m\e[32my\e[0m";
            cout << "\e[1;37m/";
            cout << "\e[1;37m\e[31mn\e[0m" << "\n";
            cin >> save;
            system("clear");
            break;
            
        case '*':
            system("clear");
            result = num1 * num2;
            num1 = result;
            cout << "\e[1;37mрезультат: \e[0m"<< result << "\n";
            cout << "сохранить полученный результат? ";
            cout << "\e[1;37m\e[32my\e[0m";
            cout << "\e[1;37m/";
            cout << "\e[1;37m\e[31mn\e[0m" << "\n";
            cin >> save;
            system("clear");
            break;
            
        case '-':
            system("clear");
            result = num1 - num2;
            num1 = result;
            cout << "\e[1;37mрезультат: \e[0m" << result << "\n";
            cout << "сохранить полученный результат? ";
            cout << "\e[1;37m\e[32my\e[0m";
            cout << "\e[1;37m/";
            cout << "\e[1;37m\e[31mn\e[0m" << "\n";
            cin >> save;
            system("clear");
            break;
            
        case '+':
            system("clear");
            result = num1 + num2;
            num1 = result;
            cout << "\e[1;37mрезультат: \e[0m" << result << "\n";
            cout << "сохранить полученный результат? ";
            cout << "\e[1;37m\e[32my\e[0m";
            cout << "\e[1;37m/";
            cout << "\e[1;37m\e[31mn\e[0m" << "\n";
            cin >> save;
            system("clear");
            break;
        case '%':
            system("clear");
            result = num1 % num2;
            num1 = result;
            cout << "\e[1;37mрезультат: \e[0m"<< result << "\n";
            cout << "сохранить полученный результат? ";
            cout << "\e[1;37m\e[32my\e[0m";
            cout << "\e[1;37m/";
            cout << "\e[1;37m\e[31mn\e[0m" << "\n";
            cin >> save;
            system("clear");
            break;
                
        default: 
            cout << "не соответствует ни одному допустимому!" << "\n";
        }
        if (save != 'y') {
        cout << "хотите продолжить? ";
        cout << "\e[1;37m\e[32my\e[0m";
        cout << "\e[1;37m/";
        cout << "\e[1;37m\e[31mn\e[0m" << "\n";
        cin >> wh;
        system("clear");
        }
    }
    return 0;
}