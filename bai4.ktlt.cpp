#include<stdio.h>
 int main(){
 	char hoten[100];
    float diemtoan,diemvan,diemtin,diemtb;

    printf("nhap ho ten:");fgets(hoten,sizeof(hoten),stdin);
    printf("nhap diem mon toan:");scanf("%f",&diemtoan);
    printf("Nhap diem mon van:");scanf("%f",&diemvan);
    printf("Nhap diem mon tin:");scanf("%f", &diemtin);

    diemtb =(diemtoan + diemvan + diemtin)/ 3;

    printf("\n---Ket qua---\n");
    printf("ho ten:%s",hoten);
    printf("diem trung binh:%.2f\n",diemtb);

    if (diemtb <5){
        printf("xep loai:yeu\n");
    } else if (diemtb >=5 && diemtb< 7){
        printf("xep loai: trung binh\n");
    } else if (diemtb >=7 && diemtb< 8){
        printf("xep loai:kha\n");
    } else {
        printf("xep loai:gioi\n");
    }

    return 0;
}
