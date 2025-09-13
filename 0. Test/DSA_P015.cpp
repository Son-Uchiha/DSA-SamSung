#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> a;
vector<bool> used;

void Try(int i){
    for(int j = 1; j <= n; ++j){
        if(used[j] == 0){
            used[j] = 1;
            a[i] = j;
            if(i == n - 1){
                if(a[i] == k) {
                    for(int x:a) cout << x << " ";
                    cout << endl;
                }
            }
            else
                Try(i + 1);
            used[j] = 0;
        }
    }
}

int main(){
    cin >> n >> k;
    a.resize(n, 0);
    used.resize(n+1, 0);
    Try(0);
}
