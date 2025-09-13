#include <bits/stdc++.h>
using namespace std;

int n, x[100], used[100], cnt = 0;

void printf(){
    for(int i = 1; i <= n; ++i) cout << x[i] << " ";
}

void Try(int i){
    for(int j = 1; j <= n; ++j){
        if(!used[j]){
            used[j] = 1;
            x[i] = j;
            if(i == n){
                cout << ++cnt << ": ";
                printf();
                cout << endl;
            }
            else
                Try(i + 1);
            used[j] = 0;
        }
    }
}

int main(){
    cin >> n;
    Try(1);
}