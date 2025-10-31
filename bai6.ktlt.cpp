#include<stdio.h>

int main(){
    float tiengui,laixuat,tiencuoi;
    int thang,i;      
    printf("nhap tien gui:");scanf("%f",&tiengui);

    printf("nhap lai xuat (phan tram/thang):");scanf("%f",&laixuat);

    printf("nhap so thang gui:");scanf("%d", &thang);
    
    tiencuoi = tiengui;
    
    for(i =1; i <=thang;i++){
        tiencuoi =tiencuoi + tiencuoi * laixuat/ 100;
    }   
    
    printf("so tien sau khi gui xong:%.2f\n",tiencuoi);

    return 0;
}
