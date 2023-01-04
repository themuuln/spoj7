#include <iostream>
using namespace std;

int main() {
  int a;
  cin >> a;
  if ( a <= 100 ) {
    if ( a >= 90 ) cout << "A";
    else if ( a >= 80 ) cout << "B";
    else if ( a >= 70 ) cout << "C";
    else if ( a >= 60 ) cout << "D";
    else if ( a <= 59) cout << "F";
  }
}

// Өгөгдсөн тоон үнэлгээг үсгэн үнэлгээнд шилжүүл.

// Input
// Тоон үнэлгээ 100-аас ихгүй эерэг бүхэл тоогоор өгөгдөнө.

// Output
// Тоон үнэлгээ 89-өөс их бол А, 79-өөс их В, 69-өөс их бол С, 59-өөс их бол D бусад тохиолдолд F үсгэн дүнг хэвлэ.
