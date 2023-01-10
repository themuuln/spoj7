#include <iostream>
using namespace std;

int main()
{
  int n, s;
  cin >> n;
  for (int i = 10; i <= n * 10; i *= 10)
  {
    s = n / i;
    cout << i << endl;
  }
  cout << s << endl;
}

// Өгөгдсөн тооны цифрүүдийн нийлбэрийг ол.

// Input
// Натурал тоо өгөгдөнө.

// Output
// Цифрүүдийн нийлбэр