#include <iostream>
using namespace std;

int main()
{
  int a, b, c, d, t;
  cin >> a >> b >> c >> d;
  if (a % 3 == 0)
  {
    t++;
  }
  if (b % 3 == 0)
  {
    t++;
  }
  if (c % 3 == 0)
  {
    t++;
  }
  if (d % 3 == 0)
  {
    t++;
  }

  cout << t << endl;
  return 0;
}