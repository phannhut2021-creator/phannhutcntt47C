#include<stdio.h>

int main(){
    int n,i;
    long long gt =1;

    printf("nhap so nguyen n:");scanf("%d",&n);
    i =n;
    while (i > 1){
        gt =gt * i;
        i =i - 2;
    }
    printf("%d!! = %lld\n",n,gt);

    return 0;
}
