#include <iostream>
using namespace std;

int main() {
  // a = 3612
  int a, h, m, s;
  cin >> a;
  h = a / 3600; // 1
  m = a % 3600 / 60; // 60.2
  s = a % 60; //  
  cout << h << " " << m << " " << s << endl;
}
