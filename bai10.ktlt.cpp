#include<stdio.h>
#include<math.h>

int main(){
    double f,r,p;
    int n;
    
    printf("nhap so tien can co:");scanf("%if", &f);

    printf("nhap so thang gui:");scanf("%d",&n);

    printf("nhap lai suat moi thang:");scanf("%if",&r);

    p =f/pow(1 + r/100,n);

    printf("So tien can gui ban dau la:%.2lf vnd\n",f);

    return 0;
}
