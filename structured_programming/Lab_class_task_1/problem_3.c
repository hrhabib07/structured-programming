#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int x;
    scanf("%d",&x);
    int digit=0;
    int rev=abs(x);
    while (rev>0)
    {
        digit++;
        rev/=10;
    };
    rev=abs(x);
    int res=0;
    while (rev>0)
    {
        res+=(rev%10*(pow(10,digit-1)));
        rev/=10;
        digit--;
    };
    res++;
    if(x>0){
        printf("%d",res);
    } else{
        printf("%d",-res);
    }
    

    return 0;
}