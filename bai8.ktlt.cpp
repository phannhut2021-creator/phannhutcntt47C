#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main(){
    int n,i;
    bool lasnt =true;

    printf("nhap so nguyen n:");scanf("%d",&n);
    if (n < 2){
        lasnt =false;
    }else{
        for(i =2;i <=sqrt(n);i++){
            if(n % i ==0){
                lasnt =false;
                break;
            }
        }
    }
    if (lasnt){
        printf("%d la so nguyen to.\n",n);
    } else {
        printf("%d khong phai la so nguyen to.\n",n);
    }

    return 0;
}
