#include <bits/stdc++.h>
using namespace std;

int n;
string s = "";
vector<string> v;

void Try(int i){
    for(char j = '6'; j <= '8'; j +=2 ){
        s += j;
        if(s.size() == n)
            v.push_back(s);
        else
            Try(i + 1);
        s.pop_back();
    }
}

int main(){
    int k; cin >> k;
    while(k--){
        cin >> n;
        Try(1); 
        cout << v.size() << endl;
        for(auto x:v) cout << x << " ";
        cout << endl;
        v.clear();
    }
} 