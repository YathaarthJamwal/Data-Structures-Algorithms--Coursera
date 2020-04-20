#include <iostream>
using namespace std;

int main()
{

    int d, m, n;
    cin >> d >> m >> n;

    int stations[n + 2] = {0};

    for (int i = 0; i < n; i++)
        cin >> stations[i + 1];

    stations[n + 1] = d;

    int numRefills = 0, currentRefill = 0, lastRefill = 0;

    while (currentRefill <= n)
    {
        lastRefill = currentRefill;

        while (currentRefill <= n && ((stations[currentRefill + 1] - stations[lastRefill]) <= m))
            currentRefill += 1;

        if (currentRefill == lastRefill)
        {
            numRefills = -1;
            break;
        }

        if (currentRefill <= n)
            numRefills += 1;
    }

    cout << numRefills << endl;

    return 0;
}