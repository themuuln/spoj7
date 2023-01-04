#include <iostream>
using namespace std;

// Өгөгдсөн 3 тооны ихийг ол.
//
// Input
// Нэг мөрөнд Int төрлийн 3 тоо зайгаар тусгаарлагдан өгөгдөнө.
//
// Output
// Их тоо.

int main() {
  int a, b, c, h;
  cin >> a >> b >> c;

  // h = a;
  // if (b > h) h = b;
  // else if (c > h) h = c;
  // cout << h << endl;

  if ( a > b && a > c) h = a;
  else if (b > a && b > c ) h = b;
  else if (c > a && c > b) h = c;
  cout << h << endl;
};
