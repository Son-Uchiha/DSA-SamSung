#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double solve(int A, int B, int C) {
    double left = 0, right = 1000;
    while (right - left > 1e-9) {
        double mid = (left + right) / 2;
        double f = A * mid * mid * mid + B * mid - C;
        if (f < 0)
            left = mid;
        else
            right = mid;
    }
    return left;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int A, B, C;
        cin >> A >> B >> C;
        double x = solve(A, B, C);
        cout << fixed << setprecision(4) << x << endl;
    }
    return 0;
}
