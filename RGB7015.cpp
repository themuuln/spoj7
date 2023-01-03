#include <iostream>
using namespace std;

int main() { 
  int h, d, ch;
  cin >> h;
  d = h / 24;
  ch = h % 24;
  cout << d << " " << ch;
}
