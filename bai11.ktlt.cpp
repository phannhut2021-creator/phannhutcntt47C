#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while (t--){
        int gia,tra;
        scanf("%d %d",&gia,&tra);

        int tienthua=tra - gia;
        int found =0;

        for (int b =0;b <=1 && !found;b++){
            for (int c =0;c <=4 && !found;c++){
                int remainder =tienthua - (5 * b + 1 * c);
                if (remainder >=0 && remainder % 10 == 0){
                    int a =remainder/ 10;
                    printf("%d =%d * 10 + %d * 5 + %d * 1\n",tienthua,a,b,c);
                    found =1;
                }
            }
        }
    }

    return 0;
}
