#include<stdio.h>
#include<string.h>

int isPalindrome(int n){
    char s[7];
    sprintf(s,"%06d",n); 
    for (int i = 0;i < 3; i++){
        if (s[i] !=s[5 - i])return 0;
    }
    return 1;
}

int sumDigits(int n){
    int sum =0;
    for (int i =0;i <6;i++){
        sum +=n % 10;
        n /=10;
    }
    return sum;
}
int noZeroInSum(int n){
    int s =sumDigits(n);
    while (s > 0){
        if (s % 10 ==0)return 0;
        s /=10;
    }
    return 1;
}
int main(){
    int loai3[1000],loai2[1000],loai1[1000];
    int count_loai3 =0,count_loai2 =0,count_loai1 =0;

    for(int i =100000;i <=999999;i++){
        if (isPalindrome(i)){
            loai3[count_loai3++]=i;
            int tong =sumDigits(i);
            if (tong % 10 == 0){
                loai2[count_loai2++]=i;
                if (noZeroInSum(i)){
                    loai1[count_loai1++]=i;
                }
            }
        }
    }

    int t;
    scanf("%d",&t);
    while (t--){
        int n,m,k;
        scanf("%d %d %d",&n, &m, &k);

        if (count_loai1 >=n &&(count_loai2 - n)>=m &&(count_loai3 - n - m)>=k){
            printf("yes");
        } else {
            printf("no");
        }
    }
    printf("\n");

    return 0;
}
