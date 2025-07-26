#include <bits/stdc++.h>
using namespace std;

void insertionSort(int a[], int n){
    for(int i = 0; i < n; ++i){
        int key = a[i], pos = i - 1;
        while(pos >= 0 && key < a[pos]){
            a[pos + 1] = a[pos];
            --pos;
        }
        a[pos + 1] = key;
        cout << "Buoc " << i << ": ";
        for(int j = 0; j <= i; ++j) cout << a[j] << " ";
        cout << endl;
    }
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    insertionSort(a, n);
}