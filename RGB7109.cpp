#include <iostream>
using namespace std;

int main()
{
  int a, b, c, t = 0;
  cin >> a >> b >> c;
  if (a / 5 == 1)
  {
    t++;
  }
  if (b / 5 == 1)
  {
    t++;
  }
  if (c / 5 == 1)
  {
    t++;
  }
  cout << t << endl;
  return 0;
}