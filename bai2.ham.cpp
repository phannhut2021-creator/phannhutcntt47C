#include<iostream>
#include<cmath>
using namespace std;

void giaiphuongtrinhbachai(double a,double b,double c){
	if(a==0){
		if(b==0){
			if(c==0){
				cout <<"phuong trinh vo so nghiem."<<endl;
            else
                cout <<"phuong trinh vo nghiem."<<endl;
        } else {
            double x = -c / b;
            cout <<"phuong trinh co mot nghiem: x ="<< x <<endl;
        }
    } else {
        double delta =b * b - 4 * a * c;
        if (delta < 0){
            cout <<"phuong trinh vo nghiem."<<endl;
        } else if (delta ==0){
            double x = -b / (2 * a);
            cout <<"phuong trinh co nghiem kep: x ="<< x <<endl;
        } else {
            double x1 =(-b + sqrt(delta)) / (2 * a);
            double x2 =(-b - sqrt(delta)) / (2 * a);
            cout <<"phuong trinh co hai nghiem phan biet:"<<endl;
            cout <<"x1 ="<< x1 <<endl;
            cout <<"x2 ="<< x2 <<endl;
        }
    }
}
				
			
