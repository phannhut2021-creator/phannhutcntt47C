#include <stdio.h>

int main(){
    char tenmathang[100];
    float trongluong;
	float dongia;
	char machatluong;
    int soluong;

    printf("nhap mat hang:");fgets(tenmathang,sizeof(tenmathang),stdin);
    printf("nhap trong luong:");scanf("%f",&trongluong);
    printf("nhap don gia:");scanf("%f",&dongia);
    printf("nhap ma chat luong:");scanf("%s",machatluong);
    printf("nhap so luong:");scanf("%d",&soluong);

    printf("\n---Thong tin mat hang---\n");
    printf("ten mat hang:%s",tenmathang); 
    printf("trong luong:%.2f kg\n",trongluong);
    printf("don gia:%.2f VND\n",dongia);
    printf("ma chat luong:%s\n",machatluong);
    printf("so luong:%d\n",soluong);

    return 0;
}
