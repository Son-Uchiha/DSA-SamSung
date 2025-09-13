#include <bits/stdc++.h>
using namespace std;

int n, m, X[100];
int dem = 0;
void result(){
    for(int i = 1; i <= n + m; ++i) cout << X[i];
    cout << endl;
}

void BackTrack(int i){
    for(int j = 0; j <= 1; ++j){
        X[i] = j;
        if(X[i] == 0) ++dem;
        if(i == n + m){   
           if(dem == n) result();
        }     
        else
            BackTrack(i + 1);
        if(X[i] == 0) --dem;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    BackTrack(1);
}