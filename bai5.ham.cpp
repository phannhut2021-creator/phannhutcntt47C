#include <iostream>
#include <cmath>
using namespace std;
long long giaithua(int n) {
    long long gt = 1;
    for (int i = 1; i <= n; i++)
        gt *= i;
    return gt;
}
long long tohop(int n, int k) {
    return giaithua(n) / (giaithua(k) * giaithua(n - k));
}
int main() {
    int n, k;
    cout << "Nhap n va k: ";
    cin >> n >> k;
    if (n < 0 || k < 0 || k > n)
        cout << "Gia tri n, k khong hop le\n";
    else
        cout << "C(" << n << ", " << k << ") = " << tohop(n, k) << endl;
    return 0;
}