#include <iostream>
#include <map>
using namespace std;

int main() {
  int a, b, c, d, sum;
  cin >> a >> b >> c >> d;
  if ( a > 81) {
    sum += a;
  }
  if ( b > 81) {
    sum += b;
  }
  if ( c > 81) {
    sum += c;
  }
  if ( d > 81) {
    sum += d;
  }
  cout << sum << endl;

  return 0;
};

// Өгөгдсөн 4 тооны 80-аас их тоонуудын нийлбэрийг ол.

// Input
// Нэг мөрөнд Int төрлийн 4 тоо зайгаар тусгаарлагдан өгөгдөнө.

// Output
// Нийлбэр.
