#include <iostream>
#include <string>
using namespace std;

int main()
{
  int a, b, c;
  string ca, cb, cc;
  cin >> a >> b >> c;
  if (a % 2 == 0)
  {
    ca = "YES";
  }
  else
    ca = "NO";
  if (b % 2 == 0)
  {
    cb = "YES";
  }
  else
    cb = "NO";
  if (c % 3 == 0)
  {
    cc = "YES";
  }
  else
    cc = "NO";
  cout << ca << endl
       << cb << endl
       << cc << endl;
  return 0;
}

// Гурван тоо өгөгдөнө. Тоо тэгш бол YES үгүй бол NO гэж хэвлэ.

// Input
// Int төрлийн 4 тоо нэг нэг мөрөнд өгөгдөнө.

// Output
// Тоо тус бүрийг шалгаад нэг нэг мөрөнд хариуг хэвлэ.
