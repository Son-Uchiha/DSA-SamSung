#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> a;
vector<int> v;
vector<string> v1;

void Try(int pos){
    for(int j = pos; j < n; ++j){
        v.push_back(a[j]);
        if(v.size() == k){
            string s = "";
            for(int x : v) s += to_string(x) + " ";
            s.pop_back();
            v1.push_back(s);
        }
        else
            Try(j + 1);
        v.pop_back();
    }
}

int main(){
    cin >> n >> k;
    for(int i = 0; i < n; ++i){
        int x; cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    Try(0);
    sort(v1.begin(), v1.end());
    for(auto x : v1) cout << x << endl;
}

