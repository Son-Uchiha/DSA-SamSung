#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
    vector<int> a(n), dp(n,1);
    for(int &x : a) cin >> x;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < i; ++j){
            if(a[j] < a[i]){
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    cout << n - *max_element(dp.begin(), dp.end()) << endl;
}