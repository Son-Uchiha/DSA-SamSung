#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> odd;
    vector<int> even;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            even.push_back(a[i]);
        else
            odd.push_back(a[i]);
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end(), greater<int>());
    for (int i = 0; i < n; ++i)
    {
        if (a[i] % 2 == 1)
        {
            cout << odd[0] << " ";
            odd.erase(odd.begin());
        }
        else
        {
            cout << even[0] << " ";
            even.erase(even.begin());
        }
    }
}