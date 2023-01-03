#include <iostream>
using namespace std;

int main() {
  int m, y, cm;
  cin >> m;
  y = m / 12; // 2.25
  cm = m % 12; // 3
  cout << y << " " << m << endl;
}
