#include <bits/stdc++.h>
using namespace std;

int main(){
    int k; cin >> k;
    while(k--){
        int n, m; cin >> n >> m;
        int a[n];
        multiset<int> v;
        for(int &x:a) cin >> x;
        for(int i = 0; i < m; ++i) v.insert(a[i]);
        cout << *v.rbegin() << " ";
        for(int i = m; i < n; ++i){
           v.erase(v.find(a[i-m]));
           v.insert(a[i]);
           cout << *v.rbegin() << " ";
        }
        cout << endl;
    }
}