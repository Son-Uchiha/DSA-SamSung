#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while(t--){
        int n, K; cin >> n >> K;
        ll a[n];
        ll count = 0;
        for(ll &x : a) cin >> x;
        sort(a, a+n);
        for(int i = 0; i < n - 2; ++i){
            int l = i + 1, r = n - 1;          
            while(l < r){ 
                ll Sum = a[i] + a[l] + a[r];
                if(Sum >= K){
                    r--;
                }
                else{
                    count += r - l;
                    l++;
                }
            }
        }
        cout << count << endl;
    }
}