#include <bits/stdc++.h>
using namespace std;

int n, a[100][100];

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
    if(i + 1 <= n && a[i + 1][j] == 1)
        Try(i + 1, j, s + "D");
    if(j + 1 <= n && a[i][j + 1] == 1)
        Try(i, j + 1, s + "R");   
    if(j - 1 >= 1 && a[i][j - 1] == 1)
        Try(i, j - 1, s + "L");
    if(i - 1 >= 1 && a[i - 1][j] == 1)
        Try(i - 1, j, s + "U");
    a[i][j] = 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    nhap();
    Try(1, 1, "");
}