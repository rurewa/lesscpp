// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Программа-шифровальщик по ключу Цезаря
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
  string S, t;
  int k; // Величина сдвига
  cout << "Введите ключ\n"; // k = 3
  cin >> k;
  cout << "Введите сообщение\n";
  cin >> S;
  for (int i = 0; i < S.size(); ++i) {
    t += (S[i] - 'a' + k) % 127 + 'a';
  }
  cout << "\n\nЗашифрованное сообщение:  " << t << '\n';
  return 0;
}
// Output:
/*
Введите ключ
3
Введите сообщение
Hello


Зашифрованное сообщение:  Khoor
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//