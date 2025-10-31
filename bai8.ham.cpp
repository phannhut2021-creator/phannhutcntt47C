#include<iostream>
using namespace std;

void lietkeuoc(int n){
    cout <<"cac uoc cua"<<n<<"la:";
    for (int i = 1;i <= n;++i){
        if (n % i == 0){
            cout <<i<< " ";
        }
    }
    cout << endl;
}
int tonguoc(int n){
    int tong =0;
    for (int i = 1;i <= n;++i){
        if (n % i == 0){
            tong += i;
        }
    }
    return tong;
}
int demuoc(int n){
    int dem = 0;
    for (int i = 1;i <= n;++i){
        if (n % i == 0){
            dem++;
        }
    }
    return dem;
}
int tonguocchan(int n){
    int tong = 0;
    for (int i = 2;i <= n;i += 2){
        if (n % i == 0){
            tong += i;
        }
    }
    return tong;
}
int main(){
    int n;
    cout <<"nhap so nguyen duong n:";
    cin >> n;

    if (n <= 0){
        cout <<"vui long nhap so nguyen duong!"<<endl;
        return 1;
    }
    lietkeuoc(n);

    cout <<"tong cac uoc:"<<tonguoc(n)<<endl;
    cout <<"so luong uoc:"<<demuoc(n)<<endl;
    cout <<"tong cac uoc chan:"<<tonguocchan(n)<<endl;

    return 0;
}
