#include <iostream>
using namespace std;

int main()
{
  int a;
  cin >> a;
  if (a <= 12 && a >= 1)
  {
    if (a >= 2 && a <= 4)
    {
      cout << "Spring" << endl;
    }
    else if (a >= 5 && a <= 7)
    {
      cout << "Summer" << endl;
    }
    else if (a >= 8 && a <= 10)
    {
      cout << "Autumn" << endl;
    }
    else if (a == 11 || a == 12 || a == 1)
    {
      cout << "Winter" << endl;
    }
  }
  return 0;
}

// Өгөгдсөн сар аль улиралд хамаарах вэ. Улирлыг англиар бичихдээ эхний үсгийг томоор бичнэ үү.

// 2-р сарыг хаварт тооцно уу.

// Input
// Натурал тоо. 1<=n<=12.

// Output
// Улирлын нэр англиар.
