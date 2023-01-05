#include <iostream>
using namespace std;

int main()
{
  int a, n, z = 1;
  cin >> a >> n;
  if (a, n < 10)
  {
    for (int i = 1; i <= n; i++)
    {
      z *= a;
      cout << a << "^" << i << "=" << z << endl;
    }
  }
  return 0;
}

// a тооны n хүртэлх зэрэгтүүдийг жишээн дээрх хэлбэрээр хэвлэ.
// Input

// a, n натурал тоонууд нэг мөрөнд нэг зайгаар тусгаарлагдан өгөгдөнө. (a,n<10)
// Output

// Зэргийн хүрдийг хэвлэ.