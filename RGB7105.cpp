#include <iostream>
#include <map>
using namespace std;

// Өгөгдсөн 4 тооны 80-аас их тоонуудын нийлбэрийг ол.

// Input
// Нэг мөрөнд Int төрлийн 4 тоо зайгаар тусгаарлагдан өгөгдөнө.
//
// Output
// Нийлбэр.

int main() {
  int a[100], i, sum=0;
  cin >> a;
  for (i = 1, i < 5; i++) {
    if ( a[i] >= 80) {
      sum += a[i];
    };
  };
  cout << sum << endl;
  return 0;
};


