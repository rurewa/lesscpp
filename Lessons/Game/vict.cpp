// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// Крестики-нолики. Пример многомерного массива
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
using namespace std;
string questions[10][5] =
    {
        {"Чему равно число Пи?", "3,14", "6,28", "3,12", "30,14"},
        {"Сколько протонов в Дубнии?", "105", "103", "285", "1"},
        {"Когда родился Шопен?", "1 марта, 1810 г.", "5 февраля, 1812 г.", "1 августа, 1962 г. ", "23 июня, 1941 г."},
        {"Как звали вуки, помощника капитана Соло?", "Чубака", "Чукча", "Дарт Вэйдер", "Его имя не известно..."},
        {"Каким залинанием Поттер, чуть не убивает Драко Малфоя в 6-ой книге принц-полукровка?", "Сектумсемпра", "Экспекто Патронум", "Вингадио Левиосо", "Экспеллиармус"},
        {"Сколько сонат написал Бетховен?", "32", "82", "12", "56"},
        {"Каким заклинанием Беллатриса Лестрэйндж свела с ума родителей Невилла Долгопупса?", "Круциатус", "Авада Кидавра", "Сектумсемпра", "Империус"},
        {"До скольки градусов по цельсию надо греть стол на 3D принтере при печати ABS?", "105-115 градусов", "40-45 градусов", "225-250 градусов", "100 градусов"},
        {"Сколько клавиш у Фортепиано?", "88", "44", "96", "60"},
        {"Какой формулой можно вычислить косинус угла A?", "cos a = прилежащий катет / гипотенузу", "cos a = прилежащий катет * гипотенузу", "cos a = протеволежащий катет / гипотенузу", "cos a = протеволежащий катет * гипотенузу"}};
// const auto COLOR_MAGENTA = "\033[35m";
const auto COLOR_RED = "\033[31m";
const auto COLOR_YELLOW = "\033[33m";
const auto COLOR_GREEN = "\033[32m";
// const auto COLOR_CYAN      = "\033[36m";
// const auto COLOR_BLUE      = "\033[34m";
// const auto COLOR_BLACK      = "\033[30m";
// const auto COLOR_WHITE     = "\033[37m";
int currentQuestionNr;
int points;
int attemps;
const string quitText = "(___)";
int questionsSequence[10];
int answersSequence[4];
int GetRandomNumber(int min, int max)
{
    // Установить генератор случайных чисел
    srand(time(NULL));
    // Получить случайное число - формула
    int num = min + rand() % (max - min + 1);
    return num;
}
void arrayShuffle(int m[], int size)
{
    srand(time(0));
    for (int i = 0; i < size; ++i)
        std::swap(m[i], m[std::rand() % size]);
}
bool reset(string startText, string quitText)
{
    cout << COLOR_GREEN << startText << '\n';
    char ch = 'y';
    cout << "y/n?" << '\n';
    cin >> ch;
    if (ch != 'y')
    {
        cout << quitText << '\n';
        return false;
    }
    else
    {
        // Перемешивание вопросов
        int questionsCount = sizeof(questions) / sizeof(*questions);
        // Сбрасываем последовательность индексов ( от 1 до size)
        for (int i = 0; i < questionsCount; i++)
            questionsSequence[i] = i;

        // Перемешиваем индексы ответов
        arrayShuffle(questionsSequence, questionsCount);
        currentQuestionNr = 0;
        attemps = 3;
        points = 0;
        return true;
    }
}
int main()
{
    system("chcp 1251");

    int userIn = 0;

    if (!reset("Приветствуем тебя! готов ли ты пройти испытание?", quitText))
        return 0;

    int questionsCount = sizeof(questions) / sizeof(*questions);

    // Последовательность индексов ответов

    while (true)
    {
        if (currentQuestionNr == questionsCount)
        {
            cout << COLOR_GREEN << "Вы прошли испытание!" << '\n';
            cout << COLOR_GREEN << "Ваши очки: " << points << '\n';
            if (!reset("Еще раз?", quitText))
            {
                return 0;
            }
        }
        if (currentQuestionNr > 0)
        {
            cout << "Следующий вопрос..." << '\n'
                 << '\n';
        }
        int currentQuestionIdx = questionsSequence[currentQuestionNr];

        // Выводим текст вопроса в консоль
        cout << COLOR_YELLOW << questions[currentQuestionIdx][0] << '\n';

        /****************** Подготавливаем перемешанный список индексов для ответов ************************/
        int answersCount = sizeof(answersSequence) / sizeof(*answersSequence);

        // Сбрасываем последовательность индексов ( от 1 до size)
        for (int i = 0; i < answersCount; i++)
            answersSequence[i] = i + 1;

        // Перемешиваем индексы ответов
        arrayShuffle(answersSequence, 4);

        /****************** Выводим список ответов ************************/

        // Выводим список ответов
        for (int i = 0; i < 4; i++)
        {
            cout << to_string(i + 1) << '.' << questions[currentQuestionIdx][answersSequence[i]] << '\n';
        }

        // Добавляем пункт выхода в список ответов
        cout << COLOR_RED << "5. Выход"
             << "\e[0m" << '\n';

        // Ожидаем ввод пользователя
        cin >> userIn;

        if (userIn < 1 || userIn > 5)
        {
            cout << COLOR_RED << "Неверно выбран вариант!" << '\n';
        }

        if (userIn == 5)
        {
            cout << quitText << '\n';
            return 0;
        }

        if (answersSequence[userIn - 1] == 1)
        {
            cout << COLOR_GREEN << "Верно!" << '\n';
            points++;
            cout << COLOR_GREEN << "Ваши очки: " << points << '\n';
            currentQuestionNr++;
        }
        else
        {
            cout << COLOR_RED << "Неправильно!"
                 << "\e[0m" << '\n';
            attemps--;
            cout << "Попыток осталось:"
                 << " " << attemps << '\n';
            if (attemps == 0)
            {
                cout << COLOR_RED << "У вас закончились попытки!..." << '\n';
                cout << "Ваши очки: " << points << '\n';
                if (!reset("Еще раз?", quitText))
                {
                    return 0;
                }
            }
            else
            {
                cout << "Ваши очки: " << points << '\n';
                cout << "Попыток осталось:"
                     << " " << attemps << '\n';
                currentQuestionNr++;
            }
        }
    }
}
// Output:
/*

*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
