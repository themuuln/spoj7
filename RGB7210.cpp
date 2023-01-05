#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  if (n <= 10 && n >= 1)
  {
    for (int i = 1; i <= 10; i++)
    {
      cout << n << "*" << i << "=" << n * i;
    }
  }
  return 0;
}

// Өгөгдсөн тооны хүрдийг дараах хэлбэрээр гарга.
// Input

// n натурал тоо өгөгдөнө. n<=10.
// Output

// n тооны хүрд нэг нэг мөрөнд хэвлэ.