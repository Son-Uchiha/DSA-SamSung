#include <bits/stdc++.h>
using namespace std;

vector<string> v;
map<string,int> mp;
int n;
string k;
string a[100];

void Try(int i){
    for(int j = 0; j < v.size(); ++j){
        if(mp[v[j]] == 0){
            a[i] = v[j];
            mp[v[j]] = 1;
            if(i == n){
                if(a[n] == k){
                    for(int x = 1; x <= n; ++x) cout << a[x] << " ";
                    cout << endl;
                }
            }
            else
                Try(i + 1);
            mp[v[j]] = 0;    
        }
    }
}

int main(){
    cin >> n;
    string s;
    for(int i = 1; i <= n; ++i){
        cin >> s;
        v.push_back(s);
    }
    sort(v.begin(), v.end());
    cin >> k;
    Try(1);
}