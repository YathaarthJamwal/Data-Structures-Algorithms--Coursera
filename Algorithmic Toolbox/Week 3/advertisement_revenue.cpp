#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int CalcIt(vector<long long int> Profit, vector<long long int> Clicks, int n);
int main()
{
    int n;
    cin >> n;
    vector<long long int> Profit(n);
    vector<long long int> Clicks(n);
    for (int i = 0; i < n; i++)
        cin >> Profit[i];
    for (int i = 0; i < n; i++)
        cin >> Clicks[i];
    cout << CalcIt(Profit, Clicks, n) << endl;
}
int CalcIt(vector<long long int> Profit, vector<long long int> Clicks, int n)
{
    sort(Profit.begin(), Profit.end());
    sort(Clicks.begin(), Clicks.end());
    long long int Sum = 0;
    for (int i = 0; i < n; i++)
    {
        Sum += (Profit[i] * Clicks[i]);
    }
    return Sum;
}