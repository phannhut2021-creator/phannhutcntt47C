#include<iostream>
#include<cstdlib>  

using namespace std;

int ucln(int a,int b){
    while (b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return abs(a);
}
int bcnn(int a,int b){
    if (a == 0 || b == 0)
        return 0;
    return abs(a*b) / ucln(a,b);
}
int main(){
    int a,b;
    cout <<"nhap hai so:";
    cin >> a >> b;

    int ketqua = bcnn(a,b);
    cout <<"bcnn cua "<< a << " va " << b << " la: " << ketqua << endl;

    return 0;
}
