#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if ( a + b > c && b + c > a && a + c > b ) cout << "YES";
  else cout << "NO";
  return 0;
}

// Өгөгдсөн 3 тоогоор талаа хийсэн гурвалжинг байгуулж болох бол YES үгүй бол NO гэж хэвлэ.
//
// Input
// Нэг мөрөнд 3 натурал тоо зайгаар тусгаарлагдан өгөгдөнө.
//
// Output
// Гурвалжин байгуулж болох бол YES үгүй бол NO.
