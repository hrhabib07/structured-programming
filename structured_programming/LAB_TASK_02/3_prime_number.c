// 3. prime number check in c
#include <stdio.h>
#include <math.h>
int main(){
    int n; scanf("%d",&n);
    int mult = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if(n%i==0){
            mult++;
        } 
    }
    if(mult<2 && mult!=0){
        printf("Prime");
    } else{
        printf("Not Prime");
    }
    return 0;
}