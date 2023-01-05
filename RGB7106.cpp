#include <iostream>
using namespace std;

int main()
{
  const int size = 4;
  int m = 1;
  int numbers[size];

  for (int i = 0; i < size; i++)
  {
    cin >> numbers[i];
  }

  for (int i = 0; i < size; i++)
  {
    if (numbers[i] < 5)
    {
      m *= numbers[i];
    }
  }

  cout << m << endl;
  return 0;
}

// Өгөгдсөн 4 тооны 5-аас бага тоонуудын үржвэрийг ол. 5-аас бага тоо ядаж 1 байгаа.
// Input

// Нэг мөрөнд Int төрлийн 4 тоо зайгаар тусгаарлагдан өгөгдөнө.
// Output

// Үржвэр
