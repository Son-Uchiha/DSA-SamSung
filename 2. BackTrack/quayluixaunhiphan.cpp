#include <bits/stdc++.h>
using namespace std;

int n, X[100];

void result(){
    for(int i = 1; i <= n; ++i) cout << X[i];
    cout << endl;
}

void BackTrack(int i){
    for(int j = 0; j <= 1; ++j){
        X[i] = j;
        if(i == n)
            result();
        else
            BackTrack(i + 1);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    BackTrack(1);
}