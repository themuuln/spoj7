#include <iostream>
using namespace std;

// Өгөгдсөн 4 тооны багыг ол.
//
// Input
// Нэг мөрөнд Int төрлийн 4 тоо зайгаар тусгаарлагдан өгөгдөнө.
//
// Output
// Бага тоо.

int main() {
  int a, b, c, d, m;
  cin >> a >> b >> c >> d;
  if (a < b && a < c && a < d) m = a;
  else if (b < a && b < c && b < d) m = b;
  else if (c < a && c < b && c < d) m = c;
  else if (d < a && d < b && d < c) m = d;
  cout << m << endl;
}
