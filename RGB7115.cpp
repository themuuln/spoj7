#include <iostream>
using namespace std;

int main() {
  int a;
  cin >> a;
  if (a > 3 && a <= 5) cout << "Tentssen";
  else if (a <= 3 && a >= 2 ) cout << "Unasan";
  return 0;
}

// Тоон дүн 3-аас их бол тэнцсэнд тооцно. Бусад тохиолдолд унана. Өгөгдсөн тоон дүн тэнцсэн эсэхийг тогтоо.

// Input
// Тоон дүн зөвхөн 2,3,4,5 гэсэн тоонуудын аль нэгээр өгөгдөнө.

// Output
// Тэнцсэн тохиолдолд "Tentssen", эсрэг тохиолдолд "Unasan" гэж хэвлэ.
