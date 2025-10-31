#include <iostream>
using namespace std;

double tinhthue(double thunhap){
    double thue = 0;

    if (thunhap <= 5000000)
        thue = thunhap * 0.05;
    else if (thunhap <= 10000000)
        thue = 5000000 * 0.05 + (thunhap - 5000000) * 0.10;
    else if (thunhap <= 18000000)
        thue = 5000000 * 0.05 + 5000000 * 0.10 + (thunhap - 10000000) * 0.15;
    else if (thunhap <= 32000000)
        thue = 5000000 * 0.05 + 5000000 * 0.10 + 8000000 * 0.15 + (thunhap - 18000000) * 0.20;
    else if (thuNhap <= 52000000)
        thue = 5000000 * 0.05 + 5000000 * 0.10 + 8000000 * 0.15 + 14000000 * 0.20 + (thunhap - 32000000) * 0.25;
    else if (thunhap <= 80000000)
        thue = 5000000 * 0.05 + 5000000 * 0.10 + 8000000 * 0.15 + 14000000 * 0.20 + 20000000 * 0.25 + (thunhap - 52000000) * 0.30;
    else
        thue = 5000000 * 0.05 + 5000000 * 0.10 + 8000000 * 0.15 + 14000000 * 0.20 + 20000000 * 0.25 + 28000000 * 0.30 + (thunhap - 80000000) * 0.35;

    return thue;
}
int main(){
    double thunhap;
    cout <<"nhap thu nhap hang thang(vnd):";
    cin >> thunhap;

    if (thunhap <= 0){
        cout <<"thu nhap phai lon hon 0!"<< endl;
        return 1;
    }
    double thue = tinhthue(thunhap);
    cout <<"so tien thue phai nop:"<< thue << "vnd" <<endl;

    return 0;
}
