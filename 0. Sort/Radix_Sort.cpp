// Radix sort
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int k; cin >> k;
    while(k--){
        int n; cin >> n;
        vector<int> a(n);
        for(int &x : a) {
            cin >> x; 
        }
        int max = *max_element(a.begin(), a.end());
        for(int i = 1; i <= max; i *= 10){
            vector<vector<int>> v(10);
            for(int x:a){
                v[x/i % 10].push_back(x);
            }
            a.clear();
            for(vector<int> v1 : v){
                for(int x : v1) a.push_back(x);
            }              
        } 
        for(int x  : a ) cout << x << " ";
        cout <<endl;
    }
}

// #include <bits/stdc++.h>
// using namespace std;

// int mp[10000];

// void countingSort (int a[], int n){
//     for(int i = 0; i <= *max_element(a, a + n); ++i)
//         while(mp[i]){
//             cout << i << " ";
//             --mp[i];
//         } 
// }

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int k; cin >> k;
//     while(k--){
//         int n; cin >> n;
//         int a[n];
//         for(int &x : a) {
//             cin >> x;
//             ++mp[x];
//         }
//         countingSort(a, n);
//         cout << endl;
//     }
// }