#include <iostream>
#include <vector>

using namespace std;

int fibCalc(int n)
{
    vector<int> fib(n + 1);
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= n; i++)
        fib[i] = (fib[i - 1] % 10 + fib[i - 2] % 10) % 10;
    return fib[n];
}

int main() {
    int n;
    cin >> n;
    int c = fibCalc(n);
    cout << c << '\n';
    }
