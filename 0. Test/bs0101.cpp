#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n, k, x[100];
ll F[93];

bool check(ll x){
    F[0] = 1;
    F[1] = 1;
    for(int i = 2; i <= 92; ++i){
        F[i] = F[i - 2] + F[i - 1];
        if(x == F[i]) return 1;
    }
    return 0;
}

void printf(){
    for(int i = 1; i <= k; ++i) cout << x[i] << " ";
    cout << endl;
}

void Try(int i){
    for(int j = x[i - 1] + 1; j <= n - k + i; ++j){
        x[i] = j;
        if(i == k){
            int sum = 0;
            for(int i = 1; i <= k; ++i) sum += x[i];
            if(check(sum)) printf();
        }
        else 
            Try(i + 1);
    }
}

int main(){
    cin >> n >> k;
    Try(1);
}