#include <iostream>
using namespace std;

int main()
{
  int a = 2, n, m = 1;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    m *= a;
  }
  cout << m << endl;
}

// 2-ын өгөгдсөн тоон зэргийг ол. /2-ын n зэрэг гэдэг нь 2*2*...*2. Жишээ нь 2-ын 3 зэрэг 2*2*2=8 /
// Input

// Int төрлийн нэг тоо өгөгдөнө. Тэр тоо нь 2-ыг хэдэн удаа үржүүлэхийг заана.
// Output

// 2-ын өгөгдсөн тоон зэрэг.