#include<stdio.h>

int main(){
 float thang_10;
 float thang_4;
 char thang_chu;
 printf("nhap diem thang 10:");scanf("%f",&thang_10);

 if (thang_10 <0.0 || thang_10 >10.0){
        printf("diem khong hop le.Vui long nhap diem tu 0 den 10.\n");
        return 1;
    }
 if (thang_10 >=9.0){
        thang_4 =4.0;
        thang_chu ='a';  
    } else if(thang_10 >=8.0){
        thang_4 =3.5;
        thang_chu ='a';
    } else if(thang_10 >=7.0){
        thang_4 =3.0;
        thang_chu ='b';  
    } else if(thang_10 >=6.0){
        thang_4 =2.5;
        thang_chu ='b';
    } else if(thang_10 >=5.0){
        thang_4 =2.0;
        thang_chu ='c';
    } else if(thang_10 >=4.0){
        thang_4 =1.5;
        thang_chu ='d';
    } else {
        thang_4 =1.0;
        thang_chu ='f';
    }
    
     printf("diem theo thang 4:%.1f\n",thang_4);
    
    if (thang_10 >=9.0){
        printf("diem theo thang chu:a+\n");
    } else if (thang_10 >=8.0){
        printf("diem theo thang chu:a\n");
    } else if (thang_10 >=7.0){
        printf("diem theo thang chu:b+\n");
    } else if (thang_10 >=6.0) {
        printf("diem theo thang chu:b\n");
    } else if (thang_10 >=5.0) {
        printf("diem theo thang chu:c\n");
    } else if (thang_10 >=4.0) {
        printf("diem theo thang chu:d\n");
    } else {
        printf("diem theo thang chu:f\n");
    }

    return 0;
}
