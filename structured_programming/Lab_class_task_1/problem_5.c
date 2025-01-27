#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n<4){
        printf("false");
    } else if(n%2==0){
        printf("true");
    } else{
        int count=0;
        int range=sqrt(n);
        for (int i = 1; i <= range; i++)
        {
            if(n%i==0){
                if(count>=2){
                    break;
                }
                count++;
            }
        }
        if(count>=2){
            printf("true");
        }else{
            printf("false");
        }
        
    }
    return 0;
}