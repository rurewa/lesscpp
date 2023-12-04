// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Всё о getline()
// https://stackoverflow.com/questions/10720821/im-trying-to-understand-getchar-eof
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>

int main() {
    int c = 0;
    /* while (true) {
        c = getchar(); // Получите один символ из входных данных
        if (c == EOF) {
            break;
        } // Выйдите из цикла, если мы получим EOF ("конец файла")
        putchar(c); // Поместите символ в выходные данные
    } */
    while ((c = getchar()) != EOF) {
        if (putchar(c) == EOF) {
            perror("putchar failed");
            exit(1);
        }
    }
    return 0;
}
// Output:
/*

*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//