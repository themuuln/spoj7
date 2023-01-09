#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  if (n <= 10 ^ 6)
  {
    while (n >= 10)
    {
      n = n / 10;
    }
    cout << n << endl;
  }
}

// Өгөгдсөн натурал тооны ахмад орны цифрийг ол.

// Input
// n натурал тоо өгөгдөнө. (n<=10^6).

// Output
// Ахмад орны цифр болох нэг цифр байна.