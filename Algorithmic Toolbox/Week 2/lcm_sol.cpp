#include <iostream>

using namespace std;

long long int GCD(long long int a, long long int b)
{
  if (a == 0)
    return b;
  return GCD(b % a, a);
}

long long int lcm_fast(long long int a, long long int b) {
  return (a*b)/GCD(a,b);
}

int main() {
  long long int a, b;
  cin >> a >> b;
  cout << lcm_fast(a, b) << endl;
  return 0;
}
