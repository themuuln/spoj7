#include <iostream>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a;
  b = a % 10; // 3
  c = a / 10 % 10; // 2.3
  d = a / 100; // 1.23
  cout << b + c + d << endl;
}
