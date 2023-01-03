#include <iostream>
using namespace std;

int main() {
  int h, m, s, a;
  cin >> h >> m >> s;
  a = h * 3600 + m * 60 + s;
  cout << a << endl;
}
