#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b){
    if(a.size() != b.size()) return a.size() < b.size();
    return a < b;
}

int main(){
    int k; cin >> k;
    vector<string> v;
    while(k--){
        string s; cin >> s;
        string number = "";
        for(int i = 0; i < s.size(); ++i){
            if(isdigit(s[i])) number += s[i];     
            else{             
                if(number.size()) {
                    while(number[0] == '0' && number.size()>1){
                        number.erase(0,1);
                        if(number.size() == 1) break;
                    }
                    v.push_back(number);
                }
                number = ""; 
            }         
        }
        if(number.size()) {
            while(number[0] == '0' && number.size()>1){
                number.erase(0,1);
                if(number.size() == 1) break;
            }
                v.push_back(number);
        }
    }
    sort(v.begin(), v.end(), cmp);
    for(auto x: v) cout << x << endl;
}

// Cho N xâu ký tự bao gồm cả chữ số và chữ cái. Các chữ số liên tiếp sẽ tạo ra một số nguyên. Hãy sắp xếp các số tách được theo thứ tự tăng dần.

// Chú ý: các chữ số 0 ở đầu nếu có sẽ không được tính. Ví dụ: các chữ số tách ra được là 00234 thì được tính như số 234, nếu là 00000000 thì được tính như số 0.

// Input

// Dòng đầu ghi số N (không quá 100).

// N dòng tiếp theo, mỗi dòng ghi một xâu ký tự, độ dài không quá 100.

// Dữ liệu đảm bảo sẽ tách ra được không quá 500 số.  

// Output

// Ghi ra các số theo thứ tự sắp xếp tăng dần, mỗi số trên một dòng.