#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> odd;
    vector<int> even;
    map <int,int> mp;
    for(int i = 0; i < n; ++i){
        int x; cin >> x;
        if(x % 2) {
            odd.push_back(x);
            mp[i] = 1;
        }
        else even.push_back(x);
    }
    sort(odd.begin(), odd.end(), greater<int>());
    sort(even.begin(), even.end());
    int i = 0, j = 0;
    for(int k = 0; k < n; ++k){
        if(mp[k]) cout << odd[i++] << " ";
        else cout << even[j++] << " ";
    }
}

// Cho dãy số A[] có n phần tử. Hãy sắp xếp các số chẵn trong dãy theo thứ tự tăng dần và các số lẻ theo thứ tự giảm dần.

// In ra dãy kết quả đã sắp xếp trong đó vị trí số chẵn và vị trí số lẻ không thay đổi so với dãy ban đầu.

// Input

// Dòng đầu ghi số n (1 < n ≤ 1000)

// Các dòng tiếp theo ghi đủ n số của dãy A[], các số đều nguyên dương và không quá 1000.

// Output

// Ghi ra dãy kết quả đã sắp xếp trong đó các vị trí của số chẵn và số lẻ không thay đổi.