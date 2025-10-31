#include <iostream>
#include <cmath>
using namespace std;
bool nguyento(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}
bool chinhphuong(int n) {
    int x = sqrt(n);
    return x * x == n;
}
bool doixung(int n) {
    int t = n, d = 0;
    while (t > 0) {
        d = d * 10 + t % 10;
        t /= 10;
    }
    return d == n;
}
int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    if (n <= 0) {
        cout << "n phai > 0\n";
        return 0;
    }
    cout << n << (nguyento(n) ? " la so nguyen to\n" : " khong la so nguyen to\n");
    cout << n << (chinhphuong(n) ? " la so chinh phuong\n" : " khong la so chinh phuong\n");
    cout << n << (doixung(n) ? " la so doi xung\n" : " khong la so doi xung\n");
    return 0;
}