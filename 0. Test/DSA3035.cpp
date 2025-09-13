#include <bits/stdc++.h>
using namespace std;

int dp[1000001];

int main(){
    int n; cin >> n;
    int a[n];
    int res = 0;
    for(int &x : a){
        cin >> x;
        dp[x] = dp[x-1]+1;
        res = max(res, dp[x]);
    }
    cout << n - res;
}