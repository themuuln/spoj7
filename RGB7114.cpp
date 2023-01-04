#include <iostream>
using namespace std;

int main() {
  int a, b, c, ca, cb, cc;
  cin >> a >> b >> c;
  if (a % 3 == 0) {
    ca = "YES";
  } else if ( a % 3 != 0) ca = "NO";
  
  if (b % 3 == 0) {
    cb = "YES";
  } else if ( b % 3 != 0) cb = "NO";

  if (c % 3 == 0) {
    cc = "YES";
  } else if ( c % 3 != 0) cc = "NO";

  cout << ca << cb << cc << endl;
  return 1;
}

// Гурван тоо өгөгдөнө. Тоо тэгш бол YES үгүй бол NO гэж хэвлэ.

// Input
// Int төрлийн 4 тоо нэг нэг мөрөнд өгөгдөнө.

// Output
// Тоо тус бүрийг шалгаад нэг нэг мөрөнд хариуг хэвлэ.
