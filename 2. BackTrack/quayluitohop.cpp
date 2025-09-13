#include <bits/stdc++.h>
using namespace std;

int n, k, X[100];

void result(){
    for(int i = 1; i <= k; ++i) cout << X[i] << " ";
    cout << endl;
}

void BackTrack(int i){
    for(int j = X[i-1] + 1; j <= n - k + i; ++j){
        X[i] = j;
        if(i == k)
            result();
        else
            BackTrack(i + 1);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> k;
    BackTrack(1);
}