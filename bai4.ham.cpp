#include<iostream>
#include<cmath>
using namespace std;
bool laTamGiac(double a,double b,double c){
	return (a+b>c && a+c>b && b+c>a);
}
double dienTich(double a,double b,double c){
	double p=(a+b+c)/2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}
void phanLoai(double a,double b,double c){
	if(!laTamGiac(a,b,c)){
		cout<<"ba canh ko deu thanh tam giac.\n";
	return;
}
if(a==b && b==c)
cout<<"tam giac deu.\n";
else if(a==b|| b == c || a == c) {
        if (fabs(a*a + b*b - c*c) < 1e-6 || fabs(a*a + c*c - b*b) < 1e-6 || fabs(b*b + c*c - a*a) < 1e-6)
            cout << "Tam giác vuông cân.\n";
        else
            cout << "Tam giác cân.\n";
    }
    else if (fabs(a*a + b*b - c*c) < 1e-6 || fabs(a*a + c*c - b*b) < 1e-6 || fabs(b*b + c*c - a*a) < 1e-6)
        cout << "Tam giác vuông.\n";
    else
        cout << "Tam giac thuong.\n";
    cout << "Dien tich tam giac = " << dienTich(a, b, c) << endl;
}
int main() {
    double a, b, c;
    cout << "Nhap 3 canh tam giac: ";
    cin >> a >> b >> c;
    phanLoai(a, b, c);
    return 0;
}