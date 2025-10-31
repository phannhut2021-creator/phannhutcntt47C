#include <iostream>
using namespace std;

int minOfFour(int a,int b,int c,int d){
    int minVal = a;

    if(b < minVal)minVal = b;
    if(c < minVal)minVal = c;
    if(d < minVal)minVal = d;
    
    return minVal;
}
int main(){
    int a,b,c,d;
    cout <<"nh?p 4 s? nguyên:";
    cin >> a >> b >> c >> d;

    int minValue = minOfFour(a,b,c,d);
    cout <<"giá tr? nh? nh?t là:"<< minValue <<endl;

    return 0;
}

