#include <bits/stdc++.h>
using namespace std;

int n; 
string a = "";

void Try(int i){
    for(char j = 'A'; j <= 'B'; ++j){
        a += j;
        if(a.size() == n) {
            int check1 = 0, check2 = 0;
            for(int i = 0; i < n; ++i){
                if(a[i] == 'A') check1 = 1;
                if(a[i] == 'B') check2 = 1;
            }
            if(check1 && check2) cout << a << endl;
        }
        else Try(i + 1);  
        a.pop_back();
    }
}

int main(){
    cin >> n;
    Try(1);
}