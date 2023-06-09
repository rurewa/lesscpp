// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// Пример базовых операций с фиксированными одномерными массивами и перечислениями
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
#include <iostream>
using namespace std;

enum StudentNamesJust { PASHA, ALEXEY, IVAN, ALEX, TIMON, MAX_SUDENTS };
// Enum class
namespace StudentNames {
enum StudentNames { PASHA, ALEXEY, IVAN, ALEX, TIMON, MAX_SUDENTS };
};

int main() {
  //int testScores[MAX_SUDENTS]; // В качестве размера массива используется
                               // последний элемент перечисления!
  //testScores[TIMON] = 12;
  //cout << testScores[TIMON] << endl;
  // Enum class
  int testScores[StudentNames::MAX_SUDENTS]; // В качестве размера массива
                                             // используется последний элемент
                                             // перечисления!
  testScores[StudentNames::TIMON] = 12;
  cout << testScores[4] << endl;

  return 0;
}

// Output
/*
12
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //