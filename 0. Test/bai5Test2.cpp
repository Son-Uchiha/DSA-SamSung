
#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[100];

void Try(int i){
    int start = (i == 1) ? 1 : a[i-1];
    for(int j = start; j <= n; ++j){
        a[i] = j;
        if(i == k){
            for(int i = 1; i <= k; ++i) cout << a[i] << " ";
            cout << endl;
        }
        else
            Try(i + 1);
    }
}

int main(){
    cin >> n >> k;
    Try(1);
}