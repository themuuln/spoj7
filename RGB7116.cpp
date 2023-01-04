#include <iostream>
using namespace std;
int main() {
  int a;
  cin >> a;
  if ( a <= 5 && a >= 2) {
    if (a == 5) cout << "Onts";
    if (a == 4) cout << "Sain";
    if (a == 3) cout << "Dund";
    if (a == 2) cout << "Muu";
  }
  return 0;
} 

// Өгөгдсөн тоон дүнг үсгэн дүн рүү шилжүүл.

// Input
// Тоон дүн нь 2,3,4,5-ын зөвхөн аль нэгээр өгөгдөнө.

// Output
// 5 байвал "Onts", 4 байвал "Sain", 3 байвал "Dund", 2 байвал "Muu" гэж хэвлэ.
