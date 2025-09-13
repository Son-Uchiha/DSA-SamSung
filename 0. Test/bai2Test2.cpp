#include <bits/stdc++.h>
using namespace std;

string s;
int k, X[100];
string a = "";
set<string> se;

void BackTrack(int i){
    for(int j = X[i-1] + 1; j <= s.size() - k + i - 1; ++j){
        X[i] = j;
        a += s[j]; 
        if(a.size() == k)
            se.insert(a);
        else
            BackTrack(i + 1);
        a.pop_back();
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> s >> k;
        s = "0" + s;
        BackTrack(1);
        for(auto x : se) cout << x << endl;
        se.clear();
    }
}

