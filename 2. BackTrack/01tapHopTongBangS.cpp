// #include <bits/stdc++.h>
// using namespace std;

// int n, k, s, ans = 0, a[11];

// void Try(int i, int sum){
//     if(i == k+1){
//         if(sum == s) ++ans;
//         return;
//     }
//     for(int j = a[i-1] + 1; j <= n - k + i; ++j){
//         a[i] = j;
//         Try(i + 1, sum + j);
//     }
// }


// int main(){
//     cin >> n >> k >> s;
//     Try(1, 0);
//     cout << ans;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int n, k, s, ans = 0, sum = 0, a[11];

// void Try(int i, int sum){
//     for(int j = a[i-1] + 1; j <= n - k + i; ++j){
//         a[i] = j;
//         if(i == k){
//             if(sum + j == s) ++ans;  
//         }      
//         else    
//             Try(i + 1, sum + j);
//     }
// }

// int main(){
//     cin >> n >> k >> s;
//     Try(1, 0);
//     cout << ans;
// }


#include <bits/stdc++.h>
using namespace std;

int n, k, s, ans = 0, sum = 0, a[11];

void Try(int i){
    for(int j = a[i-1] + 1; j <= n - k + i; ++j){
        a[i] = j;
        sum += j;
        if(i == k){
            if(sum == s) ++ans; 
        }
        else    
            Try(i + 1);
        sum -= j;
    }
}

int main(){
    cin >> n >> k >> s;
    Try(1);
    cout << ans;
}
