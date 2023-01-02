#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
  int n1, n2, d1, d2;
  cin >> n1 >> d1;
  cin >> n2 >> d2;
  long n = n1 * d2 + n2 * d1;
  long d = d1 * d2;
  int div = __gcd(n, d);
  n = n / div;
  d = d / div;
  cout << n << endl
       << d;

  return 0;
}