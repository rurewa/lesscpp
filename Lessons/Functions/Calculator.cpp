// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простой Калькулятор функциями
// calcFunc.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

double getUserInput();
char getMatematicalOperation();
double calculateResult(double x, char op, double y);
void printResult(double result);

int main() {
    char userSelection = 'y';
    do {
        double input1 = getUserInput();
        char op = getMatematicalOperation();
        double input2 = getUserInput();
        double result = calculateResult(input1, op, input2);
        printResult(result);
        cout << "Желаете продолжить? (y/n)" << endl;
        cin >> userSelection;
    } while (userSelection != 'n');
    return 0;
}

// Принимаем значение от пользователя
double getUserInput()
{
    while (true) { // цикл продолжается до тех пор, пока пользователь не введёт корректное значение
        cout << "Введите любое число: " << endl;
        double value = 0;
        cin >> ws >> value;
        // Проверка на предыдущие извлечения
        if (cin.fail()) {            // Если предыдущее извлечение неудачно
            cin.clear();             // Возвращаем cin в обычный режим
            cin.ignore(32767, '\n'); // и удаляем значения предыдущего ввода из входного буфера
            cout << "Что-то пошло не так. Попробуйте снова!.\n";
        }
        else {
            cin.ignore(32767, '\n'); // удаляем лишние значения
            return value;
        }
    }
}

// Принимаем знак оператора от пользователя
char getMatematicalOperation() {
    while (true) {
        cout << "Enter one of the following: +, -, *, /: ";
        char op;
        cin >> ws >> op;
        // Переменные типа char могут принимать любые символы из
        // пользовательского ввода, поэтому нам не стоит беспокоиться по поводу
        // возникновения неудачного извлечения
        cin.ignore(32767, '\n'); // удаляем лишний балласт
        // Выполняем проверку пользовательского ввода
        if (op == '+' || op == '-' || op == '*' || op == '/') {
            return op; // возвращаем обратно в caller (main)
        }
        else { // в противном случае, сообщаем пользователю что что-то пошло не так
            cout << "Oops! That input is invalid. Please try again.\n";
        }
    }
}

// Вычисляем полученные значения
double calculateResult(double x, char op, double y) {
    switch (op)
    {
    case '+':
        return x + y;
        break;
    case '-':
        return x - y;
        break;
    case '*':
        return x * y;
        break;
    case '/':
        return x / y;
        break;
    default:
        cout << "Error operator!" << endl;
        return -1;
        break;
    }
}

void printResult(double result) {
    cout << "Результат: " << result << endl;
}
// Output:
/*
Введите любое число:

4
Enter one of the following: +, -, *, /: r
Oops! That input is invalid. Please try again.
Enter one of the following: +, -, *, /: -
Введите любое число:
s
Что-то пошло не так. Попробуйте снова!.
Введите любое число:
1
Результат: 3
Желаете продолжить? (y/n)
n
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//