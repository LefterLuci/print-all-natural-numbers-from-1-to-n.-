#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {

    int n,index=0;

    printf("Print all natural numbers from 1 to n. Please type n:\n");
    scanf("%d",&n);

    while(index<=n){

        printf("%d ",index);
        index++;
    }
       return 0;