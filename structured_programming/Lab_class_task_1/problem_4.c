#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int digitSum=0;
    while (n>0)
    {
        digitSum+=n%10;
        n/=10;
    };
    if(digitSum%10==0){
        printf("true");
    } else{
        printf("false");
    } 
    return 0;
}