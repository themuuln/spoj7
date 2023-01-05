#include <iostream>
using namespace std;

int main()
{
  const int size = 3;
  int m = 1;
  int numbers[size];

  for (int i = 0; i < size; i++)
  {
    cin >> numbers[i];
  }

  for (int i = 0; i < size; i++)
  {
    if (numbers[i] % 2 != 0)
    {
      m *= numbers[i];
    }
  }
  cout << m << endl;
  return 0;
}

// Өгөгдсөн 3 тоон дахь сондгой тоонуудын үржвэрийг ол. Ядаж 1 сондгой тоо байгаа.
// Input

// Нэг мөрөнд Int төрлийн 3 тоо зайгаар тусгаарлагдан өгөгдөнө.
// Output

// Үржвэр