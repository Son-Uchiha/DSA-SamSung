#include <bits/stdc++.h>
using namespace std;

int n;
string s = "";
char used[100];

void tryNumber(int i){
    for(char j = '1'; j <= n + '0'; ++j){
        s += j;
        if(s.size() == 2*n)
           cout << s << endl;     
        else
            tryNumber(i + 1);
        s.pop_back();
    }
}

void tryChar(int i){
    for(char j = 'A'; j <= 'A' + n - 1; ++j){
        if(used[j] == 0){
            used[j] = 1;
            s += j;
            if(s.size() == n)
                tryNumber(1);     
            else
                tryChar(i + 1);
            used[j] = 0;
            s.pop_back();
        }
    }
}

int main(){
    cin >> n;
    tryChar(1);
}