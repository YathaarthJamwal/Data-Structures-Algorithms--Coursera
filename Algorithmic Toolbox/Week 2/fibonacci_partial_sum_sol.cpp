#include <iostream>

using namespace std;

long long int Periodic(long long int m)
{
    long long int a = 0, b = 1, c = a + b;
    for (long long int i = 0; i < m * m; i++)
    {
        c = (a + b) % m;
        a = b;
        b = c;
        if (a == 0 && b == 1)
            return i + 1;
    }
}

long long int get_fibonacci_huge_fast(long long int n, long long int m)
{
    long long int remainder = n % Periodic(m);

    long long int first = 0;
    long long int second = 1;

    long long int res = remainder;

    for (long long int i = 1; i < remainder; i++)
    {
        res = (first + second) % m;
        first = second;
        second = res;
    }

    return res % m;
}


long long get_fibonacci_partial_sum_fast(long long m, long long n) {
    long long int Last_Digit_Of_nPlus2 = get_fibonacci_huge_fast(n + 2, 10);
    long long int Last_Digit_Of_mPlus1 = get_fibonacci_huge_fast(m + 1, 10);

    if (Last_Digit_Of_nPlus2 >= Last_Digit_Of_mPlus1)
        return (Last_Digit_Of_nPlus2 - Last_Digit_Of_mPlus1);
    else
        return ((10 + Last_Digit_Of_nPlus2) - Last_Digit_Of_mPlus1);
}

int main() {
    long long from, to;
    cin >> from >> to;
    cout << get_fibonacci_partial_sum_fast(from, to) << '\n';
}
