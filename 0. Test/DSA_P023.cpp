#include <bits/stdc++.h>
using namespace std;

int n, k, cnt = 0;
vector<int> a;

bool snt(int n){
    for(int i = 2; i * i <= n; ++i)
        if(n % i == 0) return 0;
    return n > 1;
}

void Try(int pos){
    for(int j = pos; j <= n; ++j){
        a.push_back(j);
        if(a.size() == k){
            ++cnt;
            if(snt(cnt)){
                cout << cnt << ": ";
                for(int i = 0; i < k; ++i) cout << a[i] << " ";
                cout << endl;
            }
        }
        else
            Try(j + 1);
        a.pop_back();
    }
}

int main(){
    cin >> n >> k;
    Try(1);
}