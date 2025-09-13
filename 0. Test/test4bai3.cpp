#include <bits/stdc++.h>
using namespace std;

// Vector để lưu trữ các số nguyên thủy đã được sinh ra
vector<string> primitive_numbers;

// Hàm sinh trước các số nguyên thủy cần thiết
void precompute() {
    // Sử dụng hàng đợi để sinh số theo thứ tự độ dài tăng dần
    queue<string> q;

    // Bắt đầu với hai nửa đầu tiên có thể có
    q.push("4");
    q.push("5");

    // Sinh ra số nguyên thủy từ hai nửa trên
    primitive_numbers.push_back("44");
    primitive_numbers.push_back("55");

    // Tiếp tục sinh cho đến khi có đủ 10000 số (theo giới hạn N)
    while (primitive_numbers.size() < 10000) {
        // Lấy nửa đầu hiện tại ra khỏi hàng đợi
        string current_half = q.front();
        q.pop();

        // Tạo ra hai nửa đầu mới bằng cách thêm '4' và '5'
        string next_half_1 = current_half + "4";
        string next_half_2 = current_half + "5";
        
        // Đẩy hai nửa mới vào hàng đợi để xử lý ở các vòng lặp sau
        q.push(next_half_1);
        q.push(next_half_2);

        // Tạo số nguyên thủy hoàn chỉnh từ các nửa mới và lưu vào vector
        string reversed_1 = next_half_1;
        reverse(reversed_1.begin(), reversed_1.end());
        primitive_numbers.push_back(next_half_1 + reversed_1);

        string reversed_2 = next_half_2;
        reverse(reversed_2.begin(), reversed_2.end());
        primitive_numbers.push_back(next_half_2 + reversed_2);
    }
}

// Hàm giải quyết cho mỗi test case
void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cout << primitive_numbers[i] << " ";
    }
    cout << endl;
}

int main() {
    // Tăng tốc độ nhập xuất
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Sinh trước tất cả các số một lần duy nhất
    precompute();

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}