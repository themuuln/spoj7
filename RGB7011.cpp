#include <iostream>
using namespace std;

int main() {
  int a, m, s;
  cin >> a;
  m = a / 60;
  s = a % 60;
  cout << m << " " << s;
}
