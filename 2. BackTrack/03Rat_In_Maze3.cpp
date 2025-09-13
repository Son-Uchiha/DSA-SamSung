#include <bits/stdc++.h>
using namespace std;

int n, a[100][100];
string path = "DRLU";
int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, 1, -1, 0};

void nhap(){
    cin >> n;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j)
            cin >> a[i][j];       
}

void Try(int i, int j, string s){
    if(i == n && j == n)
        cout << s << endl; 
    a[i][j] = 0;
    for(int k = 0; k < 4; ++k){
        int i1 = i + dx[k], j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1])
            Try(i1, j1, s + path[k]);
    }
    a[i][j] = 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    nhap();
    Try(1, 1, "");
}