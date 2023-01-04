#include <iostream>
using namespace std;

int main()
{
  int a, b, c, d, s, i;
  int myNum[4] = {a, b, c, d};
  cin >> a >> b >> c >> d;
  for (i = 0; i <= 4; i++)
  {
    if (myNum[i] < 4)
    {
      s *= myNum[i];
    }
  }
  cout << s << endl;
  return 0;
}
