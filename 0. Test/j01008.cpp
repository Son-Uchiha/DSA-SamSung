#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 2; i * i <= n; ++i){
       
        if(n % i == 0){
        int dem = 0;
            cout << i << " ";
            while(n % i == 0){
                n /= i;
                ++dem;
            }
            cout << dem << " ";
            cout << endl;
        }
    }
    if(n > 1) cout << n << " " << 1;
}