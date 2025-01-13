#include <stdio.h>
int main(){
    int intSz = sizeof(int);
    int longLongIntSz = sizeof(long long int);
    int doubleSz = sizeof(double);
    int floatSz = sizeof(float);
    int charSz = sizeof(char);
    printf("Size of integer : %d bytes \n",intSz);
    printf("Size of float : %d bytes \n",floatSz);
    printf("Size of double : %d bytes \n",doubleSz);
    printf("Size of char : %d bytes \n",charSz);
    return 0;
}