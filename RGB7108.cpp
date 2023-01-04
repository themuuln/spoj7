#include <iostream>
using namespace std;

int main()
{
  int a, b, c, m;
  cin >> a >> b >> c;
  if (a % 2 == 1)
  {
    m *= a;
  }
  if (b % 2 == 1)
  {
    m *= b;
  }
  if (c % 2 == 1)
  {
    m *= c;
  }
  cout << m << endl;
}