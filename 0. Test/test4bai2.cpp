#include <bits/stdc++.h>
using namespace std;

int n, a[101][101];
string BinaryString = "";
string bestBinaryString = "";

void nhap(){
    cin >> n;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j)
            cin >> a[i][j];
}

void BackTrack(int i, int j){
    BinaryString += to_string(a[i][j]);
    if(i == n && j == n)
        bestBinaryString = max(bestBinaryString, BinaryString);
    else{
        // đi xuống
        if(i + 1 <= n) BackTrack(i + 1, j);
        // đi sang phải
        if(j + 1 <= n) BackTrack(i, j + 1);
    }
    BinaryString.pop_back();
}

int main(){
    nhap();
    BackTrack(1,1);
    cout << hex << uppercase << stoll(bestBinaryString, nullptr, 2);
}