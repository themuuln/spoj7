#include <iostream>
using namespace std;

int main()
{
  int a, b, c, d, s;
  cin >> a >> b >> c >> d;
  if (a % 11 != 0)
  {
    s += a;
  }
  if (b % 11 != 0)
  {
    s += b;
  }
  if (c % 11 != 0)
  {
    s += c;
  }
  if (d % 11 != 0)
  {
    s += d;
  }
  cout << s << endl;
  return 0;
}