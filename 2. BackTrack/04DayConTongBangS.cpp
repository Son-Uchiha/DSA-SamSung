#include<bits/stdc++.h>

#define ll long long

using namespace std;
int n, k, d = 0;
int a[21];
vector<vector<int>> v;
vector<int> res;
vector<bool> used;
void Try (int i, long long  sum, int str){
    for(int j = str ; j < n ; j++){
        if(used[j]) continue;
        res.push_back(a[j]);
        sum += a[j];
        used[j] = 1;
        if(sum == k){
            v.push_back(res);
        }
        else if(sum<k){
            Try(i+1,sum, j+1);
        }
        sum -= a[j];
        res.pop_back();
        used[j] = 0;
    }
}
int main(){
    cin >> n >> k ;
    for(int i = 0; i< n ; i++){
        cin >>a[i];
    }
    sort(a,a+n);
    used.resize(n, 0);
    Try(0, 0, 0);
    if(v.empty()){
        cout << -1 << '\n';
    }else{
        for(auto x : v){
            cout << '[';
            for(auto i = 0; i< x.size(); i++){
                cout << x[i] ;
                if(x[i] != x[x.size() - 1]) cout << ' ';
            }
            cout << ']' << '\n';
        }
    }
}
