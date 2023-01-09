#include <iostream>
using namespace std;

int main()
{
  int num;
  cin >> num;

  int result = factorial(num);
  cout << result << endl;

  return 0;
}

int factorial(int n)
{
  if (n == 0)
  {
    return 1;
  }
  else
  {
    return n * factorial(n - 1);
  }
}