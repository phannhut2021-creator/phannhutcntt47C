#include<iostream>
using namespace std;

void giaiphuongtrinhbacnhat(double a,double b){
	if(a==0){
		if(b==0){
		   cout <<"phuong trinh vo so nghiem."<<endl;
        } else {
            cout <<"phuong trinh vo nghiem."<<endl;
        }
    } else {
        double x = -b / a;
        cout <<"phuong trinh co nghiem x ="<< x <<endl;
    }
}	
 int main(){
    double a,b;
    cout <<"nhap he so a:";
    cin >> a;
    cout <<"nhap he so b:";
    cin >> b;

    giaiphuongtrinhbacnhat(a,b);

    return 0;
} 
