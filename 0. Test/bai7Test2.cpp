#include <bits/stdc++.h>
using namespace std;

int n, k;
string a[100];
vector<string> v;
int x[100];
set<string> se;

void Try(int i){
    for(int j = x[i - 1] + 1; j <= n - k + i; ++j){
        x[i] = j;
        a[i] = v[j];
        if(i == k){
            string str = "";
            for(int i = 1; i <= k; ++i)  str += a[i];
            se.insert(str);
        }
        else Try(i + 1);
    }
}

int main(){
    cin >> n >> k;
    v.push_back("0");
    for(int i = 1; i <= n; ++i){
        string s; cin >> s;
        v.push_back(s);
    }
    Try(1);
    for(auto x : se) cout << x << endl;
}

